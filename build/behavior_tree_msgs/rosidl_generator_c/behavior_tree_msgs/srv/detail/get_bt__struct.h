// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:srv/GetBT.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'bt'
// Member 'goal_condition'
// Member 'goal_conditions'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetBT in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__GetBT_Request
{
  /// update or create a new one
  rosidl_runtime_c__String type;
  /// initial tree, empty if type is new
  rosidl_runtime_c__String bt;
  /// failed xml node to create or to update with
  rosidl_runtime_c__String goal_condition;
  /// initial goal_conditions
  rosidl_runtime_c__String__Sequence goal_conditions;
  int16_t failed_nood_id;
} behavior_tree_msgs__srv__GetBT_Request;

// Struct for a sequence of behavior_tree_msgs__srv__GetBT_Request.
typedef struct behavior_tree_msgs__srv__GetBT_Request__Sequence
{
  behavior_tree_msgs__srv__GetBT_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__GetBT_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'behavior_tree'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetBT in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__GetBT_Response
{
  rosidl_runtime_c__String behavior_tree;
} behavior_tree_msgs__srv__GetBT_Response;

// Struct for a sequence of behavior_tree_msgs__srv__GetBT_Response.
typedef struct behavior_tree_msgs__srv__GetBT_Response__Sequence
{
  behavior_tree_msgs__srv__GetBT_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__GetBT_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__STRUCT_H_
