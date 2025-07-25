from ament_index_python.packages import get_package_share_path

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import Command, LaunchConfiguration

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():
    description_package_path = get_package_share_path('amir_description')
    default_model_path = description_package_path / 'urdf/amir_mecanum3.xacro'
    default_rviz_config_path = description_package_path / 'rviz/mecanum3.rviz'


    model_arg = DeclareLaunchArgument(name='model', default_value=str(default_model_path),
                                      description='Absolute path to robot urdf file')
    
    rviz_arg = DeclareLaunchArgument(name='rvizconfig', default_value=str(default_rviz_config_path),
                                     description='Absolute path to rviz config file')
    
    robot_description = ParameterValue(Command(['xacro ', LaunchConfiguration('model')]),
                                       value_type=str)

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description}],
    )

    # Depending on gui parameter, either launch joint_state_publisher or joint_state_publisher_gui
    # joint_state_publisher_node = Node(
    #     package='joint_state_publisher',
    #     executable='joint_state_publisher',
    #     condition=UnlessCondition(LaunchConfiguration('gui'))
    # )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')],
    )

    joint_state_publisher_tutorial_node = Node(
        package='joint_state_publisher_tutorial',
        executable='tutorial_publisher',
        name='tutorial_publisher',
        output='screen',
        # parameters=[{
        #     'model': '$(arg model)',
        #     'rvizconfig': '$(arg rvizconfig)',
        #     'length0': '$(arg length0)'
        # }]
    )

    return LaunchDescription([
        # model_arg,
        # rviz_arg,
        # robot_state_publisher_node,
        # rviz_node,
        joint_state_publisher_tutorial_node

    ])
