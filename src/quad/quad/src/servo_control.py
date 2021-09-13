
import numpy as np

class ServoControl():
  
   def __init__(self, motion_servo_parameters_path):
      
      self.motion_servo_parameters_path = motion_servo_parameters_path  
    
    
   def convert_joint_angles_to_pulse_widths(joint_angles):
      servo_pulse_widths = np.array(12)
      
      return servo_pulse_widths
  
      
