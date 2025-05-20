// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__STRUCT_H_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'remove_id_set'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PathInfo in the package my_nav_msgs.
typedef struct my_nav_msgs__msg__PathInfo
{
  /// 経路を妨げる障害物リスト
  rosidl_runtime_c__String__Sequence remove_id_set;
  double success_rate;
} my_nav_msgs__msg__PathInfo;

// Struct for a sequence of my_nav_msgs__msg__PathInfo.
typedef struct my_nav_msgs__msg__PathInfo__Sequence
{
  my_nav_msgs__msg__PathInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__msg__PathInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__STRUCT_H_
