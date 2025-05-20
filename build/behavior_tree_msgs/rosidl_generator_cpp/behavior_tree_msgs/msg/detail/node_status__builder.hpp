// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/NodeStatus.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__NODE_STATUS__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__NODE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/node_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeStatus_node_type
{
public:
  explicit Init_NodeStatus_node_type(::behavior_tree_msgs::msg::NodeStatus & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::NodeStatus node_type(::behavior_tree_msgs::msg::NodeStatus::_node_type_type arg)
  {
    msg_.node_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::NodeStatus msg_;
};

class Init_NodeStatus_status
{
public:
  explicit Init_NodeStatus_status(::behavior_tree_msgs::msg::NodeStatus & msg)
  : msg_(msg)
  {}
  Init_NodeStatus_node_type status(::behavior_tree_msgs::msg::NodeStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NodeStatus_node_type(msg_);
  }

private:
  ::behavior_tree_msgs::msg::NodeStatus msg_;
};

class Init_NodeStatus_node_id
{
public:
  explicit Init_NodeStatus_node_id(::behavior_tree_msgs::msg::NodeStatus & msg)
  : msg_(msg)
  {}
  Init_NodeStatus_status node_id(::behavior_tree_msgs::msg::NodeStatus::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_NodeStatus_status(msg_);
  }

private:
  ::behavior_tree_msgs::msg::NodeStatus msg_;
};

class Init_NodeStatus_node_name
{
public:
  Init_NodeStatus_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeStatus_node_id node_name(::behavior_tree_msgs::msg::NodeStatus::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_NodeStatus_node_id(msg_);
  }

private:
  ::behavior_tree_msgs::msg::NodeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::NodeStatus>()
{
  return behavior_tree_msgs::msg::builder::Init_NodeStatus_node_name();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__NODE_STATUS__BUILDER_HPP_
