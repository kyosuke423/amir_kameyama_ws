// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from failure_detection_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "failure_detection_msgs/srv/detail/path_check__rosidl_typesupport_introspection_c.h"
#include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "failure_detection_msgs/srv/detail/path_check__functions.h"
#include "failure_detection_msgs/srv/detail/path_check__struct.h"


// Include directives for member types
// Member `paths`
#include "my_nav_msgs/msg/path_with_condition.h"
// Member `paths`
#include "my_nav_msgs/msg/detail/path_with_condition__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  failure_detection_msgs__srv__PathCheck_Request__init(message_memory);
}

void failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_fini_function(void * message_memory)
{
  failure_detection_msgs__srv__PathCheck_Request__fini(message_memory);
}

size_t failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__size_function__PathCheck_Request__paths(
  const void * untyped_member)
{
  const my_nav_msgs__msg__PathWithCondition__Sequence * member =
    (const my_nav_msgs__msg__PathWithCondition__Sequence *)(untyped_member);
  return member->size;
}

const void * failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__get_const_function__PathCheck_Request__paths(
  const void * untyped_member, size_t index)
{
  const my_nav_msgs__msg__PathWithCondition__Sequence * member =
    (const my_nav_msgs__msg__PathWithCondition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__get_function__PathCheck_Request__paths(
  void * untyped_member, size_t index)
{
  my_nav_msgs__msg__PathWithCondition__Sequence * member =
    (my_nav_msgs__msg__PathWithCondition__Sequence *)(untyped_member);
  return &member->data[index];
}

void failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__fetch_function__PathCheck_Request__paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_nav_msgs__msg__PathWithCondition * item =
    ((const my_nav_msgs__msg__PathWithCondition *)
    failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__get_const_function__PathCheck_Request__paths(untyped_member, index));
  my_nav_msgs__msg__PathWithCondition * value =
    (my_nav_msgs__msg__PathWithCondition *)(untyped_value);
  *value = *item;
}

void failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__assign_function__PathCheck_Request__paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_nav_msgs__msg__PathWithCondition * item =
    ((my_nav_msgs__msg__PathWithCondition *)
    failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__get_function__PathCheck_Request__paths(untyped_member, index));
  const my_nav_msgs__msg__PathWithCondition * value =
    (const my_nav_msgs__msg__PathWithCondition *)(untyped_value);
  *item = *value;
}

bool failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__resize_function__PathCheck_Request__paths(
  void * untyped_member, size_t size)
{
  my_nav_msgs__msg__PathWithCondition__Sequence * member =
    (my_nav_msgs__msg__PathWithCondition__Sequence *)(untyped_member);
  my_nav_msgs__msg__PathWithCondition__Sequence__fini(member);
  return my_nav_msgs__msg__PathWithCondition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_message_member_array[1] = {
  {
    "paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__PathCheck_Request, paths),  // bytes offset in struct
    NULL,  // default value
    failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__size_function__PathCheck_Request__paths,  // size() function pointer
    failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__get_const_function__PathCheck_Request__paths,  // get_const(index) function pointer
    failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__get_function__PathCheck_Request__paths,  // get(index) function pointer
    failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__fetch_function__PathCheck_Request__paths,  // fetch(index, &value) function pointer
    failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__assign_function__PathCheck_Request__paths,  // assign(index, value) function pointer
    failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__resize_function__PathCheck_Request__paths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_message_members = {
  "failure_detection_msgs__srv",  // message namespace
  "PathCheck_Request",  // message name
  1,  // number of fields
  sizeof(failure_detection_msgs__srv__PathCheck_Request),
  failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_message_member_array,  // message members
  failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_message_type_support_handle = {
  0,
  &failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, PathCheck_Request)() {
  failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_nav_msgs, msg, PathWithCondition)();
  if (!failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_message_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &failure_detection_msgs__srv__PathCheck_Request__rosidl_typesupport_introspection_c__PathCheck_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "failure_detection_msgs/srv/detail/path_check__rosidl_typesupport_introspection_c.h"
// already included above
// #include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "failure_detection_msgs/srv/detail/path_check__functions.h"
// already included above
// #include "failure_detection_msgs/srv/detail/path_check__struct.h"


// Include directives for member types
// Member `error_strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `info_set`
#include "my_nav_msgs/msg/path_info.h"
// Member `info_set`
#include "my_nav_msgs/msg/detail/path_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  failure_detection_msgs__srv__PathCheck_Response__init(message_memory);
}

void failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_fini_function(void * message_memory)
{
  failure_detection_msgs__srv__PathCheck_Response__fini(message_memory);
}

size_t failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__size_function__PathCheck_Response__info_set(
  const void * untyped_member)
{
  const my_nav_msgs__msg__PathInfo__Sequence * member =
    (const my_nav_msgs__msg__PathInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__get_const_function__PathCheck_Response__info_set(
  const void * untyped_member, size_t index)
{
  const my_nav_msgs__msg__PathInfo__Sequence * member =
    (const my_nav_msgs__msg__PathInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__get_function__PathCheck_Response__info_set(
  void * untyped_member, size_t index)
{
  my_nav_msgs__msg__PathInfo__Sequence * member =
    (my_nav_msgs__msg__PathInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__fetch_function__PathCheck_Response__info_set(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_nav_msgs__msg__PathInfo * item =
    ((const my_nav_msgs__msg__PathInfo *)
    failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__get_const_function__PathCheck_Response__info_set(untyped_member, index));
  my_nav_msgs__msg__PathInfo * value =
    (my_nav_msgs__msg__PathInfo *)(untyped_value);
  *value = *item;
}

void failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__assign_function__PathCheck_Response__info_set(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_nav_msgs__msg__PathInfo * item =
    ((my_nav_msgs__msg__PathInfo *)
    failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__get_function__PathCheck_Response__info_set(untyped_member, index));
  const my_nav_msgs__msg__PathInfo * value =
    (const my_nav_msgs__msg__PathInfo *)(untyped_value);
  *item = *value;
}

bool failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__resize_function__PathCheck_Response__info_set(
  void * untyped_member, size_t size)
{
  my_nav_msgs__msg__PathInfo__Sequence * member =
    (my_nav_msgs__msg__PathInfo__Sequence *)(untyped_member);
  my_nav_msgs__msg__PathInfo__Sequence__fini(member);
  return my_nav_msgs__msg__PathInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_message_member_array[2] = {
  {
    "error_strings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__PathCheck_Response, error_strings),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__PathCheck_Response, info_set),  // bytes offset in struct
    NULL,  // default value
    failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__size_function__PathCheck_Response__info_set,  // size() function pointer
    failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__get_const_function__PathCheck_Response__info_set,  // get_const(index) function pointer
    failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__get_function__PathCheck_Response__info_set,  // get(index) function pointer
    failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__fetch_function__PathCheck_Response__info_set,  // fetch(index, &value) function pointer
    failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__assign_function__PathCheck_Response__info_set,  // assign(index, value) function pointer
    failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__resize_function__PathCheck_Response__info_set  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_message_members = {
  "failure_detection_msgs__srv",  // message namespace
  "PathCheck_Response",  // message name
  2,  // number of fields
  sizeof(failure_detection_msgs__srv__PathCheck_Response),
  failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_message_member_array,  // message members
  failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_message_type_support_handle = {
  0,
  &failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, PathCheck_Response)() {
  failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_nav_msgs, msg, PathInfo)();
  if (!failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_message_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &failure_detection_msgs__srv__PathCheck_Response__rosidl_typesupport_introspection_c__PathCheck_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "failure_detection_msgs/srv/detail/path_check__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers failure_detection_msgs__srv__detail__path_check__rosidl_typesupport_introspection_c__PathCheck_service_members = {
  "failure_detection_msgs__srv",  // service namespace
  "PathCheck",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // failure_detection_msgs__srv__detail__path_check__rosidl_typesupport_introspection_c__PathCheck_Request_message_type_support_handle,
  NULL  // response message
  // failure_detection_msgs__srv__detail__path_check__rosidl_typesupport_introspection_c__PathCheck_Response_message_type_support_handle
};

static rosidl_service_type_support_t failure_detection_msgs__srv__detail__path_check__rosidl_typesupport_introspection_c__PathCheck_service_type_support_handle = {
  0,
  &failure_detection_msgs__srv__detail__path_check__rosidl_typesupport_introspection_c__PathCheck_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, PathCheck_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, PathCheck_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, PathCheck)() {
  if (!failure_detection_msgs__srv__detail__path_check__rosidl_typesupport_introspection_c__PathCheck_service_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__srv__detail__path_check__rosidl_typesupport_introspection_c__PathCheck_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)failure_detection_msgs__srv__detail__path_check__rosidl_typesupport_introspection_c__PathCheck_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, PathCheck_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, PathCheck_Response)()->data;
  }

  return &failure_detection_msgs__srv__detail__path_check__rosidl_typesupport_introspection_c__PathCheck_service_type_support_handle;
}
