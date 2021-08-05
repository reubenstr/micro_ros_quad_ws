# from .quad_commander import QuadCommander
from .quad_simulation import QuadCommander

from time import sleep
import rclpy
from rclpy.node import Node
import numpy as np
import copy
from sensor_msgs.msg import Joy

from rclpy.executors import SingleThreadedExecutor
from src.motion_parameters import MotionParameters
# from rclpy.logging import LoggingSeverity
from quad_interfaces.msg import MotionServos
from .joystick_interpreter import JoystickInterpreter

from rclpy.logging import LoggingSeverity


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('joy_subscriber_node')
        self.subscription = self.create_subscription(
            Joy, 'joy', self.listener_callback, 10)
        self.joystick_interpreter = JoystickInterpreter()
        self.motion_parameters = MotionParameters()

    def listener_callback(self, msg):
        axes = msg.axes
        buttons = msg.buttons
        self.motion_parameters = self.joystick_interpreter.get_motion_parameters(
            axes, buttons)

    def get_motion_parameters(self):
        return copy.deepcopy(self.motion_parameters)


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('quad_publisher_node')
        self.publisher_ = self.create_publisher(
            MotionServos, 'motion_servos', 10)
        timer_period = 0.025
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
            msg.enable[i] = True
            msg.angle[i] = self.joint_angles_flat[i]

        # rclpy.logging._root_logger.log(str(msg.angle[0]), LoggingSeverity.INFO)

        self.publisher_.publish(msg)


def main(args=None):

    rclpy.init(args=args)

    print('QUAD STARTED')
    # rclpy.logging._root_logger.log("QUAD STARTED", LoggingSeverity.INFO)

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
