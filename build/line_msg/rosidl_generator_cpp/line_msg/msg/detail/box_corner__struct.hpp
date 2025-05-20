// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from line_msg:msg/BoxCorner.idl
// generated code does not contain a copyright notice

#ifndef LINE_MSG__MSG__DETAIL__BOX_CORNER__STRUCT_HPP_
#define LINE_MSG__MSG__DETAIL__BOX_CORNER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'posi'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__line_msg__msg__BoxCorner __attribute__((deprecated))
#else
# define DEPRECATED__line_msg__msg__BoxCorner __declspec(deprecated)
#endif

namespace line_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoxCorner_
{
  using Type = BoxCorner_<ContainerAllocator>;

  explicit BoxCorner_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : posi(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->corner_num = 0;
    }
  }

  explicit BoxCorner_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : posi(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->corner_num = 0;
    }
  }

  // field types and members
  using _id_type =
    int8_t;
  _id_type id;
  using _corner_num_type =
    int8_t;
  _corner_num_type corner_num;
  using _posi_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _posi_type posi;

  // setters for named parameter idiom
  Type & set__id(
    const int8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__corner_num(
    const int8_t & _arg)
  {
    this->corner_num = _arg;
    return *this;
  }
  Type & set__posi(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->posi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    line_msg::msg::BoxCorner_<ContainerAllocator> *;
  using ConstRawPtr =
    const line_msg::msg::BoxCorner_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<line_msg::msg::BoxCorner_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<line_msg::msg::BoxCorner_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      line_msg::msg::BoxCorner_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<line_msg::msg::BoxCorner_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      line_msg::msg::BoxCorner_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<line_msg::msg::BoxCorner_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<line_msg::msg::BoxCorner_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<line_msg::msg::BoxCorner_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__line_msg__msg__BoxCorner
    std::shared_ptr<line_msg::msg::BoxCorner_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__line_msg__msg__BoxCorner
    std::shared_ptr<line_msg::msg::BoxCorner_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoxCorner_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->corner_num != other.corner_num) {
      return false;
    }
    if (this->posi != other.posi) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoxCorner_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoxCorner_

// alias to use template instance with default allocator
using BoxCorner =
  line_msg::msg::BoxCorner_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace line_msg

#endif  // LINE_MSG__MSG__DETAIL__BOX_CORNER__STRUCT_HPP_
