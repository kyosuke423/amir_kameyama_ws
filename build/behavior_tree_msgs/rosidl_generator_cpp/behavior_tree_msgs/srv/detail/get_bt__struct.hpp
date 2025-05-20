// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:srv/GetBT.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__GetBT_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__GetBT_Request __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBT_Request_
{
  using Type = GetBT_Request_<ContainerAllocator>;

  explicit GetBT_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->bt = "";
      this->goal_condition = "";
      this->failed_nood_id = 0;
    }
  }

  explicit GetBT_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    bt(_alloc),
    goal_condition(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->bt = "";
      this->goal_condition = "";
      this->failed_nood_id = 0;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _bt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bt_type bt;
  using _goal_condition_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _goal_condition_type goal_condition;
  using _goal_conditions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _goal_conditions_type goal_conditions;
  using _failed_nood_id_type =
    int16_t;
  _failed_nood_id_type failed_nood_id;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__bt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bt = _arg;
    return *this;
  }
  Type & set__goal_condition(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->goal_condition = _arg;
    return *this;
  }
  Type & set__goal_conditions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->goal_conditions = _arg;
    return *this;
  }
  Type & set__failed_nood_id(
    const int16_t & _arg)
  {
    this->failed_nood_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__GetBT_Request
    std::shared_ptr<behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__GetBT_Request
    std::shared_ptr<behavior_tree_msgs::srv::GetBT_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBT_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->bt != other.bt) {
      return false;
    }
    if (this->goal_condition != other.goal_condition) {
      return false;
    }
    if (this->goal_conditions != other.goal_conditions) {
      return false;
    }
    if (this->failed_nood_id != other.failed_nood_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBT_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBT_Request_

// alias to use template instance with default allocator
using GetBT_Request =
  behavior_tree_msgs::srv::GetBT_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__GetBT_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__GetBT_Response __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBT_Response_
{
  using Type = GetBT_Response_<ContainerAllocator>;

  explicit GetBT_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_tree = "";
    }
  }

  explicit GetBT_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : behavior_tree(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_tree = "";
    }
  }

  // field types and members
  using _behavior_tree_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_tree_type behavior_tree;

  // setters for named parameter idiom
  Type & set__behavior_tree(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_tree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__GetBT_Response
    std::shared_ptr<behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__GetBT_Response
    std::shared_ptr<behavior_tree_msgs::srv::GetBT_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBT_Response_ & other) const
  {
    if (this->behavior_tree != other.behavior_tree) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBT_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBT_Response_

// alias to use template instance with default allocator
using GetBT_Response =
  behavior_tree_msgs::srv::GetBT_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs

namespace behavior_tree_msgs
{

namespace srv
{

struct GetBT
{
  using Request = behavior_tree_msgs::srv::GetBT_Request;
  using Response = behavior_tree_msgs::srv::GetBT_Response;
};

}  // namespace srv

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__STRUCT_HPP_
