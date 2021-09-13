
import numpy as np

class ServoControl():
  
   def __init__(self, motion_servo_parameters):
                   
   self.motion_servo_parameters = motion_servo_parameters
    
   def convert_joint_angles_to_pulse_widths(joint_angles):
      servo_pulse_widths = np.array(12)
      
        # convert joint angles for linked legs into servo pulse widths               
        # TEMP TODO LOAD PARAMS FROM FILE
        motion_servo_parameters = {"degrees_at_center_pulse_width": [0, 45, -45, 0, 45, -45, 0, 45, -45, 0, 45, -45],
                  "zero_degrees_pulse_width": [1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500],
                  "pulse_width_per_degree": [10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10]}        
     
        for i in range(12):
            zero_degrees_pulse_width = self.motion_servo_parameters['zero_degrees_pulse_width'][i]
            pulse_width_per_degree = self.motion_servo_parameters['pulse_width_per_degree'][i]
            servo_pulse_widths[i] = joint_angles_linked_leg[i]

      return servo_pulse_widths
  
      
