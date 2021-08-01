import threading

import rclpy
from rclpy.node import Node

from std_msgs.msg import String

from quad_interfaces.msg import MotionServosParameters



def handle_keyboard(publisher):
    while True:
        print('\n- Simple Publisher Menu -')
        print('   1. Command (Move along path 1)')
        print('   2. Command (Move along path 2)')
        print('   99. Exit')

        menu = input('Input the menu: ')

        if menu == '1':
            #msg = SimpleMessage()
            #msg.command_id = SimpleMessage.COMMAND_FOR_DEMO_1
            #publisher.publish(msg)
            print(" \n>>> command is published : {0}".format(msg.command_id))

        elif menu == '2':
            #msg = SimpleMessage()
            #msg.command_id = SimpleMessage.COMMAND_FOR_DEMO_2
            #publisher.publish(msg)
            print(" \n>>> command is published : {0}".format(msg.command_id))

        elif menu == '99':
            rclpy.shutdown()
            os._exit(1)

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('motion_servos_calibration_node')
        self.publisher_ = self.create_publisher(MotionServosParameters, 'motion_servos_parameters', 10)
        timer_period = 1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.toggle = False;

    def timer_callback(self):    
        self.get_logger().info('sending data')    
        
        
        msg = MotionServosParameters()
        # self.toggle = not self.toggle 
        # msg.enable[0] = self.toggle 
        # self.publisher_.publish(msg)
        # self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1


def main(args=None):
    print('Hi from quad publisher calibration.')

    rclpy.init(args=args)
    
    minimal_publisher = MinimalPublisher()   
    
    #th = threading.Thread(target=handle_keyboard, args=(minimal_publisher,))
    #th.start()
    
    #txt = input("Type something to test this out: ")
    #print("Is this what you just said? ", txt)


  

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()


