// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/NodeStatus.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__NODE_STATUS__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__NODE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__IDLE = 0
};

/// Constant 'RUNNING'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__RUNNING = 1
};

/// Constant 'SUCCESS'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__SUCCESS = 2
};

/// Constant 'FAILURE'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__FAILURE = 3
};

/// Constant 'UNDEFINED'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__UNDEFINED = 0
};

/// Constant 'ACTION'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__ACTION = 1
};

/// Constant 'CONDITION'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__CONDITION = 2
};

/// Constant 'CONTROL'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__CONTROL = 3
};

/// Constant 'DECORATOR'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__DECORATOR = 4
};

/// Constant 'SUBTREE'.
enum
{
  behavior_tree_msgs__msg__NodeStatus__SUBTREE = 5
};

// Include directives for member types
// Member 'node_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NodeStatus in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__NodeStatus
{
  /// BTノードの名前
  rosidl_runtime_c__String node_name;
  /// BT内のどのノードか識別するためのid
  int16_t node_id;
  uint8_t status;
  uint8_t node_type;
} behavior_tree_msgs__msg__NodeStatus;

// Struct for a sequence of behavior_tree_msgs__msg__NodeStatus.
typedef struct behavior_tree_msgs__msg__NodeStatus__Sequence
{
  behavior_tree_msgs__msg__NodeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__NodeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__NODE_STATUS__STRUCT_H_
