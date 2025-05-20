// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from failure_detection_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_H_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'paths'
#include "my_nav_msgs/msg/detail/path_with_condition__struct.h"

/// Struct defined in srv/PathCheck in the package failure_detection_msgs.
typedef struct failure_detection_msgs__srv__PathCheck_Request
{
  my_nav_msgs__msg__PathWithCondition__Sequence paths;
} failure_detection_msgs__srv__PathCheck_Request;

// Struct for a sequence of failure_detection_msgs__srv__PathCheck_Request.
typedef struct failure_detection_msgs__srv__PathCheck_Request__Sequence
{
  failure_detection_msgs__srv__PathCheck_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__srv__PathCheck_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_strings'
#include "rosidl_runtime_c/string.h"
// Member 'info_set'
#include "my_nav_msgs/msg/detail/path_info__struct.h"

/// Struct defined in srv/PathCheck in the package failure_detection_msgs.
typedef struct failure_detection_msgs__srv__PathCheck_Response
{
  rosidl_runtime_c__String error_strings;
  my_nav_msgs__msg__PathInfo__Sequence info_set;
} failure_detection_msgs__srv__PathCheck_Response;

// Struct for a sequence of failure_detection_msgs__srv__PathCheck_Response.
typedef struct failure_detection_msgs__srv__PathCheck_Response__Sequence
{
  failure_detection_msgs__srv__PathCheck_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__srv__PathCheck_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_H_
