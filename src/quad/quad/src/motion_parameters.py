
import numpy as np



from dataclasses import dataclass


@dataclass
class MotionParameters:
    pos: np.ndarray = np.array([0.0, 0.0, 0.0])
    orn: np.ndarray = np.array([0.0, 0.0, 0.0]) 
    step_length: float = 0.0





""" 
class MotionParameters():
    def __init__(self,
                pos=np.array([0.0, 0.0, 0.0]),
                orn=np.array([0.0, 0.0, 0.0]),
                StepLength=0.04,
                LateralFraction=0.0,
                YawRate=0.0,
                StepVelocity=0.001,
                ClearanceHeight=0.045,
                PenetrationDepth=0.003):  """
               
    