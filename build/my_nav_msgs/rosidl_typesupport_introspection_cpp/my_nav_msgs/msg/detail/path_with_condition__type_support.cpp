// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_nav_msgs:msg/PathWithCondition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_nav_msgs/msg/detail/path_with_condition__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_nav_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PathWithCondition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_nav_msgs::msg::PathWithCondition(_init);
}

void PathWithCondition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_nav_msgs::msg::PathWithCondition *>(message_memory);
  typed_message->~PathWithCondition();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathWithCondition_message_member_array[2] = {
  {
    "path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_msgs::msg::Path>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_nav_msgs::msg::PathWithCondition, path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_nav_msgs::msg::PathInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_nav_msgs::msg::PathWithCondition, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathWithCondition_message_members = {
  "my_nav_msgs::msg",  // message namespace
  "PathWithCondition",  // message name
  2,  // number of fields
  sizeof(my_nav_msgs::msg::PathWithCondition),
  PathWithCondition_message_member_array,  // message members
  PathWithCondition_init_function,  // function to initialize message memory (memory has to be allocated)
  PathWithCondition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathWithCondition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathWithCondition_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_nav_msgs::msg::PathWithCondition>()
{
  return &::my_nav_msgs::msg::rosidl_typesupport_introspection_cpp::PathWithCondition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_nav_msgs, msg, PathWithCondition)() {
  return &::my_nav_msgs::msg::rosidl_typesupport_introspection_cpp::PathWithCondition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
