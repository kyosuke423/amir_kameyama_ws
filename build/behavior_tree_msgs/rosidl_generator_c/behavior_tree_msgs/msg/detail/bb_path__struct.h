// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/BBPath.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_PATH__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_PATH__STRUCT_H_

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
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in msg/BBPath in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__BBPath
{
  rosidl_runtime_c__String key;
  nav_msgs__msg__Path value;
} behavior_tree_msgs__msg__BBPath;

// Struct for a sequence of behavior_tree_msgs__msg__BBPath.
typedef struct behavior_tree_msgs__msg__BBPath__Sequence
{
  behavior_tree_msgs__msg__BBPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__BBPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_PATH__STRUCT_H_
