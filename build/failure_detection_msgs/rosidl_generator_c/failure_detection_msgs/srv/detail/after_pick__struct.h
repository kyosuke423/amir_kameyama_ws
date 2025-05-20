// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from failure_detection_msgs:srv/AfterPick.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__STRUCT_H_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__STRUCT_H_

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
// Member 'error_string'
#include "rosidl_runtime_c/string.h"
// Member 'grasped_object'
#include "moveit_msgs/msg/detail/attached_collision_object__struct.h"

/// Struct defined in srv/AfterPick in the package failure_detection_msgs.
typedef struct failure_detection_msgs__srv__AfterPick_Request
{
  rosidl_runtime_c__String bt_node_name;
  rosidl_runtime_c__String error_string;
  moveit_msgs__msg__AttachedCollisionObject grasped_object;
} failure_detection_msgs__srv__AfterPick_Request;

// Struct for a sequence of failure_detection_msgs__srv__AfterPick_Request.
typedef struct failure_detection_msgs__srv__AfterPick_Request__Sequence
{
  failure_detection_msgs__srv__AfterPick_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__srv__AfterPick_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'command'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AfterPick in the package failure_detection_msgs.
typedef struct failure_detection_msgs__srv__AfterPick_Response
{
  rosidl_runtime_c__String command;
} failure_detection_msgs__srv__AfterPick_Response;

// Struct for a sequence of failure_detection_msgs__srv__AfterPick_Response.
typedef struct failure_detection_msgs__srv__AfterPick_Response__Sequence
{
  failure_detection_msgs__srv__AfterPick_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__srv__AfterPick_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__STRUCT_H_
