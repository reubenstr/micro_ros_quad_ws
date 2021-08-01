import rclpy
from rclpy.node import Node

from std_msgs.msg import String

from quad_interfaces.msg import MotionServos




class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('quad_node')
        self.publisher_ = self.create_publisher(MotionServos, 'motion_servos', 10)
        timer_period = 1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0 
        self.toggle = False;
        
        self.declare_parameters(
            namespace='',
                parameters=[
                ('bool_value', None),
                ('int_number', None),
                ('float_number', None),
                ('str_text', "default"),
                ('str_text2', None),
                ('bool_array', None),
                ('int_array', None),
                ('float_array', None),
                ('str_array', None),
                ('bytes_array', None),
                ('nested_param.another_int', None)
            ])

    def timer_callback(self):
    
        print(self.get_parameter('str_text').get_parameter_value().string_value)
        print(self.get_parameter('str_text2').get_parameter_value().string_value)
    
        msg = MotionServos()
        self.toggle = not self.toggle 
        if self.i > 10:
            msg.enable[0] = True
        else:
            msg.enable[0] = False

        
        msg.angle[0] = self.i 
        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1
        if self.i > 45:
            self.i = 0




def main(args=None):
    print('Hi from quad publisher 2.')

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


