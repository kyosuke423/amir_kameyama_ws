// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_tree_msgs:srv/GetBlackBoard.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_tree_msgs/srv/detail/get_black_board__rosidl_typesupport_introspection_c.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_tree_msgs/srv/detail/get_black_board__functions.h"
#include "behavior_tree_msgs/srv/detail/get_black_board__struct.h"


// Include directives for member types
// Member `pose_names`
// Member `path_names`
// Member `float_array_names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__srv__GetBlackBoard_Request__init(message_memory);
}

void behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_fini_function(void * message_memory)
{
  behavior_tree_msgs__srv__GetBlackBoard_Request__fini(message_memory);
}

size_t behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Request__pose_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Request__pose_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Request__pose_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Request__pose_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Request__pose_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Request__pose_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Request__pose_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Request__pose_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Request__path_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Request__path_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Request__path_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Request__path_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Request__path_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Request__path_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Request__path_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Request__path_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Request__float_array_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Request__float_array_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Request__float_array_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Request__float_array_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Request__float_array_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Request__float_array_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Request__float_array_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Request__float_array_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_message_member_array[3] = {
  {
    "pose_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBlackBoard_Request, pose_names),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Request__pose_names,  // size() function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Request__pose_names,  // get_const(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Request__pose_names,  // get(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Request__pose_names,  // fetch(index, &value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Request__pose_names,  // assign(index, value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Request__pose_names  // resize(index) function pointer
  },
  {
    "path_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBlackBoard_Request, path_names),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Request__path_names,  // size() function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Request__path_names,  // get_const(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Request__path_names,  // get(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Request__path_names,  // fetch(index, &value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Request__path_names,  // assign(index, value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Request__path_names  // resize(index) function pointer
  },
  {
    "float_array_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBlackBoard_Request, float_array_names),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Request__float_array_names,  // size() function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Request__float_array_names,  // get_const(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Request__float_array_names,  // get(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Request__float_array_names,  // fetch(index, &value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Request__float_array_names,  // assign(index, value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Request__float_array_names  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_message_members = {
  "behavior_tree_msgs__srv",  // message namespace
  "GetBlackBoard_Request",  // message name
  3,  // number of fields
  sizeof(behavior_tree_msgs__srv__GetBlackBoard_Request),
  behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_message_member_array,  // message members
  behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_message_type_support_handle = {
  0,
  &behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBlackBoard_Request)() {
  if (!behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__srv__GetBlackBoard_Request__rosidl_typesupport_introspection_c__GetBlackBoard_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/srv/detail/get_black_board__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/get_black_board__functions.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/get_black_board__struct.h"


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

void behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__srv__GetBlackBoard_Response__init(message_memory);
}

void behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_fini_function(void * message_memory)
{
  behavior_tree_msgs__srv__GetBlackBoard_Response__fini(message_memory);
}

size_t behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Response__poses(
  const void * untyped_member)
{
  const behavior_tree_msgs__msg__BBPose__Sequence * member =
    (const behavior_tree_msgs__msg__BBPose__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Response__poses(
  const void * untyped_member, size_t index)
{
  const behavior_tree_msgs__msg__BBPose__Sequence * member =
    (const behavior_tree_msgs__msg__BBPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Response__poses(
  void * untyped_member, size_t index)
{
  behavior_tree_msgs__msg__BBPose__Sequence * member =
    (behavior_tree_msgs__msg__BBPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Response__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const behavior_tree_msgs__msg__BBPose * item =
    ((const behavior_tree_msgs__msg__BBPose *)
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Response__poses(untyped_member, index));
  behavior_tree_msgs__msg__BBPose * value =
    (behavior_tree_msgs__msg__BBPose *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Response__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  behavior_tree_msgs__msg__BBPose * item =
    ((behavior_tree_msgs__msg__BBPose *)
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Response__poses(untyped_member, index));
  const behavior_tree_msgs__msg__BBPose * value =
    (const behavior_tree_msgs__msg__BBPose *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Response__poses(
  void * untyped_member, size_t size)
{
  behavior_tree_msgs__msg__BBPose__Sequence * member =
    (behavior_tree_msgs__msg__BBPose__Sequence *)(untyped_member);
  behavior_tree_msgs__msg__BBPose__Sequence__fini(member);
  return behavior_tree_msgs__msg__BBPose__Sequence__init(member, size);
}

size_t behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Response__paths(
  const void * untyped_member)
{
  const behavior_tree_msgs__msg__BBPath__Sequence * member =
    (const behavior_tree_msgs__msg__BBPath__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Response__paths(
  const void * untyped_member, size_t index)
{
  const behavior_tree_msgs__msg__BBPath__Sequence * member =
    (const behavior_tree_msgs__msg__BBPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Response__paths(
  void * untyped_member, size_t index)
{
  behavior_tree_msgs__msg__BBPath__Sequence * member =
    (behavior_tree_msgs__msg__BBPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Response__paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const behavior_tree_msgs__msg__BBPath * item =
    ((const behavior_tree_msgs__msg__BBPath *)
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Response__paths(untyped_member, index));
  behavior_tree_msgs__msg__BBPath * value =
    (behavior_tree_msgs__msg__BBPath *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Response__paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  behavior_tree_msgs__msg__BBPath * item =
    ((behavior_tree_msgs__msg__BBPath *)
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Response__paths(untyped_member, index));
  const behavior_tree_msgs__msg__BBPath * value =
    (const behavior_tree_msgs__msg__BBPath *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Response__paths(
  void * untyped_member, size_t size)
{
  behavior_tree_msgs__msg__BBPath__Sequence * member =
    (behavior_tree_msgs__msg__BBPath__Sequence *)(untyped_member);
  behavior_tree_msgs__msg__BBPath__Sequence__fini(member);
  return behavior_tree_msgs__msg__BBPath__Sequence__init(member, size);
}

size_t behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Response__float_array_set(
  const void * untyped_member)
{
  const behavior_tree_msgs__msg__BBFloat64Array__Sequence * member =
    (const behavior_tree_msgs__msg__BBFloat64Array__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Response__float_array_set(
  const void * untyped_member, size_t index)
{
  const behavior_tree_msgs__msg__BBFloat64Array__Sequence * member =
    (const behavior_tree_msgs__msg__BBFloat64Array__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Response__float_array_set(
  void * untyped_member, size_t index)
{
  behavior_tree_msgs__msg__BBFloat64Array__Sequence * member =
    (behavior_tree_msgs__msg__BBFloat64Array__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Response__float_array_set(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const behavior_tree_msgs__msg__BBFloat64Array * item =
    ((const behavior_tree_msgs__msg__BBFloat64Array *)
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Response__float_array_set(untyped_member, index));
  behavior_tree_msgs__msg__BBFloat64Array * value =
    (behavior_tree_msgs__msg__BBFloat64Array *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Response__float_array_set(
  void * untyped_member, size_t index, const void * untyped_value)
{
  behavior_tree_msgs__msg__BBFloat64Array * item =
    ((behavior_tree_msgs__msg__BBFloat64Array *)
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Response__float_array_set(untyped_member, index));
  const behavior_tree_msgs__msg__BBFloat64Array * value =
    (const behavior_tree_msgs__msg__BBFloat64Array *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Response__float_array_set(
  void * untyped_member, size_t size)
{
  behavior_tree_msgs__msg__BBFloat64Array__Sequence * member =
    (behavior_tree_msgs__msg__BBFloat64Array__Sequence *)(untyped_member);
  behavior_tree_msgs__msg__BBFloat64Array__Sequence__fini(member);
  return behavior_tree_msgs__msg__BBFloat64Array__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_member_array[3] = {
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBlackBoard_Response, poses),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Response__poses,  // size() function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Response__poses,  // get_const(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Response__poses,  // get(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Response__poses,  // fetch(index, &value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Response__poses,  // assign(index, value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Response__poses  // resize(index) function pointer
  },
  {
    "paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBlackBoard_Response, paths),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Response__paths,  // size() function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Response__paths,  // get_const(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Response__paths,  // get(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Response__paths,  // fetch(index, &value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Response__paths,  // assign(index, value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Response__paths  // resize(index) function pointer
  },
  {
    "float_array_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBlackBoard_Response, float_array_set),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__size_function__GetBlackBoard_Response__float_array_set,  // size() function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_const_function__GetBlackBoard_Response__float_array_set,  // get_const(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__get_function__GetBlackBoard_Response__float_array_set,  // get(index) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__fetch_function__GetBlackBoard_Response__float_array_set,  // fetch(index, &value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__assign_function__GetBlackBoard_Response__float_array_set,  // assign(index, value) function pointer
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__resize_function__GetBlackBoard_Response__float_array_set  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_members = {
  "behavior_tree_msgs__srv",  // message namespace
  "GetBlackBoard_Response",  // message name
  3,  // number of fields
  sizeof(behavior_tree_msgs__srv__GetBlackBoard_Response),
  behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_member_array,  // message members
  behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_type_support_handle = {
  0,
  &behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBlackBoard_Response)() {
  behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, BBPose)();
  behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, BBPath)();
  behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, BBFloat64Array)();
  if (!behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__srv__GetBlackBoard_Response__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/get_black_board__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_tree_msgs__srv__detail__get_black_board__rosidl_typesupport_introspection_c__GetBlackBoard_service_members = {
  "behavior_tree_msgs__srv",  // service namespace
  "GetBlackBoard",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_tree_msgs__srv__detail__get_black_board__rosidl_typesupport_introspection_c__GetBlackBoard_Request_message_type_support_handle,
  NULL  // response message
  // behavior_tree_msgs__srv__detail__get_black_board__rosidl_typesupport_introspection_c__GetBlackBoard_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_tree_msgs__srv__detail__get_black_board__rosidl_typesupport_introspection_c__GetBlackBoard_service_type_support_handle = {
  0,
  &behavior_tree_msgs__srv__detail__get_black_board__rosidl_typesupport_introspection_c__GetBlackBoard_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBlackBoard_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBlackBoard_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBlackBoard)() {
  if (!behavior_tree_msgs__srv__detail__get_black_board__rosidl_typesupport_introspection_c__GetBlackBoard_service_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__srv__detail__get_black_board__rosidl_typesupport_introspection_c__GetBlackBoard_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_tree_msgs__srv__detail__get_black_board__rosidl_typesupport_introspection_c__GetBlackBoard_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBlackBoard_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBlackBoard_Response)()->data;
  }

  return &behavior_tree_msgs__srv__detail__get_black_board__rosidl_typesupport_introspection_c__GetBlackBoard_service_type_support_handle;
}
