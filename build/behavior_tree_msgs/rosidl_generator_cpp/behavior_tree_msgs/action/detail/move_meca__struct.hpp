// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:action/MoveMeca.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__MOVE_MECA__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__MOVE_MECA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_Goal __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_Goal __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveMeca_Goal_
{
  using Type = MoveMeca_Goal_<ContainerAllocator>;

  explicit MoveMeca_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posi_x = 0.0;
      this->posi_y = 0.0;
    }
  }

  explicit MoveMeca_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posi_x = 0.0;
      this->posi_y = 0.0;
    }
  }

  // field types and members
  using _posi_x_type =
    double;
  _posi_x_type posi_x;
  using _posi_y_type =
    double;
  _posi_y_type posi_y;

  // setters for named parameter idiom
  Type & set__posi_x(
    const double & _arg)
  {
    this->posi_x = _arg;
    return *this;
  }
  Type & set__posi_y(
    const double & _arg)
  {
    this->posi_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_Goal
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_Goal
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMeca_Goal_ & other) const
  {
    if (this->posi_x != other.posi_x) {
      return false;
    }
    if (this->posi_y != other.posi_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMeca_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMeca_Goal_

// alias to use template instance with default allocator
using MoveMeca_Goal =
  behavior_tree_msgs::action::MoveMeca_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_Result __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_Result __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveMeca_Result_
{
  using Type = MoveMeca_Result_<ContainerAllocator>;

  explicit MoveMeca_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_string = "";
      this->success = false;
    }
  }

  explicit MoveMeca_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_string = "";
      this->success = false;
    }
  }

  // field types and members
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_string_type error_string;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_Result
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_Result
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMeca_Result_ & other) const
  {
    if (this->error_string != other.error_string) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMeca_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMeca_Result_

// alias to use template instance with default allocator
using MoveMeca_Result =
  behavior_tree_msgs::action::MoveMeca_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_Feedback __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveMeca_Feedback_
{
  using Type = MoveMeca_Feedback_<ContainerAllocator>;

  explicit MoveMeca_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MoveMeca_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_Feedback
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_Feedback
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMeca_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMeca_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMeca_Feedback_

// alias to use template instance with default allocator
using MoveMeca_Feedback =
  behavior_tree_msgs::action::MoveMeca_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/move_meca__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_SendGoal_Request __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveMeca_SendGoal_Request_
{
  using Type = MoveMeca_SendGoal_Request_<ContainerAllocator>;

  explicit MoveMeca_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveMeca_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const behavior_tree_msgs::action::MoveMeca_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_SendGoal_Request
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_SendGoal_Request
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMeca_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMeca_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMeca_SendGoal_Request_

// alias to use template instance with default allocator
using MoveMeca_SendGoal_Request =
  behavior_tree_msgs::action::MoveMeca_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_SendGoal_Response __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveMeca_SendGoal_Response_
{
  using Type = MoveMeca_SendGoal_Response_<ContainerAllocator>;

  explicit MoveMeca_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveMeca_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_SendGoal_Response
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_SendGoal_Response
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMeca_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMeca_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMeca_SendGoal_Response_

// alias to use template instance with default allocator
using MoveMeca_SendGoal_Response =
  behavior_tree_msgs::action::MoveMeca_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs

namespace behavior_tree_msgs
{

namespace action
{

struct MoveMeca_SendGoal
{
  using Request = behavior_tree_msgs::action::MoveMeca_SendGoal_Request;
  using Response = behavior_tree_msgs::action::MoveMeca_SendGoal_Response;
};

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_GetResult_Request __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveMeca_GetResult_Request_
{
  using Type = MoveMeca_GetResult_Request_<ContainerAllocator>;

  explicit MoveMeca_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveMeca_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_GetResult_Request
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_GetResult_Request
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMeca_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMeca_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMeca_GetResult_Request_

// alias to use template instance with default allocator
using MoveMeca_GetResult_Request =
  behavior_tree_msgs::action::MoveMeca_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/move_meca__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_GetResult_Response __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveMeca_GetResult_Response_
{
  using Type = MoveMeca_GetResult_Response_<ContainerAllocator>;

  explicit MoveMeca_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveMeca_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const behavior_tree_msgs::action::MoveMeca_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_GetResult_Response
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_GetResult_Response
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMeca_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMeca_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMeca_GetResult_Response_

// alias to use template instance with default allocator
using MoveMeca_GetResult_Response =
  behavior_tree_msgs::action::MoveMeca_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs

namespace behavior_tree_msgs
{

namespace action
{

struct MoveMeca_GetResult
{
  using Request = behavior_tree_msgs::action::MoveMeca_GetResult_Request;
  using Response = behavior_tree_msgs::action::MoveMeca_GetResult_Response;
};

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/move_meca__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__MoveMeca_FeedbackMessage __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveMeca_FeedbackMessage_
{
  using Type = MoveMeca_FeedbackMessage_<ContainerAllocator>;

  explicit MoveMeca_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveMeca_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const behavior_tree_msgs::action::MoveMeca_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_FeedbackMessage
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__MoveMeca_FeedbackMessage
    std::shared_ptr<behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMeca_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMeca_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMeca_FeedbackMessage_

// alias to use template instance with default allocator
using MoveMeca_FeedbackMessage =
  behavior_tree_msgs::action::MoveMeca_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace behavior_tree_msgs
{

namespace action
{

struct MoveMeca
{
  /// The goal message defined in the action definition.
  using Goal = behavior_tree_msgs::action::MoveMeca_Goal;
  /// The result message defined in the action definition.
  using Result = behavior_tree_msgs::action::MoveMeca_Result;
  /// The feedback message defined in the action definition.
  using Feedback = behavior_tree_msgs::action::MoveMeca_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = behavior_tree_msgs::action::MoveMeca_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = behavior_tree_msgs::action::MoveMeca_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = behavior_tree_msgs::action::MoveMeca_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveMeca MoveMeca;

}  // namespace action

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__MOVE_MECA__STRUCT_HPP_
