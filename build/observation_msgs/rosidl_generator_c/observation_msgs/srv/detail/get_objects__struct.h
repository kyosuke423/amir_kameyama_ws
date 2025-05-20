// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from observation_msgs:srv/GetObjects.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__STRUCT_H_
#define OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ID'.
/**
  * idで検索
 */
enum
{
  observation_msgs__srv__GetObjects_Request__ID = 0l
};

/// Constant 'GROUP'.
/**
  * obj_groupで検索
 */
enum
{
  observation_msgs__srv__GetObjects_Request__GROUP = 1l
};

/// Constant 'ALL'.
/**
  * 全障害物、マーカー等を取得
 */
enum
{
  observation_msgs__srv__GetObjects_Request__ALL = 2l
};

/// Constant 'ALL_COLLISION'.
/**
  * 全障害物を取得
 */
enum
{
  observation_msgs__srv__GetObjects_Request__ALL_COLLISION = 3l
};

// Include directives for member types
// Member 'id_set'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetObjects in the package observation_msgs.
typedef struct observation_msgs__srv__GetObjects_Request
{
  rosidl_runtime_c__String__Sequence id_set;
  int32_t command;
} observation_msgs__srv__GetObjects_Request;

// Struct for a sequence of observation_msgs__srv__GetObjects_Request.
typedef struct observation_msgs__srv__GetObjects_Request__Sequence
{
  observation_msgs__srv__GetObjects_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observation_msgs__srv__GetObjects_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "observation_msgs/msg/detail/object__struct.h"

/// Struct defined in srv/GetObjects in the package observation_msgs.
typedef struct observation_msgs__srv__GetObjects_Response
{
  observation_msgs__msg__Object__Sequence objects;
} observation_msgs__srv__GetObjects_Response;

// Struct for a sequence of observation_msgs__srv__GetObjects_Response.
typedef struct observation_msgs__srv__GetObjects_Response__Sequence
{
  observation_msgs__srv__GetObjects_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observation_msgs__srv__GetObjects_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__STRUCT_H_
