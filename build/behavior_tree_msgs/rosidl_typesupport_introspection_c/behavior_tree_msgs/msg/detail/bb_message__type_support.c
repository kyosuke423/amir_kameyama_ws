// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_tree_msgs:msg/BBMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_tree_msgs/msg/detail/bb_message__rosidl_typesupport_introspection_c.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_tree_msgs/msg/detail/bb_message__functions.h"
#include "behavior_tree_msgs/msg/detail/bb_message__struct.h"


// Include directives for member types
// Member `poses`
#include "behavior_tree_msgs/msg/bb_pose.h"
// Member `poses`
#include "behavior_tree_msgs/msg/detail/bb_pose__rosidl_typesupport_introspection_c.h"
// Member `paths`
#include "behavior_tree_msgs/msg/bb_path.h"
// Member `paths`
#include "behavior_tree_msgs/msg/detail/bb_path__rosidl_typesupport_introspection_c.h"
// Member `float_array_set`
#include "behavior_tree_msgs/msg/bb_float64_array.h"
// Member `float_array_set`
#include "behavior_tree_msgs/msg/detail/bb_float64_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__msg__BBMessage__init(message_memory);
}

void behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_fini_function(void * message_memory)
{
  behavior_tree_msgs__msg__BBMessage__fini(message_memory);
}

size_t behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__size_function__BBMessage__poses(
  const void * untyped_member)
{
  const behavior_tree_msgs__msg__BBPose__Sequence * member =
    (const behavior_tree_msgs__msg__BBPose__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_const_function__BBMessage__poses(
  const void * untyped_member, size_t index)
{
  const behavior_tree_msgs__msg__BBPose__Sequence * member =
    (const behavior_tree_msgs__msg__BBPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_function__BBMessage__poses(
  void * untyped_member, size_t index)
{
  behavior_tree_msgs__msg__BBPose__Sequence * member =
    (behavior_tree_msgs__msg__BBPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__fetch_function__BBMessage__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const behavior_tree_msgs__msg__BBPose * item =
    ((const behavior_tree_msgs__msg__BBPose *)
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_const_function__BBMessage__poses(untyped_member, index));
  behavior_tree_msgs__msg__BBPose * value =
    (behavior_tree_msgs__msg__BBPose *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__assign_function__BBMessage__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  behavior_tree_msgs__msg__BBPose * item =
    ((behavior_tree_msgs__msg__BBPose *)
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_function__BBMessage__poses(untyped_member, index));
  const behavior_tree_msgs__msg__BBPose * value =
    (const behavior_tree_msgs__msg__BBPose *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__resize_function__BBMessage__poses(
  void * untyped_member, size_t size)
{
  behavior_tree_msgs__msg__BBPose__Sequence * member =
    (behavior_tree_msgs__msg__BBPose__Sequence *)(untyped_member);
  behavior_tree_msgs__msg__BBPose__Sequence__fini(member);
  return behavior_tree_msgs__msg__BBPose__Sequence__init(member, size);
}

size_t behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__size_function__BBMessage__paths(
  const void * untyped_member)
{
  const behavior_tree_msgs__msg__BBPath__Sequence * member =
    (const behavior_tree_msgs__msg__BBPath__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_const_function__BBMessage__paths(
  const void * untyped_member, size_t index)
{
  const behavior_tree_msgs__msg__BBPath__Sequence * member =
    (const behavior_tree_msgs__msg__BBPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_function__BBMessage__paths(
  void * untyped_member, size_t index)
{
  behavior_tree_msgs__msg__BBPath__Sequence * member =
    (behavior_tree_msgs__msg__BBPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__fetch_function__BBMessage__paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const behavior_tree_msgs__msg__BBPath * item =
    ((const behavior_tree_msgs__msg__BBPath *)
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_const_function__BBMessage__paths(untyped_member, index));
  behavior_tree_msgs__msg__BBPath * value =
    (behavior_tree_msgs__msg__BBPath *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__assign_function__BBMessage__paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  behavior_tree_msgs__msg__BBPath * item =
    ((behavior_tree_msgs__msg__BBPath *)
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_function__BBMessage__paths(untyped_member, index));
  const behavior_tree_msgs__msg__BBPath * value =
    (const behavior_tree_msgs__msg__BBPath *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__resize_function__BBMessage__paths(
  void * untyped_member, size_t size)
{
  behavior_tree_msgs__msg__BBPath__Sequence * member =
    (behavior_tree_msgs__msg__BBPath__Sequence *)(untyped_member);
  behavior_tree_msgs__msg__BBPath__Sequence__fini(member);
  return behavior_tree_msgs__msg__BBPath__Sequence__init(member, size);
}

size_t behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__size_function__BBMessage__float_array_set(
  const void * untyped_member)
{
  const behavior_tree_msgs__msg__BBFloat64Array__Sequence * member =
    (const behavior_tree_msgs__msg__BBFloat64Array__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_const_function__BBMessage__float_array_set(
  const void * untyped_member, size_t index)
{
  const behavior_tree_msgs__msg__BBFloat64Array__Sequence * member =
    (const behavior_tree_msgs__msg__BBFloat64Array__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_function__BBMessage__float_array_set(
  void * untyped_member, size_t index)
{
  behavior_tree_msgs__msg__BBFloat64Array__Sequence * member =
    (behavior_tree_msgs__msg__BBFloat64Array__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__fetch_function__BBMessage__float_array_set(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const behavior_tree_msgs__msg__BBFloat64Array * item =
    ((const behavior_tree_msgs__msg__BBFloat64Array *)
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_const_function__BBMessage__float_array_set(untyped_member, index));
  behavior_tree_msgs__msg__BBFloat64Array * value =
    (behavior_tree_msgs__msg__BBFloat64Array *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__assign_function__BBMessage__float_array_set(
  void * untyped_member, size_t index, const void * untyped_value)
{
  behavior_tree_msgs__msg__BBFloat64Array * item =
    ((behavior_tree_msgs__msg__BBFloat64Array *)
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_function__BBMessage__float_array_set(untyped_member, index));
  const behavior_tree_msgs__msg__BBFloat64Array * value =
    (const behavior_tree_msgs__msg__BBFloat64Array *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__resize_function__BBMessage__float_array_set(
  void * untyped_member, size_t size)
{
  behavior_tree_msgs__msg__BBFloat64Array__Sequence * member =
    (behavior_tree_msgs__msg__BBFloat64Array__Sequence *)(untyped_member);
  behavior_tree_msgs__msg__BBFloat64Array__Sequence__fini(member);
  return behavior_tree_msgs__msg__BBFloat64Array__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_member_array[3] = {
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__msg__BBMessage, poses),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__size_function__BBMessage__poses,  // size() function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_const_function__BBMessage__poses,  // get_const(index) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_function__BBMessage__poses,  // get(index) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__fetch_function__BBMessage__poses,  // fetch(index, &value) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__assign_function__BBMessage__poses,  // assign(index, value) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__resize_function__BBMessage__poses  // resize(index) function pointer
  },
  {
    "paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__msg__BBMessage, paths),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__size_function__BBMessage__paths,  // size() function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_const_function__BBMessage__paths,  // get_const(index) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_function__BBMessage__paths,  // get(index) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__fetch_function__BBMessage__paths,  // fetch(index, &value) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__assign_function__BBMessage__paths,  // assign(index, value) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__resize_function__BBMessage__paths  // resize(index) function pointer
  },
  {
    "float_array_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__msg__BBMessage, float_array_set),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__size_function__BBMessage__float_array_set,  // size() function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_const_function__BBMessage__float_array_set,  // get_const(index) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__get_function__BBMessage__float_array_set,  // get(index) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__fetch_function__BBMessage__float_array_set,  // fetch(index, &value) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__assign_function__BBMessage__float_array_set,  // assign(index, value) function pointer
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__resize_function__BBMessage__float_array_set  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_members = {
  "behavior_tree_msgs__msg",  // message namespace
  "BBMessage",  // message name
  3,  // number of fields
  sizeof(behavior_tree_msgs__msg__BBMessage),
  behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_member_array,  // message members
  behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_type_support_handle = {
  0,
  &behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, BBMessage)() {
  behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, BBPose)();
  behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, BBPath)();
  behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, BBFloat64Array)();
  if (!behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__msg__BBMessage__rosidl_typesupport_introspection_c__BBMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
