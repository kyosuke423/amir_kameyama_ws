// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ar_track_alvar_msgs:msg/AlvarMarker.idl
// generated code does not contain a copyright notice

#ifndef AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKER__BUILDER_HPP_
#define AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ar_track_alvar_msgs/msg/detail/alvar_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ar_track_alvar_msgs
{

namespace msg
{

namespace builder
{

class Init_AlvarMarker_pose
{
public:
  explicit Init_AlvarMarker_pose(::ar_track_alvar_msgs::msg::AlvarMarker & msg)
  : msg_(msg)
  {}
  ::ar_track_alvar_msgs::msg::AlvarMarker pose(::ar_track_alvar_msgs::msg::AlvarMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ar_track_alvar_msgs::msg::AlvarMarker msg_;
};

class Init_AlvarMarker_confidence
{
public:
  explicit Init_AlvarMarker_confidence(::ar_track_alvar_msgs::msg::AlvarMarker & msg)
  : msg_(msg)
  {}
  Init_AlvarMarker_pose confidence(::ar_track_alvar_msgs::msg::AlvarMarker::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_AlvarMarker_pose(msg_);
  }

private:
  ::ar_track_alvar_msgs::msg::AlvarMarker msg_;
};

class Init_AlvarMarker_id
{
public:
  explicit Init_AlvarMarker_id(::ar_track_alvar_msgs::msg::AlvarMarker & msg)
  : msg_(msg)
  {}
  Init_AlvarMarker_confidence id(::ar_track_alvar_msgs::msg::AlvarMarker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AlvarMarker_confidence(msg_);
  }

private:
  ::ar_track_alvar_msgs::msg::AlvarMarker msg_;
};

class Init_AlvarMarker_header
{
public:
  Init_AlvarMarker_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlvarMarker_id header(::ar_track_alvar_msgs::msg::AlvarMarker::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AlvarMarker_id(msg_);
  }

private:
  ::ar_track_alvar_msgs::msg::AlvarMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ar_track_alvar_msgs::msg::AlvarMarker>()
{
  return ar_track_alvar_msgs::msg::builder::Init_AlvarMarker_header();
}

}  // namespace ar_track_alvar_msgs

#endif  // AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKER__BUILDER_HPP_
