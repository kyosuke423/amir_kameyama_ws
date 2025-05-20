// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from observation_msgs:srv/GetObjects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "observation_msgs/srv/detail/get_objects__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace observation_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetObjects_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) observation_msgs::srv::GetObjects_Request(_init);
}

void GetObjects_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<observation_msgs::srv::GetObjects_Request *>(message_memory);
  typed_message->~GetObjects_Request();
}

size_t size_function__GetObjects_Request__id_set(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetObjects_Request__id_set(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetObjects_Request__id_set(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetObjects_Request__id_set(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetObjects_Request__id_set(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetObjects_Request__id_set(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetObjects_Request__id_set(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetObjects_Request__id_set(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetObjects_Request_message_member_array[2] = {
  {
    "id_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observation_msgs::srv::GetObjects_Request, id_set),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetObjects_Request__id_set,  // size() function pointer
    get_const_function__GetObjects_Request__id_set,  // get_const(index) function pointer
    get_function__GetObjects_Request__id_set,  // get(index) function pointer
    fetch_function__GetObjects_Request__id_set,  // fetch(index, &value) function pointer
    assign_function__GetObjects_Request__id_set,  // assign(index, value) function pointer
    resize_function__GetObjects_Request__id_set  // resize(index) function pointer
  },
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observation_msgs::srv::GetObjects_Request, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetObjects_Request_message_members = {
  "observation_msgs::srv",  // message namespace
  "GetObjects_Request",  // message name
  2,  // number of fields
  sizeof(observation_msgs::srv::GetObjects_Request),
  GetObjects_Request_message_member_array,  // message members
  GetObjects_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetObjects_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetObjects_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetObjects_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace observation_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<observation_msgs::srv::GetObjects_Request>()
{
  return &::observation_msgs::srv::rosidl_typesupport_introspection_cpp::GetObjects_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, observation_msgs, srv, GetObjects_Request)() {
  return &::observation_msgs::srv::rosidl_typesupport_introspection_cpp::GetObjects_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "observation_msgs/srv/detail/get_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace observation_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetObjects_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) observation_msgs::srv::GetObjects_Response(_init);
}

void GetObjects_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<observation_msgs::srv::GetObjects_Response *>(message_memory);
  typed_message->~GetObjects_Response();
}

size_t size_function__GetObjects_Response__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<observation_msgs::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetObjects_Response__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<observation_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__GetObjects_Response__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<observation_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetObjects_Response__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const observation_msgs::msg::Object *>(
    get_const_function__GetObjects_Response__objects(untyped_member, index));
  auto & value = *reinterpret_cast<observation_msgs::msg::Object *>(untyped_value);
  value = item;
}

void assign_function__GetObjects_Response__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<observation_msgs::msg::Object *>(
    get_function__GetObjects_Response__objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const observation_msgs::msg::Object *>(untyped_value);
  item = value;
}

void resize_function__GetObjects_Response__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<observation_msgs::msg::Object> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetObjects_Response_message_member_array[1] = {
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<observation_msgs::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observation_msgs::srv::GetObjects_Response, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetObjects_Response__objects,  // size() function pointer
    get_const_function__GetObjects_Response__objects,  // get_const(index) function pointer
    get_function__GetObjects_Response__objects,  // get(index) function pointer
    fetch_function__GetObjects_Response__objects,  // fetch(index, &value) function pointer
    assign_function__GetObjects_Response__objects,  // assign(index, value) function pointer
    resize_function__GetObjects_Response__objects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetObjects_Response_message_members = {
  "observation_msgs::srv",  // message namespace
  "GetObjects_Response",  // message name
  1,  // number of fields
  sizeof(observation_msgs::srv::GetObjects_Response),
  GetObjects_Response_message_member_array,  // message members
  GetObjects_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetObjects_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetObjects_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetObjects_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace observation_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<observation_msgs::srv::GetObjects_Response>()
{
  return &::observation_msgs::srv::rosidl_typesupport_introspection_cpp::GetObjects_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, observation_msgs, srv, GetObjects_Response)() {
  return &::observation_msgs::srv::rosidl_typesupport_introspection_cpp::GetObjects_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "observation_msgs/srv/detail/get_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace observation_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetObjects_service_members = {
  "observation_msgs::srv",  // service namespace
  "GetObjects",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<observation_msgs::srv::GetObjects>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetObjects_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetObjects_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace observation_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<observation_msgs::srv::GetObjects>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::observation_msgs::srv::rosidl_typesupport_introspection_cpp::GetObjects_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::observation_msgs::srv::GetObjects_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::observation_msgs::srv::GetObjects_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, observation_msgs, srv, GetObjects)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<observation_msgs::srv::GetObjects>();
}

#ifdef __cplusplus
}
#endif
