// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from failure_detection_msgs:srv/AfterPick.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "failure_detection_msgs/srv/detail/after_pick__rosidl_typesupport_introspection_c.h"
#include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "failure_detection_msgs/srv/detail/after_pick__functions.h"
#include "failure_detection_msgs/srv/detail/after_pick__struct.h"


// Include directives for member types
// Member `bt_node_name`
// Member `error_string`
#include "rosidl_runtime_c/string_functions.h"
// Member `grasped_object`
#include "moveit_msgs/msg/attached_collision_object.h"
// Member `grasped_object`
#include "moveit_msgs/msg/detail/attached_collision_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  failure_detection_msgs__srv__AfterPick_Request__init(message_memory);
}

void failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_fini_function(void * message_memory)
{
  failure_detection_msgs__srv__AfterPick_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_message_member_array[3] = {
  {
    "bt_node_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__AfterPick_Request, bt_node_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__AfterPick_Request, error_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasped_object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__AfterPick_Request, grasped_object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_message_members = {
  "failure_detection_msgs__srv",  // message namespace
  "AfterPick_Request",  // message name
  3,  // number of fields
  sizeof(failure_detection_msgs__srv__AfterPick_Request),
  failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_message_member_array,  // message members
  failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_message_type_support_handle = {
  0,
  &failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, AfterPick_Request)() {
  failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AttachedCollisionObject)();
  if (!failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_message_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &failure_detection_msgs__srv__AfterPick_Request__rosidl_typesupport_introspection_c__AfterPick_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "failure_detection_msgs/srv/detail/after_pick__rosidl_typesupport_introspection_c.h"
// already included above
// #include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "failure_detection_msgs/srv/detail/after_pick__functions.h"
// already included above
// #include "failure_detection_msgs/srv/detail/after_pick__struct.h"


// Include directives for member types
// Member `command`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  failure_detection_msgs__srv__AfterPick_Response__init(message_memory);
}

void failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_fini_function(void * message_memory)
{
  failure_detection_msgs__srv__AfterPick_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__AfterPick_Response, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_message_members = {
  "failure_detection_msgs__srv",  // message namespace
  "AfterPick_Response",  // message name
  1,  // number of fields
  sizeof(failure_detection_msgs__srv__AfterPick_Response),
  failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_message_member_array,  // message members
  failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_message_type_support_handle = {
  0,
  &failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, AfterPick_Response)() {
  if (!failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_message_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &failure_detection_msgs__srv__AfterPick_Response__rosidl_typesupport_introspection_c__AfterPick_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "failure_detection_msgs/srv/detail/after_pick__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers failure_detection_msgs__srv__detail__after_pick__rosidl_typesupport_introspection_c__AfterPick_service_members = {
  "failure_detection_msgs__srv",  // service namespace
  "AfterPick",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // failure_detection_msgs__srv__detail__after_pick__rosidl_typesupport_introspection_c__AfterPick_Request_message_type_support_handle,
  NULL  // response message
  // failure_detection_msgs__srv__detail__after_pick__rosidl_typesupport_introspection_c__AfterPick_Response_message_type_support_handle
};

static rosidl_service_type_support_t failure_detection_msgs__srv__detail__after_pick__rosidl_typesupport_introspection_c__AfterPick_service_type_support_handle = {
  0,
  &failure_detection_msgs__srv__detail__after_pick__rosidl_typesupport_introspection_c__AfterPick_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, AfterPick_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, AfterPick_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, AfterPick)() {
  if (!failure_detection_msgs__srv__detail__after_pick__rosidl_typesupport_introspection_c__AfterPick_service_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__srv__detail__after_pick__rosidl_typesupport_introspection_c__AfterPick_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)failure_detection_msgs__srv__detail__after_pick__rosidl_typesupport_introspection_c__AfterPick_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, AfterPick_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, AfterPick_Response)()->data;
  }

  return &failure_detection_msgs__srv__detail__after_pick__rosidl_typesupport_introspection_c__AfterPick_service_type_support_handle;
}
