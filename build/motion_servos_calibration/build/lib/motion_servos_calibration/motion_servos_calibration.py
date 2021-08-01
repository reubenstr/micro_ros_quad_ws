import rclpy
from rclpy.node import Node

from std_msgs.msg import String

from quad_interfaces.msg import MotionServosParameters

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('motion_servos_calibration_node')
        self.publisher_ = self.create_publisher(MotionServosParameters, 'motion_servos_parameters', 10)
        timer_period = 1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.toggle = False;

    def timer_callback(self):
        msg = MotionServosParameters()
        self.toggle = not self.toggle 
        msg.enable[0] = self.toggle 
        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1


def main(args=None):
    print('Hi from quad publisher calibration.')

    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()


