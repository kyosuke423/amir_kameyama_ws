// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_nav_msgs:srv/SetObjCost.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__BUILDER_HPP_
#define MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_nav_msgs/srv/detail/set_obj_cost__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_SetObjCost_Request_partial_update
{
public:
  explicit Init_SetObjCost_Request_partial_update(::my_nav_msgs::srv::SetObjCost_Request & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::srv::SetObjCost_Request partial_update(::my_nav_msgs::srv::SetObjCost_Request::_partial_update_type arg)
  {
    msg_.partial_update = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::srv::SetObjCost_Request msg_;
};

class Init_SetObjCost_Request_markers
{
public:
  Init_SetObjCost_Request_markers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetObjCost_Request_partial_update markers(::my_nav_msgs::srv::SetObjCost_Request::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return Init_SetObjCost_Request_partial_update(msg_);
  }

private:
  ::my_nav_msgs::srv::SetObjCost_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::srv::SetObjCost_Request>()
{
  return my_nav_msgs::srv::builder::Init_SetObjCost_Request_markers();
}

}  // namespace my_nav_msgs


namespace my_nav_msgs
{

namespace srv
{

namespace builder
{

class Init_SetObjCost_Response_set_markers
{
public:
  explicit Init_SetObjCost_Response_set_markers(::my_nav_msgs::srv::SetObjCost_Response & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::srv::SetObjCost_Response set_markers(::my_nav_msgs::srv::SetObjCost_Response::_set_markers_type arg)
  {
    msg_.set_markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::srv::SetObjCost_Response msg_;
};

class Init_SetObjCost_Response_error_string
{
public:
  Init_SetObjCost_Response_error_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetObjCost_Response_set_markers error_string(::my_nav_msgs::srv::SetObjCost_Response::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return Init_SetObjCost_Response_set_markers(msg_);
  }

private:
  ::my_nav_msgs::srv::SetObjCost_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::srv::SetObjCost_Response>()
{
  return my_nav_msgs::srv::builder::Init_SetObjCost_Response_error_string();
}

}  // namespace my_nav_msgs

#endif  // MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__BUILDER_HPP_
