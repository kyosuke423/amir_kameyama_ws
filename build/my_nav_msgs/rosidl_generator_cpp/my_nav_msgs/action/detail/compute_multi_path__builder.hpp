// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_nav_msgs:action/ComputeMultiPath.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__BUILDER_HPP_
#define MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_nav_msgs/action/detail/compute_multi_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_nav_msgs
{

namespace action
{

namespace builder
{

class Init_ComputeMultiPath_Goal_use_start
{
public:
  explicit Init_ComputeMultiPath_Goal_use_start(::my_nav_msgs::action::ComputeMultiPath_Goal & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::action::ComputeMultiPath_Goal use_start(::my_nav_msgs::action::ComputeMultiPath_Goal::_use_start_type arg)
  {
    msg_.use_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_Goal msg_;
};

class Init_ComputeMultiPath_Goal_planner_id
{
public:
  explicit Init_ComputeMultiPath_Goal_planner_id(::my_nav_msgs::action::ComputeMultiPath_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputeMultiPath_Goal_use_start planner_id(::my_nav_msgs::action::ComputeMultiPath_Goal::_planner_id_type arg)
  {
    msg_.planner_id = std::move(arg);
    return Init_ComputeMultiPath_Goal_use_start(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_Goal msg_;
};

class Init_ComputeMultiPath_Goal_start
{
public:
  explicit Init_ComputeMultiPath_Goal_start(::my_nav_msgs::action::ComputeMultiPath_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputeMultiPath_Goal_planner_id start(::my_nav_msgs::action::ComputeMultiPath_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_ComputeMultiPath_Goal_planner_id(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_Goal msg_;
};

class Init_ComputeMultiPath_Goal_goal
{
public:
  Init_ComputeMultiPath_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeMultiPath_Goal_start goal(::my_nav_msgs::action::ComputeMultiPath_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_ComputeMultiPath_Goal_start(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::action::ComputeMultiPath_Goal>()
{
  return my_nav_msgs::action::builder::Init_ComputeMultiPath_Goal_goal();
}

}  // namespace my_nav_msgs


namespace my_nav_msgs
{

namespace action
{

namespace builder
{

class Init_ComputeMultiPath_Result_planning_time
{
public:
  explicit Init_ComputeMultiPath_Result_planning_time(::my_nav_msgs::action::ComputeMultiPath_Result & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::action::ComputeMultiPath_Result planning_time(::my_nav_msgs::action::ComputeMultiPath_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_Result msg_;
};

class Init_ComputeMultiPath_Result_multi_path
{
public:
  Init_ComputeMultiPath_Result_multi_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeMultiPath_Result_planning_time multi_path(::my_nav_msgs::action::ComputeMultiPath_Result::_multi_path_type arg)
  {
    msg_.multi_path = std::move(arg);
    return Init_ComputeMultiPath_Result_planning_time(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::action::ComputeMultiPath_Result>()
{
  return my_nav_msgs::action::builder::Init_ComputeMultiPath_Result_multi_path();
}

}  // namespace my_nav_msgs


namespace my_nav_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::action::ComputeMultiPath_Feedback>()
{
  return ::my_nav_msgs::action::ComputeMultiPath_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_nav_msgs


namespace my_nav_msgs
{

namespace action
{

namespace builder
{

class Init_ComputeMultiPath_SendGoal_Request_goal
{
public:
  explicit Init_ComputeMultiPath_SendGoal_Request_goal(::my_nav_msgs::action::ComputeMultiPath_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::action::ComputeMultiPath_SendGoal_Request goal(::my_nav_msgs::action::ComputeMultiPath_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_SendGoal_Request msg_;
};

class Init_ComputeMultiPath_SendGoal_Request_goal_id
{
public:
  Init_ComputeMultiPath_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeMultiPath_SendGoal_Request_goal goal_id(::my_nav_msgs::action::ComputeMultiPath_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputeMultiPath_SendGoal_Request_goal(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::action::ComputeMultiPath_SendGoal_Request>()
{
  return my_nav_msgs::action::builder::Init_ComputeMultiPath_SendGoal_Request_goal_id();
}

}  // namespace my_nav_msgs


namespace my_nav_msgs
{

namespace action
{

namespace builder
{

class Init_ComputeMultiPath_SendGoal_Response_stamp
{
public:
  explicit Init_ComputeMultiPath_SendGoal_Response_stamp(::my_nav_msgs::action::ComputeMultiPath_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::action::ComputeMultiPath_SendGoal_Response stamp(::my_nav_msgs::action::ComputeMultiPath_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_SendGoal_Response msg_;
};

class Init_ComputeMultiPath_SendGoal_Response_accepted
{
public:
  Init_ComputeMultiPath_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeMultiPath_SendGoal_Response_stamp accepted(::my_nav_msgs::action::ComputeMultiPath_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ComputeMultiPath_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::action::ComputeMultiPath_SendGoal_Response>()
{
  return my_nav_msgs::action::builder::Init_ComputeMultiPath_SendGoal_Response_accepted();
}

}  // namespace my_nav_msgs


namespace my_nav_msgs
{

namespace action
{

namespace builder
{

class Init_ComputeMultiPath_GetResult_Request_goal_id
{
public:
  Init_ComputeMultiPath_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_nav_msgs::action::ComputeMultiPath_GetResult_Request goal_id(::my_nav_msgs::action::ComputeMultiPath_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::action::ComputeMultiPath_GetResult_Request>()
{
  return my_nav_msgs::action::builder::Init_ComputeMultiPath_GetResult_Request_goal_id();
}

}  // namespace my_nav_msgs


namespace my_nav_msgs
{

namespace action
{

namespace builder
{

class Init_ComputeMultiPath_GetResult_Response_result
{
public:
  explicit Init_ComputeMultiPath_GetResult_Response_result(::my_nav_msgs::action::ComputeMultiPath_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::action::ComputeMultiPath_GetResult_Response result(::my_nav_msgs::action::ComputeMultiPath_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_GetResult_Response msg_;
};

class Init_ComputeMultiPath_GetResult_Response_status
{
public:
  Init_ComputeMultiPath_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeMultiPath_GetResult_Response_result status(::my_nav_msgs::action::ComputeMultiPath_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComputeMultiPath_GetResult_Response_result(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::action::ComputeMultiPath_GetResult_Response>()
{
  return my_nav_msgs::action::builder::Init_ComputeMultiPath_GetResult_Response_status();
}

}  // namespace my_nav_msgs


namespace my_nav_msgs
{

namespace action
{

namespace builder
{

class Init_ComputeMultiPath_FeedbackMessage_feedback
{
public:
  explicit Init_ComputeMultiPath_FeedbackMessage_feedback(::my_nav_msgs::action::ComputeMultiPath_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::action::ComputeMultiPath_FeedbackMessage feedback(::my_nav_msgs::action::ComputeMultiPath_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_FeedbackMessage msg_;
};

class Init_ComputeMultiPath_FeedbackMessage_goal_id
{
public:
  Init_ComputeMultiPath_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeMultiPath_FeedbackMessage_feedback goal_id(::my_nav_msgs::action::ComputeMultiPath_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputeMultiPath_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_nav_msgs::action::ComputeMultiPath_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::action::ComputeMultiPath_FeedbackMessage>()
{
  return my_nav_msgs::action::builder::Init_ComputeMultiPath_FeedbackMessage_goal_id();
}

}  // namespace my_nav_msgs

#endif  // MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__BUILDER_HPP_
