import numpy as np
import time
import copy
from kinematics import Kinematics


def main(args=None):
    boundry_test()


def boundry_test():
    kinematics = Kinematics()
    orn = np.zeros(3)
    pos = np.zeros(3)
    T_bf = copy.deepcopy(kinematics.WorldToFoot)


    print(pos)

    while True:

        orn = np.zeros(3)
        pos = np.zeros(3)
       
        joint_angles = kinematics.inverse_kinematics(orn, pos, copy.deepcopy(T_bf))

        flat_joint_angles = joint_angles.flatten()

        # print (flat_joint_angles)
        print("upper leg : " + str(flat_joint_angles[1]))
        print("low leg   : " + str(flat_joint_angles[2]))

        time.sleep(.1)




if __name__ == '__main__':
    main()
