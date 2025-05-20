// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:srv/GetBlackBoard.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/srv/detail/get_black_board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBlackBoard_Request_float_array_names
{
public:
  explicit Init_GetBlackBoard_Request_float_array_names(::behavior_tree_msgs::srv::GetBlackBoard_Request & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::srv::GetBlackBoard_Request float_array_names(::behavior_tree_msgs::srv::GetBlackBoard_Request::_float_array_names_type arg)
  {
    msg_.float_array_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBlackBoard_Request msg_;
};

class Init_GetBlackBoard_Request_path_names
{
public:
  explicit Init_GetBlackBoard_Request_path_names(::behavior_tree_msgs::srv::GetBlackBoard_Request & msg)
  : msg_(msg)
  {}
  Init_GetBlackBoard_Request_float_array_names path_names(::behavior_tree_msgs::srv::GetBlackBoard_Request::_path_names_type arg)
  {
    msg_.path_names = std::move(arg);
    return Init_GetBlackBoard_Request_float_array_names(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBlackBoard_Request msg_;
};

class Init_GetBlackBoard_Request_pose_names
{
public:
  Init_GetBlackBoard_Request_pose_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBlackBoard_Request_path_names pose_names(::behavior_tree_msgs::srv::GetBlackBoard_Request::_pose_names_type arg)
  {
    msg_.pose_names = std::move(arg);
    return Init_GetBlackBoard_Request_path_names(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBlackBoard_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::GetBlackBoard_Request>()
{
  return behavior_tree_msgs::srv::builder::Init_GetBlackBoard_Request_pose_names();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBlackBoard_Response_float_array_set
{
public:
  explicit Init_GetBlackBoard_Response_float_array_set(::behavior_tree_msgs::srv::GetBlackBoard_Response & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::srv::GetBlackBoard_Response float_array_set(::behavior_tree_msgs::srv::GetBlackBoard_Response::_float_array_set_type arg)
  {
    msg_.float_array_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBlackBoard_Response msg_;
};

class Init_GetBlackBoard_Response_paths
{
public:
  explicit Init_GetBlackBoard_Response_paths(::behavior_tree_msgs::srv::GetBlackBoard_Response & msg)
  : msg_(msg)
  {}
  Init_GetBlackBoard_Response_float_array_set paths(::behavior_tree_msgs::srv::GetBlackBoard_Response::_paths_type arg)
  {
    msg_.paths = std::move(arg);
    return Init_GetBlackBoard_Response_float_array_set(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBlackBoard_Response msg_;
};

class Init_GetBlackBoard_Response_poses
{
public:
  Init_GetBlackBoard_Response_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBlackBoard_Response_paths poses(::behavior_tree_msgs::srv::GetBlackBoard_Response::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_GetBlackBoard_Response_paths(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBlackBoard_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::GetBlackBoard_Response>()
{
  return behavior_tree_msgs::srv::builder::Init_GetBlackBoard_Response_poses();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__BUILDER_HPP_
