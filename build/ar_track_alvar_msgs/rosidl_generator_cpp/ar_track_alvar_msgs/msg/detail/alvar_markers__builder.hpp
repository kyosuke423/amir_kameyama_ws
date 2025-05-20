// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ar_track_alvar_msgs:msg/AlvarMarkers.idl
// generated code does not contain a copyright notice

#ifndef AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKERS__BUILDER_HPP_
#define AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ar_track_alvar_msgs/msg/detail/alvar_markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ar_track_alvar_msgs
{

namespace msg
{

namespace builder
{

class Init_AlvarMarkers_markers
{
public:
  explicit Init_AlvarMarkers_markers(::ar_track_alvar_msgs::msg::AlvarMarkers & msg)
  : msg_(msg)
  {}
  ::ar_track_alvar_msgs::msg::AlvarMarkers markers(::ar_track_alvar_msgs::msg::AlvarMarkers::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ar_track_alvar_msgs::msg::AlvarMarkers msg_;
};

class Init_AlvarMarkers_header
{
public:
  Init_AlvarMarkers_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlvarMarkers_markers header(::ar_track_alvar_msgs::msg::AlvarMarkers::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AlvarMarkers_markers(msg_);
  }

private:
  ::ar_track_alvar_msgs::msg::AlvarMarkers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ar_track_alvar_msgs::msg::AlvarMarkers>()
{
  return ar_track_alvar_msgs::msg::builder::Init_AlvarMarkers_header();
}

}  // namespace ar_track_alvar_msgs

#endif  // AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKERS__BUILDER_HPP_
