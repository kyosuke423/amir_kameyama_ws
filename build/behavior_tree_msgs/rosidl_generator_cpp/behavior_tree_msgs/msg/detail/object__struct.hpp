// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'from_camera'
// Member 'from_base'
// Member 'from_odom'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'pixel_bottom_right'
// Member 'pixel_top_left'
// Member 'pixel_center'
#include "behavior_tree_msgs/msg/detail/pixel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__msg__Object __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : from_camera(_init),
    from_base(_init),
    from_odom(_init),
    pixel_bottom_right(_init),
    pixel_top_left(_init),
    pixel_center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->id = "";
      this->stand = false;
      this->probability = 0.0;
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : from_camera(_alloc, _init),
    from_base(_alloc, _init),
    from_odom(_alloc, _init),
    label(_alloc),
    id(_alloc),
    pixel_bottom_right(_alloc, _init),
    pixel_top_left(_alloc, _init),
    pixel_center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->id = "";
      this->stand = false;
      this->probability = 0.0;
    }
  }

  // field types and members
  using _from_camera_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _from_camera_type from_camera;
  using _from_base_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _from_base_type from_base;
  using _from_odom_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _from_odom_type from_odom;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _pixel_bottom_right_type =
    behavior_tree_msgs::msg::Pixel_<ContainerAllocator>;
  _pixel_bottom_right_type pixel_bottom_right;
  using _pixel_top_left_type =
    behavior_tree_msgs::msg::Pixel_<ContainerAllocator>;
  _pixel_top_left_type pixel_top_left;
  using _pixel_center_type =
    behavior_tree_msgs::msg::Pixel_<ContainerAllocator>;
  _pixel_center_type pixel_center;
  using _stand_type =
    bool;
  _stand_type stand;
  using _probability_type =
    double;
  _probability_type probability;

  // setters for named parameter idiom
  Type & set__from_camera(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->from_camera = _arg;
    return *this;
  }
  Type & set__from_base(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->from_base = _arg;
    return *this;
  }
  Type & set__from_odom(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->from_odom = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pixel_bottom_right(
    const behavior_tree_msgs::msg::Pixel_<ContainerAllocator> & _arg)
  {
    this->pixel_bottom_right = _arg;
    return *this;
  }
  Type & set__pixel_top_left(
    const behavior_tree_msgs::msg::Pixel_<ContainerAllocator> & _arg)
  {
    this->pixel_top_left = _arg;
    return *this;
  }
  Type & set__pixel_center(
    const behavior_tree_msgs::msg::Pixel_<ContainerAllocator> & _arg)
  {
    this->pixel_center = _arg;
    return *this;
  }
  Type & set__stand(
    const bool & _arg)
  {
    this->stand = _arg;
    return *this;
  }
  Type & set__probability(
    const double & _arg)
  {
    this->probability = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__msg__Object
    std::shared_ptr<behavior_tree_msgs::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__msg__Object
    std::shared_ptr<behavior_tree_msgs::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->from_camera != other.from_camera) {
      return false;
    }
    if (this->from_base != other.from_base) {
      return false;
    }
    if (this->from_odom != other.from_odom) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->pixel_bottom_right != other.pixel_bottom_right) {
      return false;
    }
    if (this->pixel_top_left != other.pixel_top_left) {
      return false;
    }
    if (this->pixel_center != other.pixel_center) {
      return false;
    }
    if (this->stand != other.stand) {
      return false;
    }
    if (this->probability != other.probability) {
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
  behavior_tree_msgs::msg::Object_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
