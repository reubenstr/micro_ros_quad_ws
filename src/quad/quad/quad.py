

from src import motion_parameters
from .quad_commander import QuadCommander


from time import sleep
import rclpy
from rclpy.node import Node
import numpy as np

from sensor_msgs.msg import Joy
from quad_interfaces.msg import MotionServos

from rclpy.executors import SingleThreadedExecutor

from src.motion_parameters import MotionParameters 


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('joy_subscriber_node')
        self.subscription = self.create_subscription(
            Joy,
            'joy',
            self.listener_callback,
            10)
        # self.subscription  # prevent unused variable warning
        self.motion_parameters = MotionParameters()

    def map(self, n, in_min, in_max, out_min, out_max):
        return (n - in_min) * (out_max - out_min) / (in_max - in_min) + out_min

    def listener_callback(self, msg):

        # self.get_logger().info('I heard: "%s"' % msg.buttons)


        self.motion_parameters.step_length = self.map(msg.axes[1], -1, 1, -0.1, 0.1)

    def get_motion_parameters(self):        
        return self.motion_parameters

   


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('quad_publisher_node')
        self.publisher_ = self.create_publisher(
            MotionServos, 'motion_servos', 10)
        timer_period = 1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.toggle = False

        self.joint_angles = np.zeros((4, 3))

        self.declare_parameters(
            namespace='',
            parameters=[
                ('bool_value', None),
                ('int_number', None),
                ('float_number', None),
                ('str_text', "default"),
                ('str_text2', None),
                ('bool_array', None),
                ('bytes_array', None),
                ('nested_param.another_int', None)
            ])

    def set_joint_angles(self, joint_angles):
        self.joint_angles = joint_angles

    def timer_callback(self):

        # print(self.get_parameter('str_text').get_parameter_value().string_value)
        # print(self.get_parameter('str_text2').get_parameter_value().string_value)

        msg = MotionServos()     

        self.joint_angles_flat = self.joint_angles.flatten()

        for i in range(12):
            msg.angle[i] = self.joint_angles_flat[i]  

        self.publisher_.publish(msg)     


def main(args=None):
    print('QUAD STARTED')

    rclpy.init(args=args)

    quad_commander = QuadCommander()

    minimal_publisher = MinimalPublisher()
    minimal_subscriber = MinimalSubscriber()

    executor = SingleThreadedExecutor()

    executor.add_node(minimal_publisher)
    executor.add_node(minimal_subscriber)

    

   

    while rclpy.ok():

       
        motion_parameters = minimal_subscriber.get_motion_parameters()
        joint_angles = quad_commander.tick(motion_parameters)
        minimal_publisher.set_joint_angles(joint_angles)
        executor.spin_once()

    try:
        executor.spin()
    finally:
        executor.shutdown()
        minimal_publisher.destroy_node()
        minimal_subscriber.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
