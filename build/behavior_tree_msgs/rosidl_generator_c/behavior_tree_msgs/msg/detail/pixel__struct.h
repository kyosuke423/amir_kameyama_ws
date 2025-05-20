// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/Pixel.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__PIXEL__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__PIXEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pixel in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__Pixel
{
  int64_t x;
  int64_t y;
} behavior_tree_msgs__msg__Pixel;

// Struct for a sequence of behavior_tree_msgs__msg__Pixel.
typedef struct behavior_tree_msgs__msg__Pixel__Sequence
{
  behavior_tree_msgs__msg__Pixel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__Pixel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__PIXEL__STRUCT_H_
