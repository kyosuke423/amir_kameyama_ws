// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__STRUCT_HPP_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__msg__PathInfo __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__msg__PathInfo __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathInfo_
{
  using Type = PathInfo_<ContainerAllocator>;

  explicit PathInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success_rate = 0.0;
    }
  }

  explicit PathInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success_rate = 0.0;
    }
  }

  // field types and members
  using _remove_id_set_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _remove_id_set_type remove_id_set;
  using _success_rate_type =
    double;
  _success_rate_type success_rate;

  // setters for named parameter idiom
  Type & set__remove_id_set(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->remove_id_set = _arg;
    return *this;
  }
  Type & set__success_rate(
    const double & _arg)
  {
    this->success_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::msg::PathInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::msg::PathInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::msg::PathInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::msg::PathInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::msg::PathInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::msg::PathInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::msg::PathInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::msg::PathInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::msg::PathInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::msg::PathInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__msg__PathInfo
    std::shared_ptr<my_nav_msgs::msg::PathInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__msg__PathInfo
    std::shared_ptr<my_nav_msgs::msg::PathInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathInfo_ & other) const
  {
    if (this->remove_id_set != other.remove_id_set) {
      return false;
    }
    if (this->success_rate != other.success_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathInfo_

// alias to use template instance with default allocator
using PathInfo =
  my_nav_msgs::msg::PathInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_nav_msgs

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__STRUCT_HPP_
