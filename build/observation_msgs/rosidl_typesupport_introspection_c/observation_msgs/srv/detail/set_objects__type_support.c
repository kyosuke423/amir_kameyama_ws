// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from observation_msgs:srv/SetObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "observation_msgs/srv/detail/set_objects__rosidl_typesupport_introspection_c.h"
#include "observation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "observation_msgs/srv/detail/set_objects__functions.h"
#include "observation_msgs/srv/detail/set_objects__struct.h"


// Include directives for member types
// Member `objects`
#include "observation_msgs/msg/object.h"
// Member `objects`
#include "observation_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  observation_msgs__srv__SetObjects_Request__init(message_memory);
}

void observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_fini_function(void * message_memory)
{
  observation_msgs__srv__SetObjects_Request__fini(message_memory);
}

size_t observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__size_function__SetObjects_Request__objects(
  const void * untyped_member)
{
  const observation_msgs__msg__Object__Sequence * member =
    (const observation_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__get_const_function__SetObjects_Request__objects(
  const void * untyped_member, size_t index)
{
  const observation_msgs__msg__Object__Sequence * member =
    (const observation_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__get_function__SetObjects_Request__objects(
  void * untyped_member, size_t index)
{
  observation_msgs__msg__Object__Sequence * member =
    (observation_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__fetch_function__SetObjects_Request__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const observation_msgs__msg__Object * item =
    ((const observation_msgs__msg__Object *)
    observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__get_const_function__SetObjects_Request__objects(untyped_member, index));
  observation_msgs__msg__Object * value =
    (observation_msgs__msg__Object *)(untyped_value);
  *value = *item;
}

void observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__assign_function__SetObjects_Request__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  observation_msgs__msg__Object * item =
    ((observation_msgs__msg__Object *)
    observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__get_function__SetObjects_Request__objects(untyped_member, index));
  const observation_msgs__msg__Object * value =
    (const observation_msgs__msg__Object *)(untyped_value);
  *item = *value;
}

bool observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__resize_function__SetObjects_Request__objects(
  void * untyped_member, size_t size)
{
  observation_msgs__msg__Object__Sequence * member =
    (observation_msgs__msg__Object__Sequence *)(untyped_member);
  observation_msgs__msg__Object__Sequence__fini(member);
  return observation_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_message_member_array[1] = {
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observation_msgs__srv__SetObjects_Request, objects),  // bytes offset in struct
    NULL,  // default value
    observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__size_function__SetObjects_Request__objects,  // size() function pointer
    observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__get_const_function__SetObjects_Request__objects,  // get_const(index) function pointer
    observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__get_function__SetObjects_Request__objects,  // get(index) function pointer
    observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__fetch_function__SetObjects_Request__objects,  // fetch(index, &value) function pointer
    observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__assign_function__SetObjects_Request__objects,  // assign(index, value) function pointer
    observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__resize_function__SetObjects_Request__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_message_members = {
  "observation_msgs__srv",  // message namespace
  "SetObjects_Request",  // message name
  1,  // number of fields
  sizeof(observation_msgs__srv__SetObjects_Request),
  observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_message_member_array,  // message members
  observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_message_type_support_handle = {
  0,
  &observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observation_msgs, srv, SetObjects_Request)() {
  observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observation_msgs, msg, Object)();
  if (!observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_message_type_support_handle.typesupport_identifier) {
    observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &observation_msgs__srv__SetObjects_Request__rosidl_typesupport_introspection_c__SetObjects_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "observation_msgs/srv/detail/set_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "observation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "observation_msgs/srv/detail/set_objects__functions.h"
// already included above
// #include "observation_msgs/srv/detail/set_objects__struct.h"


// Include directives for member types
// Member `error_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  observation_msgs__srv__SetObjects_Response__init(message_memory);
}

void observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_fini_function(void * message_memory)
{
  observation_msgs__srv__SetObjects_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_message_member_array[1] = {
  {
    "error_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observation_msgs__srv__SetObjects_Response, error_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_message_members = {
  "observation_msgs__srv",  // message namespace
  "SetObjects_Response",  // message name
  1,  // number of fields
  sizeof(observation_msgs__srv__SetObjects_Response),
  observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_message_member_array,  // message members
  observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_message_type_support_handle = {
  0,
  &observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observation_msgs, srv, SetObjects_Response)() {
  if (!observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_message_type_support_handle.typesupport_identifier) {
    observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &observation_msgs__srv__SetObjects_Response__rosidl_typesupport_introspection_c__SetObjects_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "observation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "observation_msgs/srv/detail/set_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers observation_msgs__srv__detail__set_objects__rosidl_typesupport_introspection_c__SetObjects_service_members = {
  "observation_msgs__srv",  // service namespace
  "SetObjects",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // observation_msgs__srv__detail__set_objects__rosidl_typesupport_introspection_c__SetObjects_Request_message_type_support_handle,
  NULL  // response message
  // observation_msgs__srv__detail__set_objects__rosidl_typesupport_introspection_c__SetObjects_Response_message_type_support_handle
};

static rosidl_service_type_support_t observation_msgs__srv__detail__set_objects__rosidl_typesupport_introspection_c__SetObjects_service_type_support_handle = {
  0,
  &observation_msgs__srv__detail__set_objects__rosidl_typesupport_introspection_c__SetObjects_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observation_msgs, srv, SetObjects_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observation_msgs, srv, SetObjects_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observation_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observation_msgs, srv, SetObjects)() {
  if (!observation_msgs__srv__detail__set_objects__rosidl_typesupport_introspection_c__SetObjects_service_type_support_handle.typesupport_identifier) {
    observation_msgs__srv__detail__set_objects__rosidl_typesupport_introspection_c__SetObjects_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)observation_msgs__srv__detail__set_objects__rosidl_typesupport_introspection_c__SetObjects_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observation_msgs, srv, SetObjects_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observation_msgs, srv, SetObjects_Response)()->data;
  }

  return &observation_msgs__srv__detail__set_objects__rosidl_typesupport_introspection_c__SetObjects_service_type_support_handle;
}
