// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_nav_msgs:msg/PathWithCondition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_nav_msgs/msg/detail/path_with_condition__rosidl_typesupport_introspection_c.h"
#include "my_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_nav_msgs/msg/detail/path_with_condition__functions.h"
#include "my_nav_msgs/msg/detail/path_with_condition__struct.h"


// Include directives for member types
// Member `path`
#include "nav_msgs/msg/path.h"
// Member `path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `info`
#include "my_nav_msgs/msg/path_info.h"
// Member `info`
#include "my_nav_msgs/msg/detail/path_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_nav_msgs__msg__PathWithCondition__init(message_memory);
}

void my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_fini_function(void * message_memory)
{
  my_nav_msgs__msg__PathWithCondition__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_member_array[2] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_nav_msgs__msg__PathWithCondition, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_nav_msgs__msg__PathWithCondition, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_members = {
  "my_nav_msgs__msg",  // message namespace
  "PathWithCondition",  // message name
  2,  // number of fields
  sizeof(my_nav_msgs__msg__PathWithCondition),
  my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_member_array,  // message members
  my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_init_function,  // function to initialize message memory (memory has to be allocated)
  my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_type_support_handle = {
  0,
  &my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_nav_msgs, msg, PathWithCondition)() {
  my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_nav_msgs, msg, PathInfo)();
  if (!my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_type_support_handle.typesupport_identifier) {
    my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_nav_msgs__msg__PathWithCondition__rosidl_typesupport_introspection_c__PathWithCondition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
