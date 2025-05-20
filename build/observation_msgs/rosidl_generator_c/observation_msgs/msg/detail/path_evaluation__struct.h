// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from observation_msgs:msg/PathEvaluation.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__STRUCT_H_
#define OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/PathEvaluation in the package observation_msgs.
typedef struct observation_msgs__msg__PathEvaluation
{
  std_msgs__msg__Header header;
  /// 経路上の最大コスト
  int8_t max_cost;
  /// 経路上の平均コスト
  int8_t ave_cost;
  /// 未探索エリアを通過するか
  bool unknown_area;
} observation_msgs__msg__PathEvaluation;

// Struct for a sequence of observation_msgs__msg__PathEvaluation.
typedef struct observation_msgs__msg__PathEvaluation__Sequence
{
  observation_msgs__msg__PathEvaluation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observation_msgs__msg__PathEvaluation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__STRUCT_H_
