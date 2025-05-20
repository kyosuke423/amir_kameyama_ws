// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:msg/BBMessage.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_MESSAGE__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poses'
#include "behavior_tree_msgs/msg/detail/bb_pose__struct.hpp"
// Member 'paths'
#include "behavior_tree_msgs/msg/detail/bb_path__struct.hpp"
// Member 'float_array_set'
#include "behavior_tree_msgs/msg/detail/bb_float64_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__msg__BBMessage __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__msg__BBMessage __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BBMessage_
{
  using Type = BBMessage_<ContainerAllocator>;

  explicit BBMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BBMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _poses_type =
    std::vector<behavior_tree_msgs::msg::BBPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBPose_<ContainerAllocator>>>;
  _poses_type poses;
  using _paths_type =
    std::vector<behavior_tree_msgs::msg::BBPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBPath_<ContainerAllocator>>>;
  _paths_type paths;
  using _float_array_set_type =
    std::vector<behavior_tree_msgs::msg::BBFloat64Array_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBFloat64Array_<ContainerAllocator>>>;
  _float_array_set_type float_array_set;

  // setters for named parameter idiom
  Type & set__poses(
    const std::vector<behavior_tree_msgs::msg::BBPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBPose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__paths(
    const std::vector<behavior_tree_msgs::msg::BBPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBPath_<ContainerAllocator>>> & _arg)
  {
    this->paths = _arg;
    return *this;
  }
  Type & set__float_array_set(
    const std::vector<behavior_tree_msgs::msg::BBFloat64Array_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBFloat64Array_<ContainerAllocator>>> & _arg)
  {
    this->float_array_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::msg::BBMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::msg::BBMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::BBMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::BBMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::BBMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::BBMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::BBMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::BBMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::BBMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::BBMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__msg__BBMessage
    std::shared_ptr<behavior_tree_msgs::msg::BBMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__msg__BBMessage
    std::shared_ptr<behavior_tree_msgs::msg::BBMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BBMessage_ & other) const
  {
    if (this->poses != other.poses) {
      return false;
    }
    if (this->paths != other.paths) {
      return false;
    }
    if (this->float_array_set != other.float_array_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const BBMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BBMessage_

// alias to use template instance with default allocator
using BBMessage =
  behavior_tree_msgs::msg::BBMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_MESSAGE__STRUCT_HPP_
