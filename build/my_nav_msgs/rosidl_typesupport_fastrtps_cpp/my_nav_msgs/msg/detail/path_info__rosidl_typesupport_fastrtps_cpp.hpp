// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_nav_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "my_nav_msgs/msg/detail/path_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace my_nav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_nav_msgs
cdr_serialize(
  const my_nav_msgs::msg::PathInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_nav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_nav_msgs::msg::PathInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_nav_msgs
get_serialized_size(
  const my_nav_msgs::msg::PathInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_nav_msgs
max_serialized_size_PathInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_nav_msgs, msg, PathInfo)();

#ifdef __cplusplus
}
#endif

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
