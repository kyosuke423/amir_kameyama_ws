import os
# from rclpy.parameter import Parameter
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import LaunchConfiguration
from launch.actions import (
    DeclareLaunchArgument,
)

def generate_launch_description():
    ld = LaunchDescription()

    namespace = LaunchConfiguration("namespace")

    declare_namespace_cmd = DeclareLaunchArgument(
        "namespace", default_value="robot1", description="Top-level namespace"
    )


    bt_generator_node = Node(
        package='failure_detection',
        executable='failure_detection',
        name='failure_detection',
        namespace=namespace,
        # parameters=[{'robot_name': 'mecanum1'}],
        output='screen',
        emulate_tty=True  #これがないと表示されない。foxy以降はemulate_tty=True
    )

    ld.add_action(declare_namespace_cmd)
    ld.add_action(bt_generator_node)
    return ld