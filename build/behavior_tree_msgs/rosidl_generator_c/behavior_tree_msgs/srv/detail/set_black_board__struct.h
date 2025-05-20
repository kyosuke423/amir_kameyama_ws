// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:srv/SetBlackBoard.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bb_message'
#include "behavior_tree_msgs/msg/detail/bb_message__struct.h"

/// Struct defined in srv/SetBlackBoard in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__SetBlackBoard_Request
{
  behavior_tree_msgs__msg__BBMessage bb_message;
} behavior_tree_msgs__srv__SetBlackBoard_Request;

// Struct for a sequence of behavior_tree_msgs__srv__SetBlackBoard_Request.
typedef struct behavior_tree_msgs__srv__SetBlackBoard_Request__Sequence
{
  behavior_tree_msgs__srv__SetBlackBoard_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__SetBlackBoard_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'behavior_tree'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBlackBoard in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__SetBlackBoard_Response
{
  rosidl_runtime_c__String behavior_tree;
} behavior_tree_msgs__srv__SetBlackBoard_Response;

// Struct for a sequence of behavior_tree_msgs__srv__SetBlackBoard_Response.
typedef struct behavior_tree_msgs__srv__SetBlackBoard_Response__Sequence
{
  behavior_tree_msgs__srv__SetBlackBoard_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__SetBlackBoard_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__STRUCT_H_
