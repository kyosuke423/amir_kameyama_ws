// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:srv/GetBlackBoard.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose_names'
// Member 'path_names'
// Member 'float_array_names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetBlackBoard in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__GetBlackBoard_Request
{
  rosidl_runtime_c__String__Sequence pose_names;
  rosidl_runtime_c__String__Sequence path_names;
  rosidl_runtime_c__String__Sequence float_array_names;
} behavior_tree_msgs__srv__GetBlackBoard_Request;

// Struct for a sequence of behavior_tree_msgs__srv__GetBlackBoard_Request.
typedef struct behavior_tree_msgs__srv__GetBlackBoard_Request__Sequence
{
  behavior_tree_msgs__srv__GetBlackBoard_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__GetBlackBoard_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'poses'
#include "behavior_tree_msgs/msg/detail/bb_pose__struct.h"
// Member 'paths'
#include "behavior_tree_msgs/msg/detail/bb_path__struct.h"
// Member 'float_array_set'
#include "behavior_tree_msgs/msg/detail/bb_float64_array__struct.h"

/// Struct defined in srv/GetBlackBoard in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__GetBlackBoard_Response
{
  behavior_tree_msgs__msg__BBPose__Sequence poses;
  behavior_tree_msgs__msg__BBPath__Sequence paths;
  behavior_tree_msgs__msg__BBFloat64Array__Sequence float_array_set;
} behavior_tree_msgs__srv__GetBlackBoard_Response;

// Struct for a sequence of behavior_tree_msgs__srv__GetBlackBoard_Response.
typedef struct behavior_tree_msgs__srv__GetBlackBoard_Response__Sequence
{
  behavior_tree_msgs__srv__GetBlackBoard_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__GetBlackBoard_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__STRUCT_H_
