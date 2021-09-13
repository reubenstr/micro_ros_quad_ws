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

import yaml
import io

from os import path, read
import sys
import tty
import os
import signal
from pynput.keyboard import Key, Listener


def show_exception_and_exit(exc_type, exc_value, tb):
    import traceback
    traceback.print_exception(exc_type, exc_value, tb)
    print("Press key to exit.")
    sys.stdin.readline()
    sys.exit(-1)


class QuadPublisher(Node):

    def __init__(self):
        super().__init__('quad_publisher_node')
        self.publisher_ = self.create_publisher(
            MotionServos, 'motion_servos', 10)
        timer_period = 0.025
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.servo_pulse_widths = np.zeros(12)
        self.enables = np.full(12, False, dtype=bool)

    def set_enables(self, enables):
        self.enables = enables

    def set_servo_pulse_widths(self, servo_pulse_widths):
        self.servo_pulse_widths = servo_pulse_widths

    def timer_callback(self):
        msg = MotionServos()

        for i in range(12):
            msg.enable[i] = True
            msg.pulse_width[i] = self.servo_pulse_widths[i]

        # rclpy.logging._root_logger.log(str(msg.angle[0]), LoggingSeverity.INFO)

        self.publisher_.publish(msg)


def save_parameters(motion_servo_parameters_path, parameters):
    with io.open(motion_servo_parameters_path, 'w', encoding='utf8') as outfile:
        yaml.dump(parameters, outfile, default_flow_style=False, allow_unicode=True)


def print_screen(motion_servo_parameters_path, selected_servo, joint_pulse_widths, parameters):

    servo_index_to_name = {
        0: "front left hip",
        1: "front left upper leg",
        2: "front right lower leg",
        3: "front right hip",
        4: "front right upper leg",
        5: "front left lower leg",
        6: "back left hip",
        7: "back left upper leg",
        8: "back left lower leg",
        9: "back right hip",
        10: "back right upper leg",
        11: "back right lower leg"}

    os.system('clear')
    print("Motion Servo Calibration")
    print(motion_servo_parameters_path)
    print(
        "SERVO [PULSE WIDTH] : CENTER ANGLE, ZERO PULSE WIDTH, PULSE WIDTH PER DEGREE")
    for i in range(12):
        text_format = '\033[34m' if selected_servo == i else '\033[0m'
        cur_pulse_width = "[{:>4}]".format(
            joint_pulse_widths[i]) if selected_servo == i else ""
        print(text_format + "{:>2} {:>6}: {:>3} {:>4} {:>5} ({})".format(i,
              cur_pulse_width,
              parameters['degrees_at_center_pulse_width'][i],
              parameters['zero_degrees_pulse_width'][i],
              parameters['pulse_width_per_degree'][i],
              servo_index_to_name.get(i)))
    text_format = '\033[0m'
    print(text_format + "  select * \tselect servo: 0-11, example: select 5")
    print("  * \t\tset current pulse width : 500-2500, example: 1500")
    print("  zero * \tset pulse width at zero degrees: 500-2500, example: zero 1500")
    print("  ratio * \tset pulses per degree: 0-50, example: ratio 11.15")
    print("  save\t\tsaves pulse width and ratio values of selected servo")
    print("  CTRL+C\texit")
    print()


def main(args=None):

    sys.excepthook = show_exception_and_exit

    rclpy.init(args=args)

    rclpy.logging._root_logger.log(
        "MOTION SERVO PARAMETERS CALIBRATION STARTED", LoggingSeverity.INFO)

    quad_publisher = QuadPublisher()

    parameters = quad_publisher.declare_parameters(
        namespace='',
        parameters=[
            ('motion_servo_parameters_path', None),
        ])

    rclpy.logging._root_logger.log(
        "****************************************************", LoggingSeverity.INFO)
    rclpy.logging._root_logger.log(quad_publisher.get_parameter(
        'motion_servo_parameters_path').get_parameter_value().string_value, LoggingSeverity.INFO)
    rclpy.logging._root_logger.log(
        "****************************************************", LoggingSeverity.INFO)

    motion_servo_parameters_path = quad_publisher.get_parameter(
        'motion_servo_parameters_path').get_parameter_value().string_value

    selected_servo = 0
    servo_pulse_widths = np.full(12, 1500)

    # default parameters
    parameters = {"degrees_at_center_pulse_width": [0, 45, -45, 0, 45, -45, 0, 45, -45, 0, 45, -45],
                  "zero_degrees_pulse_width": [1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500],
                  "pulse_width_per_degree": [10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10]}

    if path.exists(motion_servo_parameters_path):
        with open(motion_servo_parameters_path, 'r') as stream:
            parameters = yaml.safe_load(stream)      

    executor = SingleThreadedExecutor()
    executor.add_node(quad_publisher)
    
    while rclpy.ok():

        print_screen(motion_servo_parameters_path, selected_servo, joint_pulse_widths, parameters)

        read_line = sys.stdin.readline()
        read_line_split = read_line.split()

        if len(read_line_split) > 0:
            command = read_line_split[0]
            if command == "save":
                save_parameters(motion_servo_parameters_path, parameters)
            if command.isnumeric():
                val = int(read_line_split[0])
                if val < 500:
                    val = 500
                if val > 2500:
                    val = 2500
                joint_pulse_widths[selected_servo] = val

            if len(read_line_split) > 1:
                if command == "select":
                    val = int(read_line_split[1])
                    if val < 0:
                        val = 0
                    if val > 11:
                        val = 11
                    selected_servo = val
                elif command == "zero":
                    val = int(read_line_split[1])
                    if val < 500:
                        val = 500
                    if val > 2500:
                        val = 2500
                    parameters['zero_degrees_pulse_width'][selected_servo] = val
                elif command == "ratio":
                    val = float(read_line_split[1])
                    if val < 0:
                        val = 0
                    if val > 100:
                        val = 100
                    parameters['pulse_width_per_degree'][selected_servo] = val

        enables = np.full(12, False, dtype=bool)
        enables[selected_servo] = True
        quad_publisher.set_enables(enables)
        quad_publisher.set_servo_pulse_widths(servo_pulse_widths)

        executor.spin_once()

    executor.shutdown()
    quad_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
