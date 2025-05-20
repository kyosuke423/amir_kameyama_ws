// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from failure_detection_msgs:msg/Solution.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "failure_detection_msgs/msg/detail/solution__rosidl_typesupport_introspection_c.h"
#include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "failure_detection_msgs/msg/detail/solution__functions.h"
#include "failure_detection_msgs/msg/detail/solution__struct.h"


// Include directives for member types
// Member `bt_node_name`
// Member `solutions`
#include "rosidl_runtime_c/string_functions.h"
// Member `priorities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `bb_message`
#include "behavior_tree_msgs/msg/bb_message.h"
// Member `bb_message`
#include "behavior_tree_msgs/msg/detail/bb_message__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  failure_detection_msgs__msg__Solution__init(message_memory);
}

void failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_fini_function(void * message_memory)
{
  failure_detection_msgs__msg__Solution__fini(message_memory);
}

size_t failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__size_function__Solution__solutions(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_const_function__Solution__solutions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_function__Solution__solutions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__fetch_function__Solution__solutions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_const_function__Solution__solutions(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__assign_function__Solution__solutions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_function__Solution__solutions(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__resize_function__Solution__solutions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__size_function__Solution__priorities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_const_function__Solution__priorities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_function__Solution__priorities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__fetch_function__Solution__priorities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_const_function__Solution__priorities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__assign_function__Solution__priorities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_function__Solution__priorities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__resize_function__Solution__priorities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_message_member_array[4] = {
  {
    "bt_node_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__msg__Solution, bt_node_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solutions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__msg__Solution, solutions),  // bytes offset in struct
    NULL,  // default value
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__size_function__Solution__solutions,  // size() function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_const_function__Solution__solutions,  // get_const(index) function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_function__Solution__solutions,  // get(index) function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__fetch_function__Solution__solutions,  // fetch(index, &value) function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__assign_function__Solution__solutions,  // assign(index, value) function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__resize_function__Solution__solutions  // resize(index) function pointer
  },
  {
    "priorities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__msg__Solution, priorities),  // bytes offset in struct
    NULL,  // default value
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__size_function__Solution__priorities,  // size() function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_const_function__Solution__priorities,  // get_const(index) function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__get_function__Solution__priorities,  // get(index) function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__fetch_function__Solution__priorities,  // fetch(index, &value) function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__assign_function__Solution__priorities,  // assign(index, value) function pointer
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__resize_function__Solution__priorities  // resize(index) function pointer
  },
  {
    "bb_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__msg__Solution, bb_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_message_members = {
  "failure_detection_msgs__msg",  // message namespace
  "Solution",  // message name
  4,  // number of fields
  sizeof(failure_detection_msgs__msg__Solution),
  failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_message_member_array,  // message members
  failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_init_function,  // function to initialize message memory (memory has to be allocated)
  failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_message_type_support_handle = {
  0,
  &failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, msg, Solution)() {
  failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, BBMessage)();
  if (!failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_message_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &failure_detection_msgs__msg__Solution__rosidl_typesupport_introspection_c__Solution_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
