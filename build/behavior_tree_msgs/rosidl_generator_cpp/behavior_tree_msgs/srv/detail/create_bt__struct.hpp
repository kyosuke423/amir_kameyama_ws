// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:srv/CreateBT.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__CreateBT_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__CreateBT_Request __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CreateBT_Request_
{
  using Type = CreateBT_Request_<ContainerAllocator>;

  explicit CreateBT_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bt_name = "";
      this->command = "";
    }
  }

  explicit CreateBT_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bt_name(_alloc),
    command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bt_name = "";
      this->command = "";
    }
  }

  // field types and members
  using _bt_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bt_name_type bt_name;
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__bt_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bt_name = _arg;
    return *this;
  }
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__CreateBT_Request
    std::shared_ptr<behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__CreateBT_Request
    std::shared_ptr<behavior_tree_msgs::srv::CreateBT_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CreateBT_Request_ & other) const
  {
    if (this->bt_name != other.bt_name) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const CreateBT_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CreateBT_Request_

// alias to use template instance with default allocator
using CreateBT_Request =
  behavior_tree_msgs::srv::CreateBT_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__CreateBT_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__CreateBT_Response __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CreateBT_Response_
{
  using Type = CreateBT_Response_<ContainerAllocator>;

  explicit CreateBT_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_string = "";
    }
  }

  explicit CreateBT_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_string = "";
    }
  }

  // field types and members
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_string_type error_string;

  // setters for named parameter idiom
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__CreateBT_Response
    std::shared_ptr<behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__CreateBT_Response
    std::shared_ptr<behavior_tree_msgs::srv::CreateBT_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CreateBT_Response_ & other) const
  {
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const CreateBT_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CreateBT_Response_

// alias to use template instance with default allocator
using CreateBT_Response =
  behavior_tree_msgs::srv::CreateBT_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs

namespace behavior_tree_msgs
{

namespace srv
{

struct CreateBT
{
  using Request = behavior_tree_msgs::srv::CreateBT_Request;
  using Response = behavior_tree_msgs::srv::CreateBT_Response;
};

}  // namespace srv

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__STRUCT_HPP_
