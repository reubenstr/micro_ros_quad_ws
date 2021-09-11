from src import kinematics
import numpy as np
from src import motion_parameters
from src.kinematics import Kinematics
from src.bezier_gait import BezierGait
from src.beizer_stepper import BezierStepper
from src.motion_parameters import MotionParameters
from src.beizer_stepper import BezierStepper
import copy
import time

TIME_STEP = 0.100


class QuadCommander():

    def __init__(self):

        self.kinematics = Kinematics()
        self.T_bf0 = self.kinematics.WorldToFoot
        self.T_bf = copy.deepcopy(self.T_bf0)

        self.bezier_gait = BezierGait(dt=TIME_STEP)
        self.bezier_stepper = BezierStepper()

        self.temp = 0

    def tick(self, motion_parameters):

        self.motion_parameters = MotionParameters()
        self.motion_parameters = motion_parameters
      
        # get motion parameters from the bezier stepper
        # pos, orn, StepLength, LateralFraction, YawRate, StepVelocity, ClearanceHeight, PenetrationDepth = self.bezier_stepper.StateMachine()

        pos = self.motion_parameters.pos
        orn = self.motion_parameters.orn
        StepLength = self.motion_parameters.step_length
        LateralFraction = self.motion_parameters.lateral_fraction
        YawRate = self.motion_parameters.yaw_rate
        StepVelocity = self.motion_parameters.step_velocity
        ClearanceHeight = self.motion_parameters.clearance_height
        PenetrationDepth = self.motion_parameters.penetration_depth
        contacts = self.motion_parameters.contacts
        contacts = [0,0,0,0]
        
        self.temp += 1
        if self.temp == 25:
            self.temp = 0

        """   print ("**************************")
        print (pos)
        print (orn)
        print (StepLength)
        print (LateralFraction)
        print (YawRate)
        print (StepVelocity)  """    

        self.bezier_gait.Tswing = self.motion_parameters.swing_period
      

        self.T_bf = self.bezier_gait.GenerateTrajectory(StepLength, LateralFraction, YawRate,
                                                        StepVelocity, self.T_bf0, self.T_bf,
                                                        ClearanceHeight, PenetrationDepth,  contacts)

        joint_angles = self.kinematics.InverseKinimatics(orn, pos, self.T_bf)

        return joint_angles
