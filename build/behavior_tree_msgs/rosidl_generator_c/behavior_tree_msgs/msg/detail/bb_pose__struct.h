// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/BBPose.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_POSE__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
#include "rosidl_runtime_c/string.h"
// Member 'value'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/BBPose in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__BBPose
{
  rosidl_runtime_c__String key;
  geometry_msgs__msg__PoseStamped value;
} behavior_tree_msgs__msg__BBPose;

// Struct for a sequence of behavior_tree_msgs__msg__BBPose.
typedef struct behavior_tree_msgs__msg__BBPose__Sequence
{
  behavior_tree_msgs__msg__BBPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__BBPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_POSE__STRUCT_H_
