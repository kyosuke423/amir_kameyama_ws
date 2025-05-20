// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from observation_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define OBSERVATION_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_

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
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'collision_object'
#include "moveit_msgs/msg/detail/collision_object__struct.hpp"
// Member 'attached_collision_object'
#include "moveit_msgs/msg/detail/attached_collision_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__observation_msgs__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__observation_msgs__msg__Object __declspec(deprecated)
#endif

namespace observation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    collision_object(_init),
    attached_collision_object(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->obj_group = "";
      this->status = 0l;
      this->msg_type = 0l;
      this->weight = 0.0;
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    collision_object(_alloc, _init),
    attached_collision_object(_alloc, _init),
    id(_alloc),
    obj_group(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->obj_group = "";
      this->status = 0l;
      this->msg_type = 0l;
      this->weight = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _collision_object_type =
    moveit_msgs::msg::CollisionObject_<ContainerAllocator>;
  _collision_object_type collision_object;
  using _attached_collision_object_type =
    moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>;
  _attached_collision_object_type attached_collision_object;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _obj_group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _obj_group_type obj_group;
  using _status_type =
    int32_t;
  _status_type status;
  using _msg_type_type =
    int32_t;
  _msg_type_type msg_type;
  using _weight_type =
    double;
  _weight_type weight;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__collision_object(
    const moveit_msgs::msg::CollisionObject_<ContainerAllocator> & _arg)
  {
    this->collision_object = _arg;
    return *this;
  }
  Type & set__attached_collision_object(
    const moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator> & _arg)
  {
    this->attached_collision_object = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__obj_group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->obj_group = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__msg_type(
    const int32_t & _arg)
  {
    this->msg_type = _arg;
    return *this;
  }
  Type & set__weight(
    const double & _arg)
  {
    this->weight = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t UNKNOWN =
    0;
  static constexpr int32_t KNOWN =
    1;
  static constexpr int32_t LOST =
    2;
  static constexpr int32_t POSE_KNOWN =
    3;
  static constexpr int32_t ATTACHED =
    4;
  static constexpr int32_t POINT =
    0;
  static constexpr int32_t POSE =
    1;
  static constexpr int32_t COLLISION =
    2;
  static constexpr int32_t ATTACHED_COLLISION =
    3;

  // pointer types
  using RawPtr =
    observation_msgs::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const observation_msgs::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observation_msgs::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observation_msgs::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observation_msgs::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observation_msgs::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observation_msgs::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observation_msgs::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observation_msgs__msg__Object
    std::shared_ptr<observation_msgs::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observation_msgs__msg__Object
    std::shared_ptr<observation_msgs::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->collision_object != other.collision_object) {
      return false;
    }
    if (this->attached_collision_object != other.attached_collision_object) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->obj_group != other.obj_group) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->msg_type != other.msg_type) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  observation_msgs::msg::Object_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Object_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Object_<ContainerAllocator>::KNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Object_<ContainerAllocator>::LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Object_<ContainerAllocator>::POSE_KNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Object_<ContainerAllocator>::ATTACHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Object_<ContainerAllocator>::POINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Object_<ContainerAllocator>::POSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Object_<ContainerAllocator>::COLLISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Object_<ContainerAllocator>::ATTACHED_COLLISION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
