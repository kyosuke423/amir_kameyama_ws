// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT_ARRAY__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "behavior_tree_msgs/msg/detail/object__struct.h"

/// Struct defined in msg/ObjectArray in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__msg__ObjectArray
{
  behavior_tree_msgs__msg__Object__Sequence objects;
} behavior_tree_msgs__msg__ObjectArray;

// Struct for a sequence of behavior_tree_msgs__msg__ObjectArray.
typedef struct behavior_tree_msgs__msg__ObjectArray__Sequence
{
  behavior_tree_msgs__msg__ObjectArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__msg__ObjectArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT_ARRAY__STRUCT_H_
