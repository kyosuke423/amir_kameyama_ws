import os
# from rclpy.parameter import Parameter
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument

def generate_launch_description():
    ld = LaunchDescription()

    # just_pick_node = Node(
    #     package='amir_operation',
    #     executable='pick',
    #     output='screen',
    # )

    pick_node = Node(
        package='amir_operation',
        executable='pick_using_d_optimality',
        output='screen',
    )

    place_node = Node(
        package='amir_operation',
        executable='place',
        output='screen',
    )

    move_arm_node = Node(
        package='amir_operation',
        executable='move_arm',
        output='screen',
    )

    grasp_node = Node(
        package='amir_operation',
        executable='grasp',
        output='screen',
    )

    move_meca_node = Node(
        package='amir_operation',
        executable='move_meca',
        output='screen',
    )

    mecanum_search_node = Node(
        package='amir_operation',
        executable='mecanum_search',
        output='screen',
    )

    mecanum_move_node = Node(
        package='amir_operation',
        executable='mecanum_move',
        output='screen',
    )

    mecanum_spin_node = Node(
        package='amir_operation',
        executable='mecanum_spin',
        output='screen',
    )

    return LaunchDescription([
        # just_pick_node,
        pick_node,
        place_node,
        move_arm_node,
        grasp_node,
        move_meca_node,
        mecanum_search_node,
        mecanum_move_node,
        mecanum_spin_node
    ])

    # ld.add_action(pick_node)
    # ld.add_action(place_node)
    # ld.add_action(move_arm_node)
    # ld.add_action(grasp_node)
    # return ld