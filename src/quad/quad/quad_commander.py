from src import kinematics
import numpy as np
from src import motion_parameters
from src.kinematics import Kinematics
from src.bezier_gait import BezierGait
from src.beizer_stepper import BezierStepper
from src.motion_parameters import MotionParameters 
import copy


TIME_STEP = 0.100


class QuadCommander():

    def __init__(self):

        self.kinematics = Kinematics()
        self.T_bf0 = self.kinematics.WorldToFoot
        self.T_bf = copy.deepcopy(self.T_bf0)

        self.bezier_gait = BezierGait(dt=TIME_STEP)
        # self.bezier_stepper = BezierStepper()

        self.motion_parameters = MotionParameters()

    def tick(self, motion_parameters):
        self.motion_parameters = motion_parameters
        

        #pos, orn, StepLength, LateralFraction, YawRate, StepVelocity, ClearanceHeight, PenetrationDepth = self.bezier_stepper.StateMachine()

        pos = np.array([0.0, 0.0, 0.0])
        orn = np.array([0.0, 0.0, 0.0])
        StepLength=0.001
        LateralFraction=0.0
        YawRate=0.0
        StepVelocity=0.001 
        ClearanceHeight=0.045
        PenetrationDepth=0.003
        contacts = [0, 0, 0, 0]


        StepLength = self.motion_parameters.step_length

        print(StepLength)


        self.T_bf = self.bezier_gait.GenerateTrajectory(StepLength, LateralFraction, YawRate,
                                                        StepVelocity, self.T_bf0, self.T_bf,
                                                        ClearanceHeight, PenetrationDepth,  contacts)

        joint_angles = self.kinematics.InverseKinimatics(orn, pos, self.T_bf)

        return joint_angles
