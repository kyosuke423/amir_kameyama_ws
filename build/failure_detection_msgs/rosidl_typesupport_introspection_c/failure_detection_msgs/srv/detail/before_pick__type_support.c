// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from failure_detection_msgs:srv/BeforePick.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "failure_detection_msgs/srv/detail/before_pick__rosidl_typesupport_introspection_c.h"
#include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "failure_detection_msgs/srv/detail/before_pick__functions.h"
#include "failure_detection_msgs/srv/detail/before_pick__struct.h"


// Include directives for member types
// Member `command`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  failure_detection_msgs__srv__BeforePick_Request__init(message_memory);
}

void failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_fini_function(void * message_memory)
{
  failure_detection_msgs__srv__BeforePick_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_message_member_array[4] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__BeforePick_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__BeforePick_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__BeforePick_Request, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__BeforePick_Request, stand),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_message_members = {
  "failure_detection_msgs__srv",  // message namespace
  "BeforePick_Request",  // message name
  4,  // number of fields
  sizeof(failure_detection_msgs__srv__BeforePick_Request),
  failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_message_member_array,  // message members
  failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_message_type_support_handle = {
  0,
  &failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, BeforePick_Request)() {
  failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_message_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &failure_detection_msgs__srv__BeforePick_Request__rosidl_typesupport_introspection_c__BeforePick_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "failure_detection_msgs/srv/detail/before_pick__rosidl_typesupport_introspection_c.h"
// already included above
// #include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "failure_detection_msgs/srv/detail/before_pick__functions.h"
// already included above
// #include "failure_detection_msgs/srv/detail/before_pick__struct.h"


// Include directives for member types
// Member `command`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  failure_detection_msgs__srv__BeforePick_Response__init(message_memory);
}

void failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_fini_function(void * message_memory)
{
  failure_detection_msgs__srv__BeforePick_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs__srv__BeforePick_Response, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_message_members = {
  "failure_detection_msgs__srv",  // message namespace
  "BeforePick_Response",  // message name
  1,  // number of fields
  sizeof(failure_detection_msgs__srv__BeforePick_Response),
  failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_message_member_array,  // message members
  failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_message_type_support_handle = {
  0,
  &failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, BeforePick_Response)() {
  if (!failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_message_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &failure_detection_msgs__srv__BeforePick_Response__rosidl_typesupport_introspection_c__BeforePick_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "failure_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "failure_detection_msgs/srv/detail/before_pick__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers failure_detection_msgs__srv__detail__before_pick__rosidl_typesupport_introspection_c__BeforePick_service_members = {
  "failure_detection_msgs__srv",  // service namespace
  "BeforePick",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // failure_detection_msgs__srv__detail__before_pick__rosidl_typesupport_introspection_c__BeforePick_Request_message_type_support_handle,
  NULL  // response message
  // failure_detection_msgs__srv__detail__before_pick__rosidl_typesupport_introspection_c__BeforePick_Response_message_type_support_handle
};

static rosidl_service_type_support_t failure_detection_msgs__srv__detail__before_pick__rosidl_typesupport_introspection_c__BeforePick_service_type_support_handle = {
  0,
  &failure_detection_msgs__srv__detail__before_pick__rosidl_typesupport_introspection_c__BeforePick_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, BeforePick_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, BeforePick_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_failure_detection_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, BeforePick)() {
  if (!failure_detection_msgs__srv__detail__before_pick__rosidl_typesupport_introspection_c__BeforePick_service_type_support_handle.typesupport_identifier) {
    failure_detection_msgs__srv__detail__before_pick__rosidl_typesupport_introspection_c__BeforePick_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)failure_detection_msgs__srv__detail__before_pick__rosidl_typesupport_introspection_c__BeforePick_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, BeforePick_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, failure_detection_msgs, srv, BeforePick_Response)()->data;
  }

  return &failure_detection_msgs__srv__detail__before_pick__rosidl_typesupport_introspection_c__BeforePick_service_type_support_handle;
}
