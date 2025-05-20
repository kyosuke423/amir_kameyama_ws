// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:action/ExecuteTree.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__EXECUTE_TREE__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__EXECUTE_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/action/detail/execute_tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_Goal_id
{
public:
  explicit Init_ExecuteTree_Goal_id(::behavior_tree_msgs::action::ExecuteTree_Goal & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::ExecuteTree_Goal id(::behavior_tree_msgs::action::ExecuteTree_Goal::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_Goal msg_;
};

class Init_ExecuteTree_Goal_bt
{
public:
  Init_ExecuteTree_Goal_bt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_Goal_id bt(::behavior_tree_msgs::action::ExecuteTree_Goal::_bt_type arg)
  {
    msg_.bt = std::move(arg);
    return Init_ExecuteTree_Goal_id(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::ExecuteTree_Goal>()
{
  return behavior_tree_msgs::action::builder::Init_ExecuteTree_Goal_bt();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_Result_error_string
{
public:
  explicit Init_ExecuteTree_Result_error_string(::behavior_tree_msgs::action::ExecuteTree_Result & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::ExecuteTree_Result error_string(::behavior_tree_msgs::action::ExecuteTree_Result::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_Result msg_;
};

class Init_ExecuteTree_Result_bt_status
{
public:
  Init_ExecuteTree_Result_bt_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_Result_error_string bt_status(::behavior_tree_msgs::action::ExecuteTree_Result::_bt_status_type arg)
  {
    msg_.bt_status = std::move(arg);
    return Init_ExecuteTree_Result_error_string(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::ExecuteTree_Result>()
{
  return behavior_tree_msgs::action::builder::Init_ExecuteTree_Result_bt_status();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_Feedback_bt_status
{
public:
  Init_ExecuteTree_Feedback_bt_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::action::ExecuteTree_Feedback bt_status(::behavior_tree_msgs::action::ExecuteTree_Feedback::_bt_status_type arg)
  {
    msg_.bt_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::ExecuteTree_Feedback>()
{
  return behavior_tree_msgs::action::builder::Init_ExecuteTree_Feedback_bt_status();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteTree_SendGoal_Request_goal(::behavior_tree_msgs::action::ExecuteTree_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::ExecuteTree_SendGoal_Request goal(::behavior_tree_msgs::action::ExecuteTree_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_SendGoal_Request msg_;
};

class Init_ExecuteTree_SendGoal_Request_goal_id
{
public:
  Init_ExecuteTree_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_SendGoal_Request_goal goal_id(::behavior_tree_msgs::action::ExecuteTree_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTree_SendGoal_Request_goal(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::ExecuteTree_SendGoal_Request>()
{
  return behavior_tree_msgs::action::builder::Init_ExecuteTree_SendGoal_Request_goal_id();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteTree_SendGoal_Response_stamp(::behavior_tree_msgs::action::ExecuteTree_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::ExecuteTree_SendGoal_Response stamp(::behavior_tree_msgs::action::ExecuteTree_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_SendGoal_Response msg_;
};

class Init_ExecuteTree_SendGoal_Response_accepted
{
public:
  Init_ExecuteTree_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_SendGoal_Response_stamp accepted(::behavior_tree_msgs::action::ExecuteTree_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteTree_SendGoal_Response_stamp(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::ExecuteTree_SendGoal_Response>()
{
  return behavior_tree_msgs::action::builder::Init_ExecuteTree_SendGoal_Response_accepted();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_GetResult_Request_goal_id
{
public:
  Init_ExecuteTree_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::action::ExecuteTree_GetResult_Request goal_id(::behavior_tree_msgs::action::ExecuteTree_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::ExecuteTree_GetResult_Request>()
{
  return behavior_tree_msgs::action::builder::Init_ExecuteTree_GetResult_Request_goal_id();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_GetResult_Response_result
{
public:
  explicit Init_ExecuteTree_GetResult_Response_result(::behavior_tree_msgs::action::ExecuteTree_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::ExecuteTree_GetResult_Response result(::behavior_tree_msgs::action::ExecuteTree_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_GetResult_Response msg_;
};

class Init_ExecuteTree_GetResult_Response_status
{
public:
  Init_ExecuteTree_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_GetResult_Response_result status(::behavior_tree_msgs::action::ExecuteTree_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteTree_GetResult_Response_result(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::ExecuteTree_GetResult_Response>()
{
  return behavior_tree_msgs::action::builder::Init_ExecuteTree_GetResult_Response_status();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteTree_FeedbackMessage_feedback(::behavior_tree_msgs::action::ExecuteTree_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::ExecuteTree_FeedbackMessage feedback(::behavior_tree_msgs::action::ExecuteTree_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_FeedbackMessage msg_;
};

class Init_ExecuteTree_FeedbackMessage_goal_id
{
public:
  Init_ExecuteTree_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_FeedbackMessage_feedback goal_id(::behavior_tree_msgs::action::ExecuteTree_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTree_FeedbackMessage_feedback(msg_);
  }

private:
  ::behavior_tree_msgs::action::ExecuteTree_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::ExecuteTree_FeedbackMessage>()
{
  return behavior_tree_msgs::action::builder::Init_ExecuteTree_FeedbackMessage_goal_id();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__EXECUTE_TREE__BUILDER_HPP_
