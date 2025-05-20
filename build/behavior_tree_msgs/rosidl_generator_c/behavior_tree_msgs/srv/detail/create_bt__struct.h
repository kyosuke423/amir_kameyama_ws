// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:srv/CreateBT.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bt_name'
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CreateBT in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__CreateBT_Request
{
  rosidl_runtime_c__String bt_name;
  rosidl_runtime_c__String command;
} behavior_tree_msgs__srv__CreateBT_Request;

// Struct for a sequence of behavior_tree_msgs__srv__CreateBT_Request.
typedef struct behavior_tree_msgs__srv__CreateBT_Request__Sequence
{
  behavior_tree_msgs__srv__CreateBT_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__CreateBT_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CreateBT in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__CreateBT_Response
{
  rosidl_runtime_c__String error_string;
} behavior_tree_msgs__srv__CreateBT_Response;

// Struct for a sequence of behavior_tree_msgs__srv__CreateBT_Response.
typedef struct behavior_tree_msgs__srv__CreateBT_Response__Sequence
{
  behavior_tree_msgs__srv__CreateBT_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__CreateBT_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__STRUCT_H_
