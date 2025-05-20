cmake_minimum_required(VERSION 3.8)
project(amir_operation)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(xacro REQUIRED)
find_package(std_msgs REQUIRED)
find_package(amir_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(behavior_tree_msgs REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(line_msg REQUIRED)
find_package(bebop_msgs REQUIRED)
find_package(ros2_aruco_interfaces REQUIRED)
find_package(ar_track_alvar_msgs REQUIRED)


add_executable(initial_posi 
  src/initial_posi.cpp
)
add_executable(pick 
  src/pick.cpp
)
add_executable(place 
  src/place.cpp
)
add_executable(pick_using_d_optimality 
  src/pick_using_d_optimality.cpp
)
add_executable(search_obj 
  src/search_obj.cpp
)
add_executable(move_arm 
  src/move_arm.cpp
)
add_executable(grasp 
  src/grasp.cpp
)
add_executable(move_meca 
  src/move_meca.cpp
)
add_executable(mecanum_search 
  src/mecanum_search.cpp
)
add_executable(mecanum_move 
  src/mecanum_move.cpp
)
add_executable(mecanum_spin
  src/mecanum_spin.cpp
)
set(dependencies
  rclcpp 
  std_msgs
  amir_interfaces
  geometry_msgs
  rclcpp_action
  behavior_tree_msgs
  nav_msgs
  Eigen3
  tf2
  tf2_geometry_msgs
  line_msg
  bebop_msgs
  ros2_aruco_interfaces
  ar_track_alvar_msgs
  sensor_msgs
)

ament_target_dependencies(initial_posi ${dependencies})
ament_target_dependencies(pick ${dependencies})
ament_target_dependencies(place ${dependencies})
ament_target_dependencies(search_obj ${dependencies})
ament_target_dependencies(move_arm ${dependencies})
ament_target_dependencies(pick_using_d_optimality ${dependencies})
ament_target_dependencies(grasp ${dependencies})
ament_target_dependencies(move_meca ${dependencies})
ament_target_dependencies(mecanum_search ${dependencies})
ament_target_dependencies(mecanum_move ${dependencies})
ament_target_dependencies(mecanum_spin ${dependencies})

install(TARGETS
  initial_posi
  pick
  place
  search_obj
  move_arm
  grasp
  move_meca
  pick_using_d_optimality
  mecanum_search
  mecanum_move
  mecanum_spin
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})


# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
