from src import kinematics

from src.kinematics import Kinematics
from src.bezier_gait import BezierGait
from src.beizer_stepper import BezierStepper

import copy


TIME_STEP = 0.100


class QuadCommander():

    def __init__(self):

        self.kinematics = Kinematics()
        self.T_bf0 = self.kinematics.WorldToFoot
        self.T_bf = copy.deepcopy(self.T_bf0)

        self.bezier_gait = BezierGait(dt=TIME_STEP)
        self.bezier_stepper = BezierStepper()

    def tick(self):

        pos, orn, StepLength, LateralFraction, \
        YawRate, StepVelocity, ClearanceHeight, \
        PenetrationDepth = self.bezier_stepper.StateMachine()

        contacts = [0, 0, 0, 0]

        self.T_bf = self.bezier_gait.GenerateTrajectory(StepLength, LateralFraction, YawRate,
                                                        StepVelocity, self.T_bf0, self.T_bf, 
                                                        ClearanceHeight, PenetrationDepth,  contacts)

        joint_angles = self.kinematics.InverseKinimatics(orn, pos, self.T_bf)

        return joint_angles
