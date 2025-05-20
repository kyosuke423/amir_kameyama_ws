// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_nav_msgs:msg/PathWithCondition.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__STRUCT_HPP_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.hpp"
// Member 'info'
#include "my_nav_msgs/msg/detail/path_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__msg__PathWithCondition __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__msg__PathWithCondition __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathWithCondition_
{
  using Type = PathWithCondition_<ContainerAllocator>;

  explicit PathWithCondition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init),
    info(_init)
  {
    (void)_init;
  }

  explicit PathWithCondition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init),
    info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _path_type path;
  using _info_type =
    my_nav_msgs::msg::PathInfo_<ContainerAllocator>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__info(
    const my_nav_msgs::msg::PathInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::msg::PathWithCondition_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::msg::PathWithCondition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__msg__PathWithCondition
    std::shared_ptr<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__msg__PathWithCondition
    std::shared_ptr<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathWithCondition_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathWithCondition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathWithCondition_

// alias to use template instance with default allocator
using PathWithCondition =
  my_nav_msgs::msg::PathWithCondition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_nav_msgs

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__STRUCT_HPP_
