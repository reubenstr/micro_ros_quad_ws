# convert servo angles to servo pulse widths

import numpy as np

class ServoControl():
  
    def __init__(self, motion_servo_parameters):

        self.motion_servo_parameters = motion_servo_parameters

    def convert_joint_angles_to_pulse_widths(self, joint_angles):
        servo_pulse_widths = np.empty(12)

        for i in range(12):
            zero_degrees_pulse_width = self.motion_servo_parameters['zero_degrees_pulse_width'][i]
            pulse_width_per_degree = self.motion_servo_parameters['pulse_width_per_degree'][i]

            servo_pulse_widths[i] = joint_angles[i] * 180/np.pi * pulse_width_per_degree + zero_degrees_pulse_width

        return servo_pulse_widths