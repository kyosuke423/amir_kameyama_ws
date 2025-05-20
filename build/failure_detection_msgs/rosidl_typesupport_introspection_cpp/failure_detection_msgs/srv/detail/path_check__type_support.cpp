// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from failure_detection_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "failure_detection_msgs/srv/detail/path_check__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace failure_detection_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PathCheck_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) failure_detection_msgs::srv::PathCheck_Request(_init);
}

void PathCheck_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<failure_detection_msgs::srv::PathCheck_Request *>(message_memory);
  typed_message->~PathCheck_Request();
}

size_t size_function__PathCheck_Request__paths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_nav_msgs::msg::PathWithCondition> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PathCheck_Request__paths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_nav_msgs::msg::PathWithCondition> *>(untyped_member);
  return &member[index];
}

void * get_function__PathCheck_Request__paths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_nav_msgs::msg::PathWithCondition> *>(untyped_member);
  return &member[index];
}

void fetch_function__PathCheck_Request__paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_nav_msgs::msg::PathWithCondition *>(
    get_const_function__PathCheck_Request__paths(untyped_member, index));
  auto & value = *reinterpret_cast<my_nav_msgs::msg::PathWithCondition *>(untyped_value);
  value = item;
}

void assign_function__PathCheck_Request__paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_nav_msgs::msg::PathWithCondition *>(
    get_function__PathCheck_Request__paths(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_nav_msgs::msg::PathWithCondition *>(untyped_value);
  item = value;
}

void resize_function__PathCheck_Request__paths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_nav_msgs::msg::PathWithCondition> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathCheck_Request_message_member_array[1] = {
  {
    "paths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_nav_msgs::msg::PathWithCondition>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs::srv::PathCheck_Request, paths),  // bytes offset in struct
    nullptr,  // default value
    size_function__PathCheck_Request__paths,  // size() function pointer
    get_const_function__PathCheck_Request__paths,  // get_const(index) function pointer
    get_function__PathCheck_Request__paths,  // get(index) function pointer
    fetch_function__PathCheck_Request__paths,  // fetch(index, &value) function pointer
    assign_function__PathCheck_Request__paths,  // assign(index, value) function pointer
    resize_function__PathCheck_Request__paths  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathCheck_Request_message_members = {
  "failure_detection_msgs::srv",  // message namespace
  "PathCheck_Request",  // message name
  1,  // number of fields
  sizeof(failure_detection_msgs::srv::PathCheck_Request),
  PathCheck_Request_message_member_array,  // message members
  PathCheck_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PathCheck_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathCheck_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathCheck_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace failure_detection_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<failure_detection_msgs::srv::PathCheck_Request>()
{
  return &::failure_detection_msgs::srv::rosidl_typesupport_introspection_cpp::PathCheck_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, failure_detection_msgs, srv, PathCheck_Request)() {
  return &::failure_detection_msgs::srv::rosidl_typesupport_introspection_cpp::PathCheck_Request_message_type_support_handle;
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
// #include "failure_detection_msgs/srv/detail/path_check__struct.hpp"
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

namespace failure_detection_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PathCheck_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) failure_detection_msgs::srv::PathCheck_Response(_init);
}

void PathCheck_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<failure_detection_msgs::srv::PathCheck_Response *>(message_memory);
  typed_message->~PathCheck_Response();
}

size_t size_function__PathCheck_Response__info_set(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_nav_msgs::msg::PathInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PathCheck_Response__info_set(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_nav_msgs::msg::PathInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__PathCheck_Response__info_set(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_nav_msgs::msg::PathInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__PathCheck_Response__info_set(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_nav_msgs::msg::PathInfo *>(
    get_const_function__PathCheck_Response__info_set(untyped_member, index));
  auto & value = *reinterpret_cast<my_nav_msgs::msg::PathInfo *>(untyped_value);
  value = item;
}

void assign_function__PathCheck_Response__info_set(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_nav_msgs::msg::PathInfo *>(
    get_function__PathCheck_Response__info_set(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_nav_msgs::msg::PathInfo *>(untyped_value);
  item = value;
}

void resize_function__PathCheck_Response__info_set(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_nav_msgs::msg::PathInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathCheck_Response_message_member_array[2] = {
  {
    "error_strings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs::srv::PathCheck_Response, error_strings),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "info_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_nav_msgs::msg::PathInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(failure_detection_msgs::srv::PathCheck_Response, info_set),  // bytes offset in struct
    nullptr,  // default value
    size_function__PathCheck_Response__info_set,  // size() function pointer
    get_const_function__PathCheck_Response__info_set,  // get_const(index) function pointer
    get_function__PathCheck_Response__info_set,  // get(index) function pointer
    fetch_function__PathCheck_Response__info_set,  // fetch(index, &value) function pointer
    assign_function__PathCheck_Response__info_set,  // assign(index, value) function pointer
    resize_function__PathCheck_Response__info_set  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathCheck_Response_message_members = {
  "failure_detection_msgs::srv",  // message namespace
  "PathCheck_Response",  // message name
  2,  // number of fields
  sizeof(failure_detection_msgs::srv::PathCheck_Response),
  PathCheck_Response_message_member_array,  // message members
  PathCheck_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PathCheck_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathCheck_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathCheck_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace failure_detection_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<failure_detection_msgs::srv::PathCheck_Response>()
{
  return &::failure_detection_msgs::srv::rosidl_typesupport_introspection_cpp::PathCheck_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, failure_detection_msgs, srv, PathCheck_Response)() {
  return &::failure_detection_msgs::srv::rosidl_typesupport_introspection_cpp::PathCheck_Response_message_type_support_handle;
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
// #include "failure_detection_msgs/srv/detail/path_check__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace failure_detection_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PathCheck_service_members = {
  "failure_detection_msgs::srv",  // service namespace
  "PathCheck",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<failure_detection_msgs::srv::PathCheck>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PathCheck_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathCheck_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace failure_detection_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<failure_detection_msgs::srv::PathCheck>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::failure_detection_msgs::srv::rosidl_typesupport_introspection_cpp::PathCheck_service_type_support_handle;
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
        ::failure_detection_msgs::srv::PathCheck_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::failure_detection_msgs::srv::PathCheck_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, failure_detection_msgs, srv, PathCheck)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<failure_detection_msgs::srv::PathCheck>();
}

#ifdef __cplusplus
}
#endif
