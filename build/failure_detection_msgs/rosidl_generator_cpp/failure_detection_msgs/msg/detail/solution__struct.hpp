// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from failure_detection_msgs:msg/Solution.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__STRUCT_HPP_
#define FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__STRUCT_HPP_

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
# define DEPRECATED__failure_detection_msgs__msg__Solution __attribute__((deprecated))
#else
# define DEPRECATED__failure_detection_msgs__msg__Solution __declspec(deprecated)
#endif

namespace failure_detection_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Solution_
{
  using Type = Solution_<ContainerAllocator>;

  explicit Solution_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bb_message(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bt_node_name = "";
    }
  }

  explicit Solution_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bt_node_name(_alloc),
    bb_message(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bt_node_name = "";
    }
  }

  // field types and members
  using _bt_node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bt_node_name_type bt_node_name;
  using _solutions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _solutions_type solutions;
  using _priorities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _priorities_type priorities;
  using _bb_message_type =
    behavior_tree_msgs::msg::BBMessage_<ContainerAllocator>;
  _bb_message_type bb_message;

  // setters for named parameter idiom
  Type & set__bt_node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bt_node_name = _arg;
    return *this;
  }
  Type & set__solutions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->solutions = _arg;
    return *this;
  }
  Type & set__priorities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->priorities = _arg;
    return *this;
  }
  Type & set__bb_message(
    const behavior_tree_msgs::msg::BBMessage_<ContainerAllocator> & _arg)
  {
    this->bb_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    failure_detection_msgs::msg::Solution_<ContainerAllocator> *;
  using ConstRawPtr =
    const failure_detection_msgs::msg::Solution_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<failure_detection_msgs::msg::Solution_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<failure_detection_msgs::msg::Solution_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::msg::Solution_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::msg::Solution_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::msg::Solution_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::msg::Solution_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<failure_detection_msgs::msg::Solution_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<failure_detection_msgs::msg::Solution_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__failure_detection_msgs__msg__Solution
    std::shared_ptr<failure_detection_msgs::msg::Solution_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__failure_detection_msgs__msg__Solution
    std::shared_ptr<failure_detection_msgs::msg::Solution_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Solution_ & other) const
  {
    if (this->bt_node_name != other.bt_node_name) {
      return false;
    }
    if (this->solutions != other.solutions) {
      return false;
    }
    if (this->priorities != other.priorities) {
      return false;
    }
    if (this->bb_message != other.bb_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Solution_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Solution_

// alias to use template instance with default allocator
using Solution =
  failure_detection_msgs::msg::Solution_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace failure_detection_msgs

#endif  // FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__STRUCT_HPP_
