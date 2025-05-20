// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from failure_detection_msgs:srv/BeforePick.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__STRUCT_H_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/BeforePick in the package failure_detection_msgs.
typedef struct failure_detection_msgs__srv__BeforePick_Request
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String id;
  geometry_msgs__msg__PoseStamped pose;
  bool stand;
} failure_detection_msgs__srv__BeforePick_Request;

// Struct for a sequence of failure_detection_msgs__srv__BeforePick_Request.
typedef struct failure_detection_msgs__srv__BeforePick_Request__Sequence
{
  failure_detection_msgs__srv__BeforePick_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__srv__BeforePick_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'command'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/BeforePick in the package failure_detection_msgs.
typedef struct failure_detection_msgs__srv__BeforePick_Response
{
  rosidl_runtime_c__String command;
} failure_detection_msgs__srv__BeforePick_Response;

// Struct for a sequence of failure_detection_msgs__srv__BeforePick_Response.
typedef struct failure_detection_msgs__srv__BeforePick_Response__Sequence
{
  failure_detection_msgs__srv__BeforePick_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__srv__BeforePick_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__STRUCT_H_
