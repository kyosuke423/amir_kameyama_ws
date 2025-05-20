// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from observation_msgs:msg/PathEvaluation.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__BUILDER_HPP_
#define OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "observation_msgs/msg/detail/path_evaluation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace observation_msgs
{

namespace msg
{

namespace builder
{

class Init_PathEvaluation_unknown_area
{
public:
  explicit Init_PathEvaluation_unknown_area(::observation_msgs::msg::PathEvaluation & msg)
  : msg_(msg)
  {}
  ::observation_msgs::msg::PathEvaluation unknown_area(::observation_msgs::msg::PathEvaluation::_unknown_area_type arg)
  {
    msg_.unknown_area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::observation_msgs::msg::PathEvaluation msg_;
};

class Init_PathEvaluation_ave_cost
{
public:
  explicit Init_PathEvaluation_ave_cost(::observation_msgs::msg::PathEvaluation & msg)
  : msg_(msg)
  {}
  Init_PathEvaluation_unknown_area ave_cost(::observation_msgs::msg::PathEvaluation::_ave_cost_type arg)
  {
    msg_.ave_cost = std::move(arg);
    return Init_PathEvaluation_unknown_area(msg_);
  }

private:
  ::observation_msgs::msg::PathEvaluation msg_;
};

class Init_PathEvaluation_max_cost
{
public:
  explicit Init_PathEvaluation_max_cost(::observation_msgs::msg::PathEvaluation & msg)
  : msg_(msg)
  {}
  Init_PathEvaluation_ave_cost max_cost(::observation_msgs::msg::PathEvaluation::_max_cost_type arg)
  {
    msg_.max_cost = std::move(arg);
    return Init_PathEvaluation_ave_cost(msg_);
  }

private:
  ::observation_msgs::msg::PathEvaluation msg_;
};

class Init_PathEvaluation_header
{
public:
  Init_PathEvaluation_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathEvaluation_max_cost header(::observation_msgs::msg::PathEvaluation::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PathEvaluation_max_cost(msg_);
  }

private:
  ::observation_msgs::msg::PathEvaluation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::observation_msgs::msg::PathEvaluation>()
{
  return observation_msgs::msg::builder::Init_PathEvaluation_header();
}

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__BUILDER_HPP_
