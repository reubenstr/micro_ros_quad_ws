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
from rclpy.parameter import Parameter

class JoystickSubscriber(Node):
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


class QuadPublisher(Node):
    def __init__(self):
        super().__init__('quad_publisher_node')
        self.publisher_ = self.create_publisher(
            MotionServos, 'motion_servos', 10)
        timer_period = 0.025
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.joint_pulse_widths = np.zeros(12)
        self.enables = np.full(12, False, dtype=bool)
        
    def set_enables(self, enables):
        self.enables = enables

    def set_servo_pulse_widths(self, servo_pulse_widths):
        self.servo_pulse_widths = servo_pulse_widths

    def timer_callback(self):
        msg = MotionServos()

        for i in range(12):
            msg.enable[i] = self.enables[i]
            msg.pulse_width[i] = self.servo_pulse_widths[i]     

        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    rclpy.logging._root_logger.log("QUAD STARTED", LoggingSeverity.INFO)

    quad_publisher = QuadPublisher()
    joystick_subscriber = JoystickSubscriber()     

    parameters = quad_publisher.declare_parameters(
            namespace='',
            parameters=[
                ('motion_servo_parameters_path', None), 
                ('frame_parameters_path', None)])    
      
    rclpy.logging._root_logger.log("****************************************************", LoggingSeverity.INFO) 
    rclpy.logging._root_logger.log(quad_publisher.get_parameter('motion_servo_parameters_path').get_parameter_value().string_value, LoggingSeverity.INFO)
    rclpy.logging._root_logger.log("****************************************************", LoggingSeverity.INFO)

    motion_servo_parameters_path = quad_publisher.get_parameter('motion_servo_parameters_path').get_parameter_value().string_value
    frame_parameters_path = quad_publisher.get_parameter('frame_parameters_path').get_parameter_value().string_value

    quad_commander = QuadCommander(motion_servo_parameters_path, frame_parameters_path)

    executor = SingleThreadedExecutor()
    executor.add_node(quad_publisher)
    executor.add_node(joystick_subscriber)

    while rclpy.ok():
        motion_parameters = joystick_subscriber.get_motion_parameters()
        servo_pulse_widths = quad_commander.tick(motion_parameters)              
        quad_publisher.set_servo_pulse_widths(servo_pulse_widths)
        executor.spin_once()
    
    executor.shutdown()
    quad_publisher.destroy_node()
    joystick_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
