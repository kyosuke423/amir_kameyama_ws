// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_tree_msgs:msg/BTStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_tree_msgs/msg/detail/bt_status__rosidl_typesupport_introspection_c.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_tree_msgs/msg/detail/bt_status__functions.h"
#include "behavior_tree_msgs/msg/detail/bt_status__struct.h"


// Include directives for member types
// Member `bt`
#include "rosidl_runtime_c/string_functions.h"
// Member `root_status`
// Member `bt_status`
#include "behavior_tree_msgs/msg/node_status.h"
// Member `root_status`
// Member `bt_status`
#include "behavior_tree_msgs/msg/detail/node_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__msg__BTStatus__init(message_memory);
}

void behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_fini_function(void * message_memory)
{
  behavior_tree_msgs__msg__BTStatus__fini(message_memory);
}

size_t behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__size_function__BTStatus__bt_status(
  const void * untyped_member)
{
  const behavior_tree_msgs__msg__NodeStatus__Sequence * member =
    (const behavior_tree_msgs__msg__NodeStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__get_const_function__BTStatus__bt_status(
  const void * untyped_member, size_t index)
{
  const behavior_tree_msgs__msg__NodeStatus__Sequence * member =
    (const behavior_tree_msgs__msg__NodeStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__get_function__BTStatus__bt_status(
  void * untyped_member, size_t index)
{
  behavior_tree_msgs__msg__NodeStatus__Sequence * member =
    (behavior_tree_msgs__msg__NodeStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__fetch_function__BTStatus__bt_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const behavior_tree_msgs__msg__NodeStatus * item =
    ((const behavior_tree_msgs__msg__NodeStatus *)
    behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__get_const_function__BTStatus__bt_status(untyped_member, index));
  behavior_tree_msgs__msg__NodeStatus * value =
    (behavior_tree_msgs__msg__NodeStatus *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__assign_function__BTStatus__bt_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  behavior_tree_msgs__msg__NodeStatus * item =
    ((behavior_tree_msgs__msg__NodeStatus *)
    behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__get_function__BTStatus__bt_status(untyped_member, index));
  const behavior_tree_msgs__msg__NodeStatus * value =
    (const behavior_tree_msgs__msg__NodeStatus *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__resize_function__BTStatus__bt_status(
  void * untyped_member, size_t size)
{
  behavior_tree_msgs__msg__NodeStatus__Sequence * member =
    (behavior_tree_msgs__msg__NodeStatus__Sequence *)(untyped_member);
  behavior_tree_msgs__msg__NodeStatus__Sequence__fini(member);
  return behavior_tree_msgs__msg__NodeStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_member_array[3] = {
  {
    "bt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__msg__BTStatus, bt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "root_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__msg__BTStatus, root_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bt_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__msg__BTStatus, bt_status),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__size_function__BTStatus__bt_status,  // size() function pointer
    behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__get_const_function__BTStatus__bt_status,  // get_const(index) function pointer
    behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__get_function__BTStatus__bt_status,  // get(index) function pointer
    behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__fetch_function__BTStatus__bt_status,  // fetch(index, &value) function pointer
    behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__assign_function__BTStatus__bt_status,  // assign(index, value) function pointer
    behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__resize_function__BTStatus__bt_status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_members = {
  "behavior_tree_msgs__msg",  // message namespace
  "BTStatus",  // message name
  3,  // number of fields
  sizeof(behavior_tree_msgs__msg__BTStatus),
  behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_member_array,  // message members
  behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_type_support_handle = {
  0,
  &behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, BTStatus)() {
  behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, NodeStatus)();
  behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, NodeStatus)();
  if (!behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__msg__BTStatus__rosidl_typesupport_introspection_c__BTStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
