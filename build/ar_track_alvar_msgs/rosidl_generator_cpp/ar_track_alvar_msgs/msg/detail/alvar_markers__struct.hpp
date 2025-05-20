// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ar_track_alvar_msgs:msg/AlvarMarkers.idl
// generated code does not contain a copyright notice

#ifndef AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKERS__STRUCT_HPP_
#define AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKERS__STRUCT_HPP_

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
// Member 'markers'
#include "ar_track_alvar_msgs/msg/detail/alvar_marker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ar_track_alvar_msgs__msg__AlvarMarkers __attribute__((deprecated))
#else
# define DEPRECATED__ar_track_alvar_msgs__msg__AlvarMarkers __declspec(deprecated)
#endif

namespace ar_track_alvar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AlvarMarkers_
{
  using Type = AlvarMarkers_<ContainerAllocator>;

  explicit AlvarMarkers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit AlvarMarkers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _markers_type =
    std::vector<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>>>;
  _markers_type markers;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__markers(
    const std::vector<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ar_track_alvar_msgs::msg::AlvarMarker_<ContainerAllocator>>> & _arg)
  {
    this->markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator> *;
  using ConstRawPtr =
    const ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ar_track_alvar_msgs__msg__AlvarMarkers
    std::shared_ptr<ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ar_track_alvar_msgs__msg__AlvarMarkers
    std::shared_ptr<ar_track_alvar_msgs::msg::AlvarMarkers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlvarMarkers_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlvarMarkers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlvarMarkers_

// alias to use template instance with default allocator
using AlvarMarkers =
  ar_track_alvar_msgs::msg::AlvarMarkers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ar_track_alvar_msgs

#endif  // AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKERS__STRUCT_HPP_
