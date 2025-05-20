// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/BTStatus.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bt'
#include "rosidl_runtime_c/string.h"
// Member 'root_status'
// Member 'bt_status'
#include "behavior_tree_msgs/msg/detail/node_status__struct.h"

/// Struct defined in msg/BTStatus in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__BTStatus
{
  /// initial tree, empty if type is new
  rosidl_runtime_c__String bt;
  behavior_tree_msgs__msg__NodeStatus root_status;
  behavior_tree_msgs__msg__NodeStatus__Sequence bt_status;
} behavior_tree_msgs__msg__BTStatus;

// Struct for a sequence of behavior_tree_msgs__msg__BTStatus.
typedef struct behavior_tree_msgs__msg__BTStatus__Sequence
{
  behavior_tree_msgs__msg__BTStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__BTStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__STRUCT_H_
