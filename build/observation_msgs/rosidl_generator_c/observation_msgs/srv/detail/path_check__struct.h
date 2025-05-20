// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from observation_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_H_
#define OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in srv/PathCheck in the package observation_msgs.
typedef struct observation_msgs__srv__PathCheck_Request
{
  nav_msgs__msg__Path path;
} observation_msgs__srv__PathCheck_Request;

// Struct for a sequence of observation_msgs__srv__PathCheck_Request.
typedef struct observation_msgs__srv__PathCheck_Request__Sequence
{
  observation_msgs__srv__PathCheck_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observation_msgs__srv__PathCheck_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PathCheck in the package observation_msgs.
typedef struct observation_msgs__srv__PathCheck_Response
{
  rosidl_runtime_c__String error_string;
  int8_t anomaly_score;
} observation_msgs__srv__PathCheck_Response;

// Struct for a sequence of observation_msgs__srv__PathCheck_Response.
typedef struct observation_msgs__srv__PathCheck_Response__Sequence
{
  observation_msgs__srv__PathCheck_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observation_msgs__srv__PathCheck_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_H_
