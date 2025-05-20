// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:action/PrintMessage.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PRINT_MESSAGE__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PRINT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/action/detail/print_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_PrintMessage_Goal_pause_ms
{
public:
  explicit Init_PrintMessage_Goal_pause_ms(::behavior_tree_msgs::action::PrintMessage_Goal & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::PrintMessage_Goal pause_ms(::behavior_tree_msgs::action::PrintMessage_Goal::_pause_ms_type arg)
  {
    msg_.pause_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_Goal msg_;
};

class Init_PrintMessage_Goal_iterations
{
public:
  explicit Init_PrintMessage_Goal_iterations(::behavior_tree_msgs::action::PrintMessage_Goal & msg)
  : msg_(msg)
  {}
  Init_PrintMessage_Goal_pause_ms iterations(::behavior_tree_msgs::action::PrintMessage_Goal::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return Init_PrintMessage_Goal_pause_ms(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_Goal msg_;
};

class Init_PrintMessage_Goal_message
{
public:
  Init_PrintMessage_Goal_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrintMessage_Goal_iterations message(::behavior_tree_msgs::action::PrintMessage_Goal::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_PrintMessage_Goal_iterations(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::PrintMessage_Goal>()
{
  return behavior_tree_msgs::action::builder::Init_PrintMessage_Goal_message();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_PrintMessage_Result_result
{
public:
  Init_PrintMessage_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::action::PrintMessage_Result result(::behavior_tree_msgs::action::PrintMessage_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::PrintMessage_Result>()
{
  return behavior_tree_msgs::action::builder::Init_PrintMessage_Result_result();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::PrintMessage_Feedback>()
{
  return ::behavior_tree_msgs::action::PrintMessage_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_PrintMessage_SendGoal_Request_goal
{
public:
  explicit Init_PrintMessage_SendGoal_Request_goal(::behavior_tree_msgs::action::PrintMessage_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::PrintMessage_SendGoal_Request goal(::behavior_tree_msgs::action::PrintMessage_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_SendGoal_Request msg_;
};

class Init_PrintMessage_SendGoal_Request_goal_id
{
public:
  Init_PrintMessage_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrintMessage_SendGoal_Request_goal goal_id(::behavior_tree_msgs::action::PrintMessage_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PrintMessage_SendGoal_Request_goal(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::PrintMessage_SendGoal_Request>()
{
  return behavior_tree_msgs::action::builder::Init_PrintMessage_SendGoal_Request_goal_id();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_PrintMessage_SendGoal_Response_stamp
{
public:
  explicit Init_PrintMessage_SendGoal_Response_stamp(::behavior_tree_msgs::action::PrintMessage_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::PrintMessage_SendGoal_Response stamp(::behavior_tree_msgs::action::PrintMessage_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_SendGoal_Response msg_;
};

class Init_PrintMessage_SendGoal_Response_accepted
{
public:
  Init_PrintMessage_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrintMessage_SendGoal_Response_stamp accepted(::behavior_tree_msgs::action::PrintMessage_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PrintMessage_SendGoal_Response_stamp(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::PrintMessage_SendGoal_Response>()
{
  return behavior_tree_msgs::action::builder::Init_PrintMessage_SendGoal_Response_accepted();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_PrintMessage_GetResult_Request_goal_id
{
public:
  Init_PrintMessage_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::action::PrintMessage_GetResult_Request goal_id(::behavior_tree_msgs::action::PrintMessage_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::PrintMessage_GetResult_Request>()
{
  return behavior_tree_msgs::action::builder::Init_PrintMessage_GetResult_Request_goal_id();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_PrintMessage_GetResult_Response_result
{
public:
  explicit Init_PrintMessage_GetResult_Response_result(::behavior_tree_msgs::action::PrintMessage_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::PrintMessage_GetResult_Response result(::behavior_tree_msgs::action::PrintMessage_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_GetResult_Response msg_;
};

class Init_PrintMessage_GetResult_Response_status
{
public:
  Init_PrintMessage_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrintMessage_GetResult_Response_result status(::behavior_tree_msgs::action::PrintMessage_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PrintMessage_GetResult_Response_result(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::PrintMessage_GetResult_Response>()
{
  return behavior_tree_msgs::action::builder::Init_PrintMessage_GetResult_Response_status();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_PrintMessage_FeedbackMessage_feedback
{
public:
  explicit Init_PrintMessage_FeedbackMessage_feedback(::behavior_tree_msgs::action::PrintMessage_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::PrintMessage_FeedbackMessage feedback(::behavior_tree_msgs::action::PrintMessage_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_FeedbackMessage msg_;
};

class Init_PrintMessage_FeedbackMessage_goal_id
{
public:
  Init_PrintMessage_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrintMessage_FeedbackMessage_feedback goal_id(::behavior_tree_msgs::action::PrintMessage_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PrintMessage_FeedbackMessage_feedback(msg_);
  }

private:
  ::behavior_tree_msgs::action::PrintMessage_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::PrintMessage_FeedbackMessage>()
{
  return behavior_tree_msgs::action::builder::Init_PrintMessage_FeedbackMessage_goal_id();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PRINT_MESSAGE__BUILDER_HPP_
