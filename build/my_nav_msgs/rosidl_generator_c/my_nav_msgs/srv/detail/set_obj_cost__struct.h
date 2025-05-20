// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_nav_msgs:srv/SetObjCost.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__STRUCT_H_
#define MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/marker_array__struct.h"

/// Struct defined in srv/SetObjCost in the package my_nav_msgs.
typedef struct my_nav_msgs__srv__SetObjCost_Request
{
  visualization_msgs__msg__MarkerArray markers;
  /// このマーカーだけ反映したい場合はFalseに、既に反映されているものに追加する場合はTrueにする
  bool partial_update;
} my_nav_msgs__srv__SetObjCost_Request;

// Struct for a sequence of my_nav_msgs__srv__SetObjCost_Request.
typedef struct my_nav_msgs__srv__SetObjCost_Request__Sequence
{
  my_nav_msgs__srv__SetObjCost_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__srv__SetObjCost_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
#include "rosidl_runtime_c/string.h"
// Member 'set_markers'
// already included above
// #include "visualization_msgs/msg/detail/marker_array__struct.h"

/// Struct defined in srv/SetObjCost in the package my_nav_msgs.
typedef struct my_nav_msgs__srv__SetObjCost_Response
{
  rosidl_runtime_c__String error_string;
  /// 現在反映されているマーカー
  visualization_msgs__msg__MarkerArray set_markers;
} my_nav_msgs__srv__SetObjCost_Response;

// Struct for a sequence of my_nav_msgs__srv__SetObjCost_Response.
typedef struct my_nav_msgs__srv__SetObjCost_Response__Sequence
{
  my_nav_msgs__srv__SetObjCost_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__srv__SetObjCost_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__STRUCT_H_
