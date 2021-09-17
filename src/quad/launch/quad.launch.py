import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    
    motion_servo_parameters_path = os.path.join(
        get_package_share_directory('quad'),
        'config',
        'motion_servo_parameters.yaml') 
        
    frame_parameters_path = os.path.join(
        get_package_share_directory('quad'),
        'config',
        'frame_parameters.yaml')    
          
    linked_leg_parameters_path = os.path.join(
        get_package_share_directory('quad'),
        'config',
        'linked_leg_parameters.yaml')  
        
    quad_node=Node(
        package = 'quad',
        #name = 'quad_node',
        executable = 'quad',
        output='screen',  
        parameters = [{"motion_servo_parameters_path": motion_servo_parameters_path}, {"frame_parameters_path": frame_parameters_path},{"linked_leg_parameters_path": linked_leg_parameters_path}])
    
    joy_node=Node(
        package = 'joystick_ros2',
        # name = 'quad_node',
        executable = 'joystick_ros2',
        output='screen',          
    )
     
    micro_ros_agent_node=Node(
        package = 'micro_ros_agent',
        # name = 'quad_node',
        executable = 'micro_ros_agent',
         prefix=['stdbuf -o L'],
        output='screen', 
        # emulate_tty=True,  
        arguments={'serial --dev /dev/ttyACM0'},            
    )    
    
    ld.add_action(micro_ros_agent_node)
    ld.add_action(quad_node)
    ld.add_action(joy_node)
    return ld    
