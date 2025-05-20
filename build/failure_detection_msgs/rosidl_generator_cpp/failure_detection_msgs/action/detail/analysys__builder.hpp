// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from failure_detection_msgs:action/Analysys.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__BUILDER_HPP_
#define FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "failure_detection_msgs/action/detail/analysys__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace failure_detection_msgs
{

namespace action
{

namespace builder
{

class Init_Analysys_Goal_node_id
{
public:
  explicit Init_Analysys_Goal_node_id(::failure_detection_msgs::action::Analysys_Goal & msg)
  : msg_(msg)
  {}
  ::failure_detection_msgs::action::Analysys_Goal node_id(::failure_detection_msgs::action::Analysys_Goal::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_Goal msg_;
};

class Init_Analysys_Goal_node_name
{
public:
  Init_Analysys_Goal_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Analysys_Goal_node_id node_name(::failure_detection_msgs::action::Analysys_Goal::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_Analysys_Goal_node_id(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::action::Analysys_Goal>()
{
  return failure_detection_msgs::action::builder::Init_Analysys_Goal_node_name();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace action
{

namespace builder
{

class Init_Analysys_Result_success_probability
{
public:
  Init_Analysys_Result_success_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::failure_detection_msgs::action::Analysys_Result success_probability(::failure_detection_msgs::action::Analysys_Result::_success_probability_type arg)
  {
    msg_.success_probability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::action::Analysys_Result>()
{
  return failure_detection_msgs::action::builder::Init_Analysys_Result_success_probability();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace action
{

namespace builder
{

class Init_Analysys_Feedback_success_probability
{
public:
  Init_Analysys_Feedback_success_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::failure_detection_msgs::action::Analysys_Feedback success_probability(::failure_detection_msgs::action::Analysys_Feedback::_success_probability_type arg)
  {
    msg_.success_probability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::action::Analysys_Feedback>()
{
  return failure_detection_msgs::action::builder::Init_Analysys_Feedback_success_probability();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace action
{

namespace builder
{

class Init_Analysys_SendGoal_Request_goal
{
public:
  explicit Init_Analysys_SendGoal_Request_goal(::failure_detection_msgs::action::Analysys_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::failure_detection_msgs::action::Analysys_SendGoal_Request goal(::failure_detection_msgs::action::Analysys_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_SendGoal_Request msg_;
};

class Init_Analysys_SendGoal_Request_goal_id
{
public:
  Init_Analysys_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Analysys_SendGoal_Request_goal goal_id(::failure_detection_msgs::action::Analysys_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Analysys_SendGoal_Request_goal(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::action::Analysys_SendGoal_Request>()
{
  return failure_detection_msgs::action::builder::Init_Analysys_SendGoal_Request_goal_id();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace action
{

namespace builder
{

class Init_Analysys_SendGoal_Response_stamp
{
public:
  explicit Init_Analysys_SendGoal_Response_stamp(::failure_detection_msgs::action::Analysys_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::failure_detection_msgs::action::Analysys_SendGoal_Response stamp(::failure_detection_msgs::action::Analysys_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_SendGoal_Response msg_;
};

class Init_Analysys_SendGoal_Response_accepted
{
public:
  Init_Analysys_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Analysys_SendGoal_Response_stamp accepted(::failure_detection_msgs::action::Analysys_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Analysys_SendGoal_Response_stamp(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::action::Analysys_SendGoal_Response>()
{
  return failure_detection_msgs::action::builder::Init_Analysys_SendGoal_Response_accepted();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace action
{

namespace builder
{

class Init_Analysys_GetResult_Request_goal_id
{
public:
  Init_Analysys_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::failure_detection_msgs::action::Analysys_GetResult_Request goal_id(::failure_detection_msgs::action::Analysys_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::action::Analysys_GetResult_Request>()
{
  return failure_detection_msgs::action::builder::Init_Analysys_GetResult_Request_goal_id();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace action
{

namespace builder
{

class Init_Analysys_GetResult_Response_result
{
public:
  explicit Init_Analysys_GetResult_Response_result(::failure_detection_msgs::action::Analysys_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::failure_detection_msgs::action::Analysys_GetResult_Response result(::failure_detection_msgs::action::Analysys_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_GetResult_Response msg_;
};

class Init_Analysys_GetResult_Response_status
{
public:
  Init_Analysys_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Analysys_GetResult_Response_result status(::failure_detection_msgs::action::Analysys_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Analysys_GetResult_Response_result(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::action::Analysys_GetResult_Response>()
{
  return failure_detection_msgs::action::builder::Init_Analysys_GetResult_Response_status();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace action
{

namespace builder
{

class Init_Analysys_FeedbackMessage_feedback
{
public:
  explicit Init_Analysys_FeedbackMessage_feedback(::failure_detection_msgs::action::Analysys_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::failure_detection_msgs::action::Analysys_FeedbackMessage feedback(::failure_detection_msgs::action::Analysys_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_FeedbackMessage msg_;
};

class Init_Analysys_FeedbackMessage_goal_id
{
public:
  Init_Analysys_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Analysys_FeedbackMessage_feedback goal_id(::failure_detection_msgs::action::Analysys_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Analysys_FeedbackMessage_feedback(msg_);
  }

private:
  ::failure_detection_msgs::action::Analysys_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::action::Analysys_FeedbackMessage>()
{
  return failure_detection_msgs::action::builder::Init_Analysys_FeedbackMessage_goal_id();
}

}  // namespace failure_detection_msgs

#endif  // FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__BUILDER_HPP_
