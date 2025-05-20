// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from line_msg:msg/BoxCorner.idl
// generated code does not contain a copyright notice

#ifndef LINE_MSG__MSG__DETAIL__BOX_CORNER__STRUCT_H_
#define LINE_MSG__MSG__DETAIL__BOX_CORNER__STRUCT_H_

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

/// Struct defined in msg/BoxCorner in the package line_msg.
/**
  * CubeSLAMで取得した直方体の情報をpublishするためのカスタムメッセージ
 */
typedef struct line_msg__msg__BoxCorner
{
  /// ここはオブジェクトの名前に変えなければいけい（今は対象物が一つなのでこのままでいい）
  int8_t id;
  /// 頂点の番号（あらかじめ決まっている）
  int8_t corner_num;
  /// 頂点の座標
  geometry_msgs__msg__Pose posi;
} line_msg__msg__BoxCorner;

// Struct for a sequence of line_msg__msg__BoxCorner.
typedef struct line_msg__msg__BoxCorner__Sequence
{
  line_msg__msg__BoxCorner * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} line_msg__msg__BoxCorner__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LINE_MSG__MSG__DETAIL__BOX_CORNER__STRUCT_H_
