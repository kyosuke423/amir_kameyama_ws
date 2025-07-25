// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_tree_msgs:msg/Pixel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_tree_msgs/msg/detail/pixel__rosidl_typesupport_introspection_c.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_tree_msgs/msg/detail/pixel__functions.h"
#include "behavior_tree_msgs/msg/detail/pixel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__msg__Pixel__init(message_memory);
}

void behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_fini_function(void * message_memory)
{
  behavior_tree_msgs__msg__Pixel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__msg__Pixel, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__msg__Pixel, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_members = {
  "behavior_tree_msgs__msg",  // message namespace
  "Pixel",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__msg__Pixel),
  behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_member_array,  // message members
  behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_type_support_handle = {
  0,
  &behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, Pixel)() {
  if (!behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
