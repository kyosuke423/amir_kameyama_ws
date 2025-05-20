// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from observation_msgs:msg/PathEvaluation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "observation_msgs/msg/detail/path_evaluation__rosidl_typesupport_introspection_c.h"
#include "observation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "observation_msgs/msg/detail/path_evaluation__functions.h"
#include "observation_msgs/msg/detail/path_evaluation__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  observation_msgs__msg__PathEvaluation__init(message_memory);
}

void observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_fini_function(void * message_memory)
{
  observation_msgs__msg__PathEvaluation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observation_msgs__msg__PathEvaluation, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observation_msgs__msg__PathEvaluation, max_cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ave_cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observation_msgs__msg__PathEvaluation, ave_cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unknown_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observation_msgs__msg__PathEvaluation, unknown_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_message_members = {
  "observation_msgs__msg",  // message namespace
  "PathEvaluation",  // message name
  4,  // number of fields
  sizeof(observation_msgs__msg__PathEvaluation),
  observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_message_member_array,  // message members
  observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_init_function,  // function to initialize message memory (memory has to be allocated)
  observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_message_type_support_handle = {
  0,
  &observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observation_msgs, msg, PathEvaluation)() {
  observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_message_type_support_handle.typesupport_identifier) {
    observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &observation_msgs__msg__PathEvaluation__rosidl_typesupport_introspection_c__PathEvaluation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
