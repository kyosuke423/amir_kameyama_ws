// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:srv/FovCheck.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'object_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FovCheck in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__FovCheck_Request
{
  geometry_msgs__msg__Point target_position;
  rosidl_runtime_c__String object_id;
} behavior_tree_msgs__srv__FovCheck_Request;

// Struct for a sequence of behavior_tree_msgs__srv__FovCheck_Request.
typedef struct behavior_tree_msgs__srv__FovCheck_Request__Sequence
{
  behavior_tree_msgs__srv__FovCheck_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__FovCheck_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/FovCheck in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__srv__FovCheck_Response
{
  bool in_fov;
} behavior_tree_msgs__srv__FovCheck_Response;

// Struct for a sequence of behavior_tree_msgs__srv__FovCheck_Response.
typedef struct behavior_tree_msgs__srv__FovCheck_Response__Sequence
{
  behavior_tree_msgs__srv__FovCheck_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__srv__FovCheck_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__STRUCT_H_
