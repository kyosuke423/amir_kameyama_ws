// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_nav_msgs/msg/detail/path_info__rosidl_typesupport_introspection_c.h"
#include "my_nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_nav_msgs/msg/detail/path_info__functions.h"
#include "my_nav_msgs/msg/detail/path_info__struct.h"


// Include directives for member types
// Member `remove_id_set`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_nav_msgs__msg__PathInfo__init(message_memory);
}

void my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_fini_function(void * message_memory)
{
  my_nav_msgs__msg__PathInfo__fini(message_memory);
}

size_t my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__size_function__PathInfo__remove_id_set(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__get_const_function__PathInfo__remove_id_set(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__get_function__PathInfo__remove_id_set(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__fetch_function__PathInfo__remove_id_set(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__get_const_function__PathInfo__remove_id_set(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__assign_function__PathInfo__remove_id_set(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__get_function__PathInfo__remove_id_set(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__resize_function__PathInfo__remove_id_set(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_message_member_array[2] = {
  {
    "remove_id_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_nav_msgs__msg__PathInfo, remove_id_set),  // bytes offset in struct
    NULL,  // default value
    my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__size_function__PathInfo__remove_id_set,  // size() function pointer
    my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__get_const_function__PathInfo__remove_id_set,  // get_const(index) function pointer
    my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__get_function__PathInfo__remove_id_set,  // get(index) function pointer
    my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__fetch_function__PathInfo__remove_id_set,  // fetch(index, &value) function pointer
    my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__assign_function__PathInfo__remove_id_set,  // assign(index, value) function pointer
    my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__resize_function__PathInfo__remove_id_set  // resize(index) function pointer
  },
  {
    "success_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_nav_msgs__msg__PathInfo, success_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_message_members = {
  "my_nav_msgs__msg",  // message namespace
  "PathInfo",  // message name
  2,  // number of fields
  sizeof(my_nav_msgs__msg__PathInfo),
  my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_message_member_array,  // message members
  my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_message_type_support_handle = {
  0,
  &my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_nav_msgs, msg, PathInfo)() {
  if (!my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_message_type_support_handle.typesupport_identifier) {
    my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_nav_msgs__msg__PathInfo__rosidl_typesupport_introspection_c__PathInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
