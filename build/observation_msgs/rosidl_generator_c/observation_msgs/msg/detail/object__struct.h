// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from observation_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define OBSERVATION_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * status
  * 観測したことがなく場所も不明
 */
enum
{
  observation_msgs__msg__Object__UNKNOWN = 0l
};

/// Constant 'KNOWN'.
/**
  * 観測したことがあり場所も既知
 */
enum
{
  observation_msgs__msg__Object__KNOWN = 1l
};

/// Constant 'LOST'.
/**
  * 観測したことがあるが場所は不明
 */
enum
{
  observation_msgs__msg__Object__LOST = 2l
};

/// Constant 'POSE_KNOWN'.
/**
  * 場所は既知だが観測したことがない（人が指示するとき用）
 */
enum
{
  observation_msgs__msg__Object__POSE_KNOWN = 3l
};

/// Constant 'ATTACHED'.
/**
  * ロボットが所有
 */
enum
{
  observation_msgs__msg__Object__ATTACHED = 4l
};

/// Constant 'POINT'.
/**
  * msg_type
  * 位置
 */
enum
{
  observation_msgs__msg__Object__POINT = 0l
};

/// Constant 'POSE'.
/**
  * 位置姿勢
 */
enum
{
  observation_msgs__msg__Object__POSE = 1l
};

/// Constant 'COLLISION'.
/**
  * moveit_msgs
 */
enum
{
  observation_msgs__msg__Object__COLLISION = 2l
};

/// Constant 'ATTACHED_COLLISION'.
/**
  * moveit_msgs
 */
enum
{
  observation_msgs__msg__Object__ATTACHED_COLLISION = 3l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'collision_object'
#include "moveit_msgs/msg/detail/collision_object__struct.h"
// Member 'attached_collision_object'
#include "moveit_msgs/msg/detail/attached_collision_object__struct.h"
// Member 'id'
// Member 'obj_group'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Object in the package observation_msgs.
typedef struct observation_msgs__msg__Object
{
  /// 最後に観測した時刻を記録
  std_msgs__msg__Header header;
  /// msg_typeがPOINTの場合はpositionだけ
  geometry_msgs__msg__Pose pose;
  moveit_msgs__msg__CollisionObject collision_object;
  moveit_msgs__msg__AttachedCollisionObject attached_collision_object;
  /// 識別用の名前
  rosidl_runtime_c__String id;
  /// botlle, ar_marker, locationなど
  rosidl_runtime_c__String obj_group;
  int32_t status;
  int32_t msg_type;
  /// 重量
  double weight;
} observation_msgs__msg__Object;

// Struct for a sequence of observation_msgs__msg__Object.
typedef struct observation_msgs__msg__Object__Sequence
{
  observation_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observation_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBSERVATION_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
