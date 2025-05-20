// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bebop_msgs:msg/BoxCorner.idl
// generated code does not contain a copyright notice

#ifndef BEBOP_MSGS__MSG__DETAIL__BOX_CORNER__STRUCT_H_
#define BEBOP_MSGS__MSG__DETAIL__BOX_CORNER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'posi'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/BoxCorner in the package bebop_msgs.
/**
  * CubeSLAMで取得した直方体の情報をpublishするためのカスタムメッセージ
 */
typedef struct bebop_msgs__msg__BoxCorner
{
  /// ここはオブジェクトの名前に変えなければいけい（今は対象物が一つなのでこのままでいい）
  int8_t id;
  /// 頂点の番号（あらかじめ決まっている）
  int8_t corner_num;
  /// 頂点の座標
  geometry_msgs__msg__Pose posi;
} bebop_msgs__msg__BoxCorner;

// Struct for a sequence of bebop_msgs__msg__BoxCorner.
typedef struct bebop_msgs__msg__BoxCorner__Sequence
{
  bebop_msgs__msg__BoxCorner * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bebop_msgs__msg__BoxCorner__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEBOP_MSGS__MSG__DETAIL__BOX_CORNER__STRUCT_H_
