// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from observation_msgs:msg/PathEvaluation.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__STRUCT_HPP_
#define OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__observation_msgs__msg__PathEvaluation __attribute__((deprecated))
#else
# define DEPRECATED__observation_msgs__msg__PathEvaluation __declspec(deprecated)
#endif

namespace observation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathEvaluation_
{
  using Type = PathEvaluation_<ContainerAllocator>;

  explicit PathEvaluation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_cost = 0;
      this->ave_cost = 0;
      this->unknown_area = false;
    }
  }

  explicit PathEvaluation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_cost = 0;
      this->ave_cost = 0;
      this->unknown_area = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _max_cost_type =
    int8_t;
  _max_cost_type max_cost;
  using _ave_cost_type =
    int8_t;
  _ave_cost_type ave_cost;
  using _unknown_area_type =
    bool;
  _unknown_area_type unknown_area;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__max_cost(
    const int8_t & _arg)
  {
    this->max_cost = _arg;
    return *this;
  }
  Type & set__ave_cost(
    const int8_t & _arg)
  {
    this->ave_cost = _arg;
    return *this;
  }
  Type & set__unknown_area(
    const bool & _arg)
  {
    this->unknown_area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    observation_msgs::msg::PathEvaluation_<ContainerAllocator> *;
  using ConstRawPtr =
    const observation_msgs::msg::PathEvaluation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observation_msgs::msg::PathEvaluation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observation_msgs::msg::PathEvaluation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observation_msgs::msg::PathEvaluation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::msg::PathEvaluation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observation_msgs::msg::PathEvaluation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::msg::PathEvaluation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observation_msgs::msg::PathEvaluation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observation_msgs::msg::PathEvaluation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observation_msgs__msg__PathEvaluation
    std::shared_ptr<observation_msgs::msg::PathEvaluation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observation_msgs__msg__PathEvaluation
    std::shared_ptr<observation_msgs::msg::PathEvaluation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathEvaluation_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->max_cost != other.max_cost) {
      return false;
    }
    if (this->ave_cost != other.ave_cost) {
      return false;
    }
    if (this->unknown_area != other.unknown_area) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathEvaluation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathEvaluation_

// alias to use template instance with default allocator
using PathEvaluation =
  observation_msgs::msg::PathEvaluation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__STRUCT_HPP_
