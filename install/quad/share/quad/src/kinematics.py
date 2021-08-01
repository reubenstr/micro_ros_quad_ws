import numpy as np
from matrix_transforms import RpToTrans, TransToRp, TransInv, RPY, TransformVector
from collections import OrderedDict

# TODO: model data should come from a single param source (perhaps from the urdf)


class Kinematics:
    def __init__(self,
                 shoulder_length=0.055,
                 elbow_length=0.10652,
                 wrist_length=0.145,
                 hip_x=0.23,
                 hip_y=0.075,
                 foot_x=0.23,
                 foot_y=0.185,
                 height=0.20,
                 com_offset=0.016,
                 shoulder_lim=[-0.548, 0.548],
                 elbow_lim=[-2.17, 0.97],
                 wrist_lim=[-0.1, 2.59]):
        """
        Kinematics
        """
        # COM offset in x direction
        self.com_offset = com_offset

        # Leg Parameters
        self.shoulder_length = shoulder_length
        self.elbow_length = elbow_length
        self.wrist_length = wrist_length

        # Leg Vector desired_positions

        # Distance Between Hips
        # Length
        self.hip_x = hip_x
        # Width
        self.hip_y = hip_y

        # Distance Between Feet
        # Length
        self.foot_x = foot_x
        # Width
        self.foot_y = foot_y

        # Body Height
        self.height = height

        # Joint Parameters
        self.shoulder_lim = shoulder_lim
        self.elbow_lim = elbow_lim
        self.wrist_lim = wrist_lim

        # Dictionary to store Hip and Foot Transforms

        # Transform of Hip relative to world frame
        # With Body Centroid also in world frame
        Rwb = np.eye(3)
        self.WorldToHip = OrderedDict()

        self.ph_FL = np.array([self.hip_x / 2.0, self.hip_y / 2.0, 0])
        self.WorldToHip["FL"] = RpToTrans(Rwb, self.ph_FL)

        self.ph_FR = np.array([self.hip_x / 2.0, -self.hip_y / 2.0, 0])
        self.WorldToHip["FR"] = RpToTrans(Rwb, self.ph_FR)

        self.ph_BL = np.array([-self.hip_x / 2.0, self.hip_y / 2.0, 0])
        self.WorldToHip["BL"] = RpToTrans(Rwb, self.ph_BL)

        self.ph_BR = np.array([-self.hip_x / 2.0, -self.hip_y / 2.0, 0])
        self.WorldToHip["BR"] = RpToTrans(Rwb, self.ph_BR)

        # Transform of Foot relative to world frame
        # With Body Centroid also in world frame
        self.WorldToFoot = OrderedDict()

        self.pf_FL = np.array(
            [self.foot_x / 2.0, self.foot_y / 2.0, -self.height])
        self.WorldToFoot["FL"] = RpToTrans(Rwb, self.pf_FL)

        self.pf_FR = np.array(
            [self.foot_x / 2.0, -self.foot_y / 2.0, -self.height])
        self.WorldToFoot["FR"] = RpToTrans(Rwb, self.pf_FR)

        self.pf_BL = np.array(
            [-self.foot_x / 2.0, self.foot_y / 2.0, -self.height])
        self.WorldToFoot["BL"] = RpToTrans(Rwb, self.pf_BL)

        self.pf_BR = np.array(
            [-self.foot_x / 2.0, -self.foot_y / 2.0, -self.height])
        self.WorldToFoot["BR"] = RpToTrans(Rwb, self.pf_BR)

    def _get_domain(self, x, y, z):
        """
        Calculates the leg's Domain and caps it in case of a breach

        :param x,y,z: hip-to-foot distances in each dimension
        :return: Leg Domain D
        """
        D = (y**2 + (-z)**2 - self.shoulder_length**2 +
             (-x)**2 - self.elbow_length**2 - self.wrist_length**2) / (
                 2 * self.wrist_length * self.elbow_length)
        if D > 1 or D < -1:            
            # print("---------DOMAIN BREACH---------")
            D = np.clip(D, -1.0, 1.0)
            return D
        else:
            return D

    def _solve_joint_angles(self, xyz_coord, legType):
        """
        Leg Inverse Kinematics Solver

        :param xyz_coord: hip-to-foot distances in each dimension
        :param legType: leg type to determine orientation
        :return: Joint Angles required for desired position
        """
        x = xyz_coord[0]
        y = xyz_coord[1]
        z = xyz_coord[2]
        D = self._get_domain(x, y, z)

        if legType == "FR" or legType == "BR":
            shoulder_direction_offset = -1
        else:
            shoulder_direction_offset = 1

        wrist_angle = np.arctan2(-np.sqrt(1 - D**2), D)
        sqrt_component = y**2 + (-z)**2 - self.shoulder_length**2

        if sqrt_component < 0.0:
            sqrt_component = 0.0

        shoulder_angle = -np.arctan2(z, y) - np.arctan2(
            np.sqrt(sqrt_component), shoulder_direction_offset * self.shoulder_length)

        elbow_angle = np.arctan2(-x, np.sqrt(sqrt_component)) - np.arctan2(
            self.wrist_length * np.sin(wrist_angle),
            self.elbow_length + self.wrist_length * np.cos(wrist_angle))

        joint_angles = np.array([-shoulder_angle, elbow_angle, wrist_angle])

        return joint_angles

    def _hip_to_foot(self, orn, pos, T_bf):
        """
        Converts a desired position and orientation wrt Spot's
        home position, with a desired body-to-foot Transform
        into a body-to-hip Transform, which is used to extract
        and return the Hip To Foot Vector.

        :param orn: A 3x1 np.array([]) with Roll, Pitch, Yaw angles
        :param pos: A 3x1 np.array([]) with X, Y, Z coordinates
        :param T_bf: Dictionary of desired body-to-foot Transforms.
        :return: Hip To Foot Vector for each leg.
        """

        # Only get Rot component
        Rb, _ = TransToRp(RPY(orn[0], orn[1], orn[2]))
        pb = pos
        T_wb = RpToTrans(Rb, pb)

        # Dictionary to store vectors
        HipToFoot_List = OrderedDict()

        for i, (key, T_wh) in enumerate(self.WorldToHip.items()):

            # Extract vector component
            _, p_bf = TransToRp(T_bf[key])

            # Step 1, get T_bh for each leg
            T_bh = np.dot(TransInv(T_wb), T_wh)

            # Step 2, get T_hf for each leg

            # VECTOR ADDITION METHOD
            _, p_bh = TransToRp(T_bh)
            p_hf0 = p_bf - p_bh

            # TRANSFORM METHOD
            T_hf = np.dot(TransInv(T_bh), T_bf[key])
            _, p_hf1 = TransToRp(T_hf)

            # They should yield the same result
            if p_hf1.all() != p_hf0.all():
                print("NOT EQUAL")

            HipToFoot_List[key] = p_hf0

        return HipToFoot_List

    def InverseKinimatics(self, orn, pos, T_bf):
        """
        Uses HipToFoot() to convert a desired position
        and orientation wrt Spot's home position into a
        Hip To Foot Vector, which is fed into the leg inverse
        kinematics solver.        

        :param orn: A 3x1 np.array([]) with Roll, Pitch, Yaw angles
        :param pos: A 3x1 np.array([]) with X, Y, Z coordinates
        :param T_bf: Dictionary of desired body-to-foot Transforms.
        :return: Joint angles for each joint.
        """

        # Modify x by com offset
        pos[0] += self.com_offset

        # 4 legs, 3 joints per leg
        joint_angles = np.zeros((4, 3))

        # Steps 1 and 2 of pipeline here
        HipToFoot = self._hip_to_foot(orn, pos, T_bf)

        for i, (key, p_hf) in enumerate(HipToFoot.items()):
            # Step 3, compute joint angles from T_hf for each leg
            joint_angles[i, :] = self._solve_joint_angles(p_hf, key)

        return joint_angles