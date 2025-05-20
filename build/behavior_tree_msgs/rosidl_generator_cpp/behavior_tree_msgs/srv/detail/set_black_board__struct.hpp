// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:srv/SetBlackBoard.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bb_message'
#include "behavior_tree_msgs/msg/detail/bb_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__SetBlackBoard_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__SetBlackBoard_Request __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBlackBoard_Request_
{
  using Type = SetBlackBoard_Request_<ContainerAllocator>;

  explicit SetBlackBoard_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bb_message(_init)
  {
    (void)_init;
  }

  explicit SetBlackBoard_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bb_message(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _bb_message_type =
    behavior_tree_msgs::msg::BBMessage_<ContainerAllocator>;
  _bb_message_type bb_message;

  // setters for named parameter idiom
  Type & set__bb_message(
    const behavior_tree_msgs::msg::BBMessage_<ContainerAllocator> & _arg)
  {
    this->bb_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__SetBlackBoard_Request
    std::shared_ptr<behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__SetBlackBoard_Request
    std::shared_ptr<behavior_tree_msgs::srv::SetBlackBoard_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBlackBoard_Request_ & other) const
  {
    if (this->bb_message != other.bb_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBlackBoard_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBlackBoard_Request_

// alias to use template instance with default allocator
using SetBlackBoard_Request =
  behavior_tree_msgs::srv::SetBlackBoard_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__SetBlackBoard_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__SetBlackBoard_Response __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBlackBoard_Response_
{
  using Type = SetBlackBoard_Response_<ContainerAllocator>;

  explicit SetBlackBoard_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_tree = "";
    }
  }

  explicit SetBlackBoard_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : behavior_tree(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_tree = "";
    }
  }

  // field types and members
  using _behavior_tree_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_tree_type behavior_tree;

  // setters for named parameter idiom
  Type & set__behavior_tree(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_tree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__SetBlackBoard_Response
    std::shared_ptr<behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__SetBlackBoard_Response
    std::shared_ptr<behavior_tree_msgs::srv::SetBlackBoard_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBlackBoard_Response_ & other) const
  {
    if (this->behavior_tree != other.behavior_tree) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBlackBoard_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBlackBoard_Response_

// alias to use template instance with default allocator
using SetBlackBoard_Response =
  behavior_tree_msgs::srv::SetBlackBoard_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs

namespace behavior_tree_msgs
{

namespace srv
{

struct SetBlackBoard
{
  using Request = behavior_tree_msgs::srv::SetBlackBoard_Request;
  using Response = behavior_tree_msgs::srv::SetBlackBoard_Response;
};

}  // namespace srv

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__STRUCT_HPP_
