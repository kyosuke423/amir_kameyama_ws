// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from line_msg:msg/BoxCorner.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "line_msg/msg/detail/box_corner__rosidl_typesupport_introspection_c.h"
#include "line_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "line_msg/msg/detail/box_corner__functions.h"
#include "line_msg/msg/detail/box_corner__struct.h"


// Include directives for member types
// Member `posi`
#include "geometry_msgs/msg/pose.h"
// Member `posi`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  line_msg__msg__BoxCorner__init(message_memory);
}

void line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_fini_function(void * message_memory)
{
  line_msg__msg__BoxCorner__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(line_msg__msg__BoxCorner, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corner_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(line_msg__msg__BoxCorner, corner_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(line_msg__msg__BoxCorner, posi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_message_members = {
  "line_msg__msg",  // message namespace
  "BoxCorner",  // message name
  3,  // number of fields
  sizeof(line_msg__msg__BoxCorner),
  line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_message_member_array,  // message members
  line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_init_function,  // function to initialize message memory (memory has to be allocated)
  line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_message_type_support_handle = {
  0,
  &line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_line_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, line_msg, msg, BoxCorner)() {
  line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_message_type_support_handle.typesupport_identifier) {
    line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &line_msg__msg__BoxCorner__rosidl_typesupport_introspection_c__BoxCorner_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
