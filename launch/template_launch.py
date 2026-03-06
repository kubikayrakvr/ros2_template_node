from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare, FindPackage
from ament_index_python.packages import get_package_share_directory
from ament_index_python.packages import get_package_prefix
import os

def generate_launch_description():
    param_file = PathJoinSubstitution([
        FindPackageShare('template_node'),
        'config',
        'params.yaml'
    ])

    return LaunchDescription([
        Node(
            package='template_node',
            executable='template_node',
            name='template_node',
            parameters=[param_file],
        ),
    ])