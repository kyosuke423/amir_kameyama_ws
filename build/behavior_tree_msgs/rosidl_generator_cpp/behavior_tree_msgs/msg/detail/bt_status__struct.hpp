// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:msg/BTStatus.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'root_status'
// Member 'bt_status'
#include "behavior_tree_msgs/msg/detail/node_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__msg__BTStatus __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__msg__BTStatus __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BTStatus_
{
  using Type = BTStatus_<ContainerAllocator>;

  explicit BTStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : root_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bt = "";
    }
  }

  explicit BTStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bt(_alloc),
    root_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bt = "";
    }
  }

  // field types and members
  using _bt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bt_type bt;
  using _root_status_type =
    behavior_tree_msgs::msg::NodeStatus_<ContainerAllocator>;
  _root_status_type root_status;
  using _bt_status_type =
    std::vector<behavior_tree_msgs::msg::NodeStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::NodeStatus_<ContainerAllocator>>>;
  _bt_status_type bt_status;

  // setters for named parameter idiom
  Type & set__bt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bt = _arg;
    return *this;
  }
  Type & set__root_status(
    const behavior_tree_msgs::msg::NodeStatus_<ContainerAllocator> & _arg)
  {
    this->root_status = _arg;
    return *this;
  }
  Type & set__bt_status(
    const std::vector<behavior_tree_msgs::msg::NodeStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::NodeStatus_<ContainerAllocator>>> & _arg)
  {
    this->bt_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::msg::BTStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::msg::BTStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::BTStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::BTStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::BTStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::BTStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::BTStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::BTStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::BTStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::BTStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__msg__BTStatus
    std::shared_ptr<behavior_tree_msgs::msg::BTStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__msg__BTStatus
    std::shared_ptr<behavior_tree_msgs::msg::BTStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BTStatus_ & other) const
  {
    if (this->bt != other.bt) {
      return false;
    }
    if (this->root_status != other.root_status) {
      return false;
    }
    if (this->bt_status != other.bt_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const BTStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BTStatus_

// alias to use template instance with default allocator
using BTStatus =
  behavior_tree_msgs::msg::BTStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__STRUCT_HPP_
