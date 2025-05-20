// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from failure_detection_msgs:srv/AfterPick.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__STRUCT_HPP_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'grasped_object'
#include "moveit_msgs/msg/detail/attached_collision_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__failure_detection_msgs__srv__AfterPick_Request __attribute__((deprecated))
#else
# define DEPRECATED__failure_detection_msgs__srv__AfterPick_Request __declspec(deprecated)
#endif

namespace failure_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AfterPick_Request_
{
  using Type = AfterPick_Request_<ContainerAllocator>;

  explicit AfterPick_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grasped_object(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bt_node_name = "";
      this->error_string = "";
    }
  }

  explicit AfterPick_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bt_node_name(_alloc),
    error_string(_alloc),
    grasped_object(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bt_node_name = "";
      this->error_string = "";
    }
  }

  // field types and members
  using _bt_node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bt_node_name_type bt_node_name;
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_string_type error_string;
  using _grasped_object_type =
    moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>;
  _grasped_object_type grasped_object;

  // setters for named parameter idiom
  Type & set__bt_node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bt_node_name = _arg;
    return *this;
  }
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }
  Type & set__grasped_object(
    const moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator> & _arg)
  {
    this->grasped_object = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__failure_detection_msgs__srv__AfterPick_Request
    std::shared_ptr<failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__failure_detection_msgs__srv__AfterPick_Request
    std::shared_ptr<failure_detection_msgs::srv::AfterPick_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AfterPick_Request_ & other) const
  {
    if (this->bt_node_name != other.bt_node_name) {
      return false;
    }
    if (this->error_string != other.error_string) {
      return false;
    }
    if (this->grasped_object != other.grasped_object) {
      return false;
    }
    return true;
  }
  bool operator!=(const AfterPick_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AfterPick_Request_

// alias to use template instance with default allocator
using AfterPick_Request =
  failure_detection_msgs::srv::AfterPick_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace failure_detection_msgs


#ifndef _WIN32
# define DEPRECATED__failure_detection_msgs__srv__AfterPick_Response __attribute__((deprecated))
#else
# define DEPRECATED__failure_detection_msgs__srv__AfterPick_Response __declspec(deprecated)
#endif

namespace failure_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AfterPick_Response_
{
  using Type = AfterPick_Response_<ContainerAllocator>;

  explicit AfterPick_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit AfterPick_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__failure_detection_msgs__srv__AfterPick_Response
    std::shared_ptr<failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__failure_detection_msgs__srv__AfterPick_Response
    std::shared_ptr<failure_detection_msgs::srv::AfterPick_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AfterPick_Response_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const AfterPick_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AfterPick_Response_

// alias to use template instance with default allocator
using AfterPick_Response =
  failure_detection_msgs::srv::AfterPick_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace failure_detection_msgs

namespace failure_detection_msgs
{

namespace srv
{

struct AfterPick
{
  using Request = failure_detection_msgs::srv::AfterPick_Request;
  using Response = failure_detection_msgs::srv::AfterPick_Response;
};

}  // namespace srv

}  // namespace failure_detection_msgs

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__STRUCT_HPP_
