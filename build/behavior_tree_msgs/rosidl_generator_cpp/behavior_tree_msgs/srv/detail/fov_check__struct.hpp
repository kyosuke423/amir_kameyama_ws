// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:srv/FovCheck.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__FovCheck_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__FovCheck_Request __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FovCheck_Request_
{
  using Type = FovCheck_Request_<ContainerAllocator>;

  explicit FovCheck_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
    }
  }

  explicit FovCheck_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_alloc, _init),
    object_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
    }
  }

  // field types and members
  using _target_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _target_position_type target_position;
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;

  // setters for named parameter idiom
  Type & set__target_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->target_position = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__FovCheck_Request
    std::shared_ptr<behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__FovCheck_Request
    std::shared_ptr<behavior_tree_msgs::srv::FovCheck_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FovCheck_Request_ & other) const
  {
    if (this->target_position != other.target_position) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FovCheck_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FovCheck_Request_

// alias to use template instance with default allocator
using FovCheck_Request =
  behavior_tree_msgs::srv::FovCheck_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__FovCheck_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__FovCheck_Response __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FovCheck_Response_
{
  using Type = FovCheck_Response_<ContainerAllocator>;

  explicit FovCheck_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->in_fov = false;
    }
  }

  explicit FovCheck_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->in_fov = false;
    }
  }

  // field types and members
  using _in_fov_type =
    bool;
  _in_fov_type in_fov;

  // setters for named parameter idiom
  Type & set__in_fov(
    const bool & _arg)
  {
    this->in_fov = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__FovCheck_Response
    std::shared_ptr<behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__FovCheck_Response
    std::shared_ptr<behavior_tree_msgs::srv::FovCheck_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FovCheck_Response_ & other) const
  {
    if (this->in_fov != other.in_fov) {
      return false;
    }
    return true;
  }
  bool operator!=(const FovCheck_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FovCheck_Response_

// alias to use template instance with default allocator
using FovCheck_Response =
  behavior_tree_msgs::srv::FovCheck_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs

namespace behavior_tree_msgs
{

namespace srv
{

struct FovCheck
{
  using Request = behavior_tree_msgs::srv::FovCheck_Request;
  using Response = behavior_tree_msgs::srv::FovCheck_Response;
};

}  // namespace srv

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__STRUCT_HPP_
