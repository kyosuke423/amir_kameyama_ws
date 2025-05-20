// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_nav_msgs/msg/detail/path_info__struct.hpp"
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

void PathInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_nav_msgs::msg::PathInfo(_init);
}

void PathInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_nav_msgs::msg::PathInfo *>(message_memory);
  typed_message->~PathInfo();
}

size_t size_function__PathInfo__remove_id_set(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PathInfo__remove_id_set(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__PathInfo__remove_id_set(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__PathInfo__remove_id_set(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__PathInfo__remove_id_set(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__PathInfo__remove_id_set(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__PathInfo__remove_id_set(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__PathInfo__remove_id_set(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathInfo_message_member_array[2] = {
  {
    "remove_id_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_nav_msgs::msg::PathInfo, remove_id_set),  // bytes offset in struct
    nullptr,  // default value
    size_function__PathInfo__remove_id_set,  // size() function pointer
    get_const_function__PathInfo__remove_id_set,  // get_const(index) function pointer
    get_function__PathInfo__remove_id_set,  // get(index) function pointer
    fetch_function__PathInfo__remove_id_set,  // fetch(index, &value) function pointer
    assign_function__PathInfo__remove_id_set,  // assign(index, value) function pointer
    resize_function__PathInfo__remove_id_set  // resize(index) function pointer
  },
  {
    "success_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_nav_msgs::msg::PathInfo, success_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathInfo_message_members = {
  "my_nav_msgs::msg",  // message namespace
  "PathInfo",  // message name
  2,  // number of fields
  sizeof(my_nav_msgs::msg::PathInfo),
  PathInfo_message_member_array,  // message members
  PathInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  PathInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathInfo_message_members,
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
get_message_type_support_handle<my_nav_msgs::msg::PathInfo>()
{
  return &::my_nav_msgs::msg::rosidl_typesupport_introspection_cpp::PathInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_nav_msgs, msg, PathInfo)() {
  return &::my_nav_msgs::msg::rosidl_typesupport_introspection_cpp::PathInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
