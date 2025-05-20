// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'from_camera'
// Member 'from_base'
// Member 'from_odom'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'label'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'pixel_bottom_right'
// Member 'pixel_top_left'
// Member 'pixel_center'
#include "behavior_tree_msgs/msg/detail/pixel__struct.h"

/// Struct defined in msg/Object in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__Object
{
  geometry_msgs__msg__Pose from_camera;
  geometry_msgs__msg__Pose from_base;
  geometry_msgs__msg__Pose from_odom;
  rosidl_runtime_c__String label;
  rosidl_runtime_c__String id;
  behavior_tree_msgs__msg__Pixel pixel_bottom_right;
  behavior_tree_msgs__msg__Pixel pixel_top_left;
  behavior_tree_msgs__msg__Pixel pixel_center;
  bool stand;
  double probability;
} behavior_tree_msgs__msg__Object;

// Struct for a sequence of behavior_tree_msgs__msg__Object.
typedef struct behavior_tree_msgs__msg__Object__Sequence
{
  behavior_tree_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
