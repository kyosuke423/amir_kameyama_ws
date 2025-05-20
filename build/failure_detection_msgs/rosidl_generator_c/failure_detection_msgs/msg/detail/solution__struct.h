// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from failure_detection_msgs:msg/Solution.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__STRUCT_H_
#define FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bt_node_name'
// Member 'solutions'
#include "rosidl_runtime_c/string.h"
// Member 'priorities'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'bb_message'
#include "behavior_tree_msgs/msg/detail/bb_message__struct.h"

/// Struct defined in msg/Solution in the package failure_detection_msgs.
typedef struct failure_detection_msgs__msg__Solution
{
  rosidl_runtime_c__String bt_node_name;
  rosidl_runtime_c__String__Sequence solutions;
  rosidl_runtime_c__float__Sequence priorities;
  behavior_tree_msgs__msg__BBMessage bb_message;
} failure_detection_msgs__msg__Solution;

// Struct for a sequence of failure_detection_msgs__msg__Solution.
typedef struct failure_detection_msgs__msg__Solution__Sequence
{
  failure_detection_msgs__msg__Solution * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__msg__Solution__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__STRUCT_H_
