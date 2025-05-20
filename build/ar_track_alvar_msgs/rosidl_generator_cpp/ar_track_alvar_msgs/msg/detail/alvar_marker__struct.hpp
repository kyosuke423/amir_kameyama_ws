// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ar_track_alvar_msgs:msg/AlvarMarker.idl
// generated code does not contain a copyright notice

#ifndef AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKER__STRUCT_HPP_
#define AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKER__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ar_track_alvar_msgs__msg__AlvarMarker __attribute__((deprecated))
#else
# define DEPRECATED__ar_track_alvar_msgs__msg__AlvarMarker __declspec(deprecated)
#endif

namespace ar_track_alvar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AlvarMarker_
{
  using Type = AlvarMarker_<ContainerAllocator>;

  explicit AlvarMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->confidence = 0ul;
    }
  }

  explicit AlvarMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->confidence = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint32_t;
  _id_type id;
  using _confidence_type =
    uint32_t;
  _confidence_type confidence;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__confidence(
    const uint32_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ar_track_alvar_msgs__msg__AlvarMarker
    std::shared_ptr<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ar_track_alvar_msgs__msg__AlvarMarker
    std::shared_ptr<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlvarMarker_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlvarMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlvarMarker_

// alias to use template instance with default allocator
using AlvarMarker =
  ar_track_alvar_msgs::msg::AlvarMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ar_track_alvar_msgs

#endif  // AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKER__STRUCT_HPP_
