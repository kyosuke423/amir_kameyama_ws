// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:srv/SetBlackBoard.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/srv/detail/set_black_board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_SetBlackBoard_Request_bb_message
{
public:
  Init_SetBlackBoard_Request_bb_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::srv::SetBlackBoard_Request bb_message(::behavior_tree_msgs::srv::SetBlackBoard_Request::_bb_message_type arg)
  {
    msg_.bb_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::SetBlackBoard_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::SetBlackBoard_Request>()
{
  return behavior_tree_msgs::srv::builder::Init_SetBlackBoard_Request_bb_message();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_SetBlackBoard_Response_behavior_tree
{
public:
  Init_SetBlackBoard_Response_behavior_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::srv::SetBlackBoard_Response behavior_tree(::behavior_tree_msgs::srv::SetBlackBoard_Response::_behavior_tree_type arg)
  {
    msg_.behavior_tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::SetBlackBoard_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::SetBlackBoard_Response>()
{
  return behavior_tree_msgs::srv::builder::Init_SetBlackBoard_Response_behavior_tree();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__BUILDER_HPP_
