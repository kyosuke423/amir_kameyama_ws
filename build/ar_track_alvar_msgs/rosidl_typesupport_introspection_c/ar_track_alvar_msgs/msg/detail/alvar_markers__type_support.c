// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ar_track_alvar_msgs:msg/AlvarMarkers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ar_track_alvar_msgs/msg/detail/alvar_markers__rosidl_typesupport_introspection_c.h"
#include "ar_track_alvar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ar_track_alvar_msgs/msg/detail/alvar_markers__functions.h"
#include "ar_track_alvar_msgs/msg/detail/alvar_markers__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `markers`
#include "ar_track_alvar_msgs/msg/alvar_marker.h"
// Member `markers`
#include "ar_track_alvar_msgs/msg/detail/alvar_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ar_track_alvar_msgs__msg__AlvarMarkers__init(message_memory);
}

void ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_fini_function(void * message_memory)
{
  ar_track_alvar_msgs__msg__AlvarMarkers__fini(message_memory);
}

size_t ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__size_function__AlvarMarkers__markers(
  const void * untyped_member)
{
  const ar_track_alvar_msgs__msg__AlvarMarker__Sequence * member =
    (const ar_track_alvar_msgs__msg__AlvarMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__get_const_function__AlvarMarkers__markers(
  const void * untyped_member, size_t index)
{
  const ar_track_alvar_msgs__msg__AlvarMarker__Sequence * member =
    (const ar_track_alvar_msgs__msg__AlvarMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__get_function__AlvarMarkers__markers(
  void * untyped_member, size_t index)
{
  ar_track_alvar_msgs__msg__AlvarMarker__Sequence * member =
    (ar_track_alvar_msgs__msg__AlvarMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__fetch_function__AlvarMarkers__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ar_track_alvar_msgs__msg__AlvarMarker * item =
    ((const ar_track_alvar_msgs__msg__AlvarMarker *)
    ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__get_const_function__AlvarMarkers__markers(untyped_member, index));
  ar_track_alvar_msgs__msg__AlvarMarker * value =
    (ar_track_alvar_msgs__msg__AlvarMarker *)(untyped_value);
  *value = *item;
}

void ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__assign_function__AlvarMarkers__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ar_track_alvar_msgs__msg__AlvarMarker * item =
    ((ar_track_alvar_msgs__msg__AlvarMarker *)
    ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__get_function__AlvarMarkers__markers(untyped_member, index));
  const ar_track_alvar_msgs__msg__AlvarMarker * value =
    (const ar_track_alvar_msgs__msg__AlvarMarker *)(untyped_value);
  *item = *value;
}

bool ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__resize_function__AlvarMarkers__markers(
  void * untyped_member, size_t size)
{
  ar_track_alvar_msgs__msg__AlvarMarker__Sequence * member =
    (ar_track_alvar_msgs__msg__AlvarMarker__Sequence *)(untyped_member);
  ar_track_alvar_msgs__msg__AlvarMarker__Sequence__fini(member);
  return ar_track_alvar_msgs__msg__AlvarMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_track_alvar_msgs__msg__AlvarMarkers, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_track_alvar_msgs__msg__AlvarMarkers, markers),  // bytes offset in struct
    NULL,  // default value
    ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__size_function__AlvarMarkers__markers,  // size() function pointer
    ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__get_const_function__AlvarMarkers__markers,  // get_const(index) function pointer
    ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__get_function__AlvarMarkers__markers,  // get(index) function pointer
    ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__fetch_function__AlvarMarkers__markers,  // fetch(index, &value) function pointer
    ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__assign_function__AlvarMarkers__markers,  // assign(index, value) function pointer
    ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__resize_function__AlvarMarkers__markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_members = {
  "ar_track_alvar_msgs__msg",  // message namespace
  "AlvarMarkers",  // message name
  2,  // number of fields
  sizeof(ar_track_alvar_msgs__msg__AlvarMarkers),
  ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_member_array,  // message members
  ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_init_function,  // function to initialize message memory (memory has to be allocated)
  ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_type_support_handle = {
  0,
  &ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ar_track_alvar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_track_alvar_msgs, msg, AlvarMarkers)() {
  ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_track_alvar_msgs, msg, AlvarMarker)();
  if (!ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_type_support_handle.typesupport_identifier) {
    ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ar_track_alvar_msgs__msg__AlvarMarkers__rosidl_typesupport_introspection_c__AlvarMarkers_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
