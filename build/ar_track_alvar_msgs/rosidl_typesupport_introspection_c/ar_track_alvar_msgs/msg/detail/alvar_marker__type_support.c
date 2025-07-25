// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ar_track_alvar_msgs:msg/AlvarMarker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ar_track_alvar_msgs/msg/detail/alvar_marker__rosidl_typesupport_introspection_c.h"
#include "ar_track_alvar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ar_track_alvar_msgs/msg/detail/alvar_marker__functions.h"
#include "ar_track_alvar_msgs/msg/detail/alvar_marker__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ar_track_alvar_msgs__msg__AlvarMarker__init(message_memory);
}

void ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_fini_function(void * message_memory)
{
  ar_track_alvar_msgs__msg__AlvarMarker__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_track_alvar_msgs__msg__AlvarMarker, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_track_alvar_msgs__msg__AlvarMarker, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_track_alvar_msgs__msg__AlvarMarker, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_track_alvar_msgs__msg__AlvarMarker, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_members = {
  "ar_track_alvar_msgs__msg",  // message namespace
  "AlvarMarker",  // message name
  4,  // number of fields
  sizeof(ar_track_alvar_msgs__msg__AlvarMarker),
  ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_member_array,  // message members
  ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_type_support_handle = {
  0,
  &ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ar_track_alvar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_track_alvar_msgs, msg, AlvarMarker)() {
  ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_type_support_handle.typesupport_identifier) {
    ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ar_track_alvar_msgs__msg__AlvarMarker__rosidl_typesupport_introspection_c__AlvarMarker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
