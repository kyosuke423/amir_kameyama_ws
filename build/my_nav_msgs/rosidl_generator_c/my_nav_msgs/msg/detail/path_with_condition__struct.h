// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_nav_msgs:msg/PathWithCondition.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__STRUCT_H_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__STRUCT_H_

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
// Member 'info'
#include "my_nav_msgs/msg/detail/path_info__struct.h"

/// Struct defined in msg/PathWithCondition in the package my_nav_msgs.
typedef struct my_nav_msgs__msg__PathWithCondition
{
  nav_msgs__msg__Path path;
  my_nav_msgs__msg__PathInfo info;
} my_nav_msgs__msg__PathWithCondition;

// Struct for a sequence of my_nav_msgs__msg__PathWithCondition.
typedef struct my_nav_msgs__msg__PathWithCondition__Sequence
{
  my_nav_msgs__msg__PathWithCondition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__msg__PathWithCondition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__STRUCT_H_
