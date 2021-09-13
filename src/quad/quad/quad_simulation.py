from src import kinematics
import numpy as np
from src import motion_parameters
from src.kinematics import Kinematics
from src.bezier_gait import BezierGait
from src.beizer_stepper import BezierStepper
# from src.motion_parameters import MotionParameters
from src.beizer_stepper import BezierStepper
from src.servo_control import ServoControl
import copy
import time

from src.gym_env import GymEnv
from src.gui_param_control import GuiParamControl
from src.env_randomizer import EnvRandomizer


#import sys
# sys.path.append("/home/devpc/Desktop/quad_ws/src/quad/quad/src/urdf")
# sys.path.append("/home/devpc/Desktop/quad_ws/install/quad/lib/quad/urdf")


class QuadCommander():

    def __init__(self, motion_servo_parameters_path, frame_parameters_path):

        self.motion_servo_parameters_path = motion_servo_parameters_path
        self.frame_parameters_path = frame_parameters_path

        if 1:
            # env
            self.env = GymEnv(render=True,
                              on_rack=False,
                              height_field=False,
                              draw_foot_path=False,
                              env_randomizer=None)
            self.env.reset()
            self.gui_param_controller = GuiParamControl(
                self.env.spot.quadruped)
            self.action = self.env.action_space.sample()
            self.bezier_gait = BezierGait(dt=self.env._time_step)
            # env

        else:
            self.bezier_gait = BezierGait(dt=0.01)

        self.kinematics = Kinematics()   
        self.bezier_stepper = BezierStepper()
        self.servo_control = ServoControl()
        
        
        self.temp = 0

    def tick(self, motion_parameters):

        # get motion parameters from the bezier stepper
        # pos, orn, StepLength, LateralFraction, YawRate, StepVelocity, ClearanceHeight, PenetrationDepth = self.bezier_stepper.StateMachine()

        # get motion parameters from tick input (joystick via ROS)
        self.motion_parameters = motion_parameters
        pos = self.motion_parameters.pos
        orn = self.motion_parameters.orn
        StepLength = self.motion_parameters.step_length
        LateralFraction = self.motion_parameters.lateral_fraction
        YawRate = self.motion_parameters.yaw_rate
        StepVelocity = self.motion_parameters.step_velocity
        ClearanceHeight = self.motion_parameters.clearance_height
        PenetrationDepth = self.motion_parameters.penetration_depth
        contacts = self.motion_parameters.contacts
        contacts = [0, 0, 0, 0]

        # get motion parameters from simulation gui params
        # pos, orn, StepLength, LateralFraction, YawRate, StepVelocity, ClearanceHeight, PenetrationDepth, SwingPeriod = self.gui_param_controller.UserInput()

        # self.bezier_gait.Tswing = self.motion_parameters.swing_period

        # yaw correction TODO

        self.temp += 1
        if self.temp == 25:
            self.temp = 0

        """ 
        print ("**************************")
        print (pos)
        print (orn)T_bf
        print (ClearanceHeight)
        print (PenetrationDepth)
        """

        # get foot poses
        # self.T_bf = self.bezier_gait.GenerateTrajectory(
        #    StepLength, LateralFraction, YawRate, StepVelocity, self.T_bf0, self.T_bf, ClearanceHeight, PenetrationDepth, contacts)
       
        self.T_bf = self.bezier_gait.GenerateTrajectory(
            StepLength, LateralFraction, YawRate, StepVelocity, self.kinematics.WorldToFoot, ClearanceHeight, PenetrationDepth, contacts)

        # print(self.T_bf )   
        # self.T_bf_temp = copy.deepcopy(self.kinematics.WorldToFoot)

        joint_angles = self.kinematics.inverse_kinematics(orn, pos, self.T_bf)       
   
        self.env.pass_joint_angles(joint_angles)
        # pass parameters into the model as external observations (for machine learning)
        # env.spot.GetExternalObservations(self.bezier_gait, self.bezier_stepper)
        # step simulation
        state, reward, done, _ = self.env.step(self.action)
        
        joint_angles_linked_leg = self.kinematics.get_joint_angles_linked_legs(joint_angles)
        servo_pulse_widths = self.servo_control.convert_joint_angles_to_pulse_widths(joint_angles_linked_leg) 

        return servo_pulse_widths
