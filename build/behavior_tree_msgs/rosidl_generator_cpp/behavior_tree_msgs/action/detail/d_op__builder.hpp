// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:action/DOp.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__D_OP__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__D_OP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/action/detail/d_op__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_DOp_Goal_output_txt_path
{
public:
  explicit Init_DOp_Goal_output_txt_path(::behavior_tree_msgs::action::DOp_Goal & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::DOp_Goal output_txt_path(::behavior_tree_msgs::action::DOp_Goal::_output_txt_path_type arg)
  {
    msg_.output_txt_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_Goal msg_;
};

class Init_DOp_Goal_input_csv_path
{
public:
  Init_DOp_Goal_input_csv_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DOp_Goal_output_txt_path input_csv_path(::behavior_tree_msgs::action::DOp_Goal::_input_csv_path_type arg)
  {
    msg_.input_csv_path = std::move(arg);
    return Init_DOp_Goal_output_txt_path(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::DOp_Goal>()
{
  return behavior_tree_msgs::action::builder::Init_DOp_Goal_input_csv_path();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_DOp_Result_message
{
public:
  explicit Init_DOp_Result_message(::behavior_tree_msgs::action::DOp_Result & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::DOp_Result message(::behavior_tree_msgs::action::DOp_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_Result msg_;
};

class Init_DOp_Result_success
{
public:
  Init_DOp_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DOp_Result_message success(::behavior_tree_msgs::action::DOp_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DOp_Result_message(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::DOp_Result>()
{
  return behavior_tree_msgs::action::builder::Init_DOp_Result_success();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_DOp_Feedback_current_step
{
public:
  Init_DOp_Feedback_current_step()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::action::DOp_Feedback current_step(::behavior_tree_msgs::action::DOp_Feedback::_current_step_type arg)
  {
    msg_.current_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::DOp_Feedback>()
{
  return behavior_tree_msgs::action::builder::Init_DOp_Feedback_current_step();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_DOp_SendGoal_Request_goal
{
public:
  explicit Init_DOp_SendGoal_Request_goal(::behavior_tree_msgs::action::DOp_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::DOp_SendGoal_Request goal(::behavior_tree_msgs::action::DOp_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_SendGoal_Request msg_;
};

class Init_DOp_SendGoal_Request_goal_id
{
public:
  Init_DOp_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DOp_SendGoal_Request_goal goal_id(::behavior_tree_msgs::action::DOp_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DOp_SendGoal_Request_goal(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::DOp_SendGoal_Request>()
{
  return behavior_tree_msgs::action::builder::Init_DOp_SendGoal_Request_goal_id();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_DOp_SendGoal_Response_stamp
{
public:
  explicit Init_DOp_SendGoal_Response_stamp(::behavior_tree_msgs::action::DOp_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::DOp_SendGoal_Response stamp(::behavior_tree_msgs::action::DOp_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_SendGoal_Response msg_;
};

class Init_DOp_SendGoal_Response_accepted
{
public:
  Init_DOp_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DOp_SendGoal_Response_stamp accepted(::behavior_tree_msgs::action::DOp_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DOp_SendGoal_Response_stamp(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::DOp_SendGoal_Response>()
{
  return behavior_tree_msgs::action::builder::Init_DOp_SendGoal_Response_accepted();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_DOp_GetResult_Request_goal_id
{
public:
  Init_DOp_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::action::DOp_GetResult_Request goal_id(::behavior_tree_msgs::action::DOp_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::DOp_GetResult_Request>()
{
  return behavior_tree_msgs::action::builder::Init_DOp_GetResult_Request_goal_id();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_DOp_GetResult_Response_result
{
public:
  explicit Init_DOp_GetResult_Response_result(::behavior_tree_msgs::action::DOp_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::DOp_GetResult_Response result(::behavior_tree_msgs::action::DOp_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_GetResult_Response msg_;
};

class Init_DOp_GetResult_Response_status
{
public:
  Init_DOp_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DOp_GetResult_Response_result status(::behavior_tree_msgs::action::DOp_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DOp_GetResult_Response_result(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::DOp_GetResult_Response>()
{
  return behavior_tree_msgs::action::builder::Init_DOp_GetResult_Response_status();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace action
{

namespace builder
{

class Init_DOp_FeedbackMessage_feedback
{
public:
  explicit Init_DOp_FeedbackMessage_feedback(::behavior_tree_msgs::action::DOp_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::action::DOp_FeedbackMessage feedback(::behavior_tree_msgs::action::DOp_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_FeedbackMessage msg_;
};

class Init_DOp_FeedbackMessage_goal_id
{
public:
  Init_DOp_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DOp_FeedbackMessage_feedback goal_id(::behavior_tree_msgs::action::DOp_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DOp_FeedbackMessage_feedback(msg_);
  }

private:
  ::behavior_tree_msgs::action::DOp_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::action::DOp_FeedbackMessage>()
{
  return behavior_tree_msgs::action::builder::Init_DOp_FeedbackMessage_goal_id();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__D_OP__BUILDER_HPP_
