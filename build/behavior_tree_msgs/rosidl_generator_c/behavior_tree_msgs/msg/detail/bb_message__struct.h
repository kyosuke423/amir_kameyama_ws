// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/BBMessage.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_MESSAGE__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'poses'
#include "behavior_tree_msgs/msg/detail/bb_pose__struct.h"
// Member 'paths'
#include "behavior_tree_msgs/msg/detail/bb_path__struct.h"
// Member 'float_array_set'
#include "behavior_tree_msgs/msg/detail/bb_float64_array__struct.h"

/// Struct defined in msg/BBMessage in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__BBMessage
{
  behavior_tree_msgs__msg__BBPose__Sequence poses;
  behavior_tree_msgs__msg__BBPath__Sequence paths;
  behavior_tree_msgs__msg__BBFloat64Array__Sequence float_array_set;
} behavior_tree_msgs__msg__BBMessage;

// Struct for a sequence of behavior_tree_msgs__msg__BBMessage.
typedef struct behavior_tree_msgs__msg__BBMessage__Sequence
{
  behavior_tree_msgs__msg__BBMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__BBMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_MESSAGE__STRUCT_H_
