// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:action/Pick.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PICK__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PICK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__Pick_Goal __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__Pick_Goal __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Pick_Goal_
{
  using Type = Pick_Goal_<ContainerAllocator>;

  explicit Pick_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit Pick_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_Goal
    std::shared_ptr<behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_Goal
    std::shared_ptr<behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pick_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pick_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pick_Goal_

// alias to use template instance with default allocator
using Pick_Goal =
  behavior_tree_msgs::action::Pick_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__Pick_Result __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__Pick_Result __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Pick_Result_
{
  using Type = Pick_Result_<ContainerAllocator>;

  explicit Pick_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_string = "";
    }
  }

  explicit Pick_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_string = "";
    }
  }

  // field types and members
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_string_type error_string;

  // setters for named parameter idiom
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::Pick_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::Pick_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_Result
    std::shared_ptr<behavior_tree_msgs::action::Pick_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_Result
    std::shared_ptr<behavior_tree_msgs::action::Pick_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pick_Result_ & other) const
  {
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pick_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pick_Result_

// alias to use template instance with default allocator
using Pick_Result =
  behavior_tree_msgs::action::Pick_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__Pick_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__Pick_Feedback __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Pick_Feedback_
{
  using Type = Pick_Feedback_<ContainerAllocator>;

  explicit Pick_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  explicit Pick_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  // field types and members
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_Feedback
    std::shared_ptr<behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_Feedback
    std::shared_ptr<behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pick_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pick_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pick_Feedback_

// alias to use template instance with default allocator
using Pick_Feedback =
  behavior_tree_msgs::action::Pick_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/pick__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__Pick_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__Pick_SendGoal_Request __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Pick_SendGoal_Request_
{
  using Type = Pick_SendGoal_Request_<ContainerAllocator>;

  explicit Pick_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Pick_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const behavior_tree_msgs::action::Pick_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_SendGoal_Request
    std::shared_ptr<behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_SendGoal_Request
    std::shared_ptr<behavior_tree_msgs::action::Pick_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pick_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pick_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pick_SendGoal_Request_

// alias to use template instance with default allocator
using Pick_SendGoal_Request =
  behavior_tree_msgs::action::Pick_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__Pick_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__Pick_SendGoal_Response __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Pick_SendGoal_Response_
{
  using Type = Pick_SendGoal_Response_<ContainerAllocator>;

  explicit Pick_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Pick_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_SendGoal_Response
    std::shared_ptr<behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_SendGoal_Response
    std::shared_ptr<behavior_tree_msgs::action::Pick_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pick_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pick_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pick_SendGoal_Response_

// alias to use template instance with default allocator
using Pick_SendGoal_Response =
  behavior_tree_msgs::action::Pick_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs

namespace behavior_tree_msgs
{

namespace action
{

struct Pick_SendGoal
{
  using Request = behavior_tree_msgs::action::Pick_SendGoal_Request;
  using Response = behavior_tree_msgs::action::Pick_SendGoal_Response;
};

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__Pick_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__Pick_GetResult_Request __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Pick_GetResult_Request_
{
  using Type = Pick_GetResult_Request_<ContainerAllocator>;

  explicit Pick_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Pick_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_GetResult_Request
    std::shared_ptr<behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_GetResult_Request
    std::shared_ptr<behavior_tree_msgs::action::Pick_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pick_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pick_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pick_GetResult_Request_

// alias to use template instance with default allocator
using Pick_GetResult_Request =
  behavior_tree_msgs::action::Pick_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/pick__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__Pick_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__Pick_GetResult_Response __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Pick_GetResult_Response_
{
  using Type = Pick_GetResult_Response_<ContainerAllocator>;

  explicit Pick_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Pick_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    behavior_tree_msgs::action::Pick_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const behavior_tree_msgs::action::Pick_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_GetResult_Response
    std::shared_ptr<behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_GetResult_Response
    std::shared_ptr<behavior_tree_msgs::action::Pick_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pick_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pick_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pick_GetResult_Response_

// alias to use template instance with default allocator
using Pick_GetResult_Response =
  behavior_tree_msgs::action::Pick_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_tree_msgs

namespace behavior_tree_msgs
{

namespace action
{

struct Pick_GetResult
{
  using Request = behavior_tree_msgs::action::Pick_GetResult_Request;
  using Response = behavior_tree_msgs::action::Pick_GetResult_Response;
};

}  // namespace action

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/pick__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__action__Pick_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__action__Pick_FeedbackMessage __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Pick_FeedbackMessage_
{
  using Type = Pick_FeedbackMessage_<ContainerAllocator>;

  explicit Pick_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Pick_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const behavior_tree_msgs::action::Pick_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_FeedbackMessage
    std::shared_ptr<behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__action__Pick_FeedbackMessage
    std::shared_ptr<behavior_tree_msgs::action::Pick_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pick_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pick_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pick_FeedbackMessage_

// alias to use template instance with default allocator
using Pick_FeedbackMessage =
  behavior_tree_msgs::action::Pick_FeedbackMessage_<std::allocator<void>>;

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

struct Pick
{
  /// The goal message defined in the action definition.
  using Goal = behavior_tree_msgs::action::Pick_Goal;
  /// The result message defined in the action definition.
  using Result = behavior_tree_msgs::action::Pick_Result;
  /// The feedback message defined in the action definition.
  using Feedback = behavior_tree_msgs::action::Pick_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = behavior_tree_msgs::action::Pick_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = behavior_tree_msgs::action::Pick_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = behavior_tree_msgs::action::Pick_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Pick Pick;

}  // namespace action

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PICK__STRUCT_HPP_
