// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ar_track_alvar_msgs:msg/AlvarMarkers.idl
// generated code does not contain a copyright notice

#ifndef AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKERS__STRUCT_H_
#define AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKERS__STRUCT_H_

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
// Member 'markers'
#include "ar_track_alvar_msgs/msg/detail/alvar_marker__struct.h"

/// Struct defined in msg/AlvarMarkers in the package ar_track_alvar_msgs.
typedef struct ar_track_alvar_msgs__msg__AlvarMarkers
{
  std_msgs__msg__Header header;
  ar_track_alvar_msgs__msg__AlvarMarker__Sequence markers;
} ar_track_alvar_msgs__msg__AlvarMarkers;

// Struct for a sequence of ar_track_alvar_msgs__msg__AlvarMarkers.
typedef struct ar_track_alvar_msgs__msg__AlvarMarkers__Sequence
{
  ar_track_alvar_msgs__msg__AlvarMarkers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ar_track_alvar_msgs__msg__AlvarMarkers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKERS__STRUCT_H_
