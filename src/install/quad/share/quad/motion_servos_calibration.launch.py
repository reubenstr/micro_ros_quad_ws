from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='quad',
            namespace='quad',
            executable='motion_servos_calibration',
            output='screen',            
            arguments=['--ros-args', '--log-level', 'ERROR']            
        )    
    ])
