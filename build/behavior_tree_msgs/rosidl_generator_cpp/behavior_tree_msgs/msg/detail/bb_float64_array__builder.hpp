// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/BBFloat64Array.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_FLOAT64_ARRAY__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_FLOAT64_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/bb_float64_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_BBFloat64Array_value
{
public:
  explicit Init_BBFloat64Array_value(::behavior_tree_msgs::msg::BBFloat64Array & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::BBFloat64Array value(::behavior_tree_msgs::msg::BBFloat64Array::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BBFloat64Array msg_;
};

class Init_BBFloat64Array_key
{
public:
  Init_BBFloat64Array_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BBFloat64Array_value key(::behavior_tree_msgs::msg::BBFloat64Array::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_BBFloat64Array_value(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BBFloat64Array msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::BBFloat64Array>()
{
  return behavior_tree_msgs::msg::builder::Init_BBFloat64Array_key();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_FLOAT64_ARRAY__BUILDER_HPP_
