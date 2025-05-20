// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_tree_msgs:srv/GetBlackBoard.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__STRUCT_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__GetBlackBoard_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__GetBlackBoard_Request __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBlackBoard_Request_
{
  using Type = GetBlackBoard_Request_<ContainerAllocator>;

  explicit GetBlackBoard_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetBlackBoard_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pose_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _pose_names_type pose_names;
  using _path_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _path_names_type path_names;
  using _float_array_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _float_array_names_type float_array_names;

  // setters for named parameter idiom
  Type & set__pose_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->pose_names = _arg;
    return *this;
  }
  Type & set__path_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->path_names = _arg;
    return *this;
  }
  Type & set__float_array_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->float_array_names = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__GetBlackBoard_Request
    std::shared_ptr<behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__GetBlackBoard_Request
    std::shared_ptr<behavior_tree_msgs::srv::GetBlackBoard_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBlackBoard_Request_ & other) const
  {
    if (this->pose_names != other.pose_names) {
      return false;
    }
    if (this->path_names != other.path_names) {
      return false;
    }
    if (this->float_array_names != other.float_array_names) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBlackBoard_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBlackBoard_Request_

// alias to use template instance with default allocator
using GetBlackBoard_Request =
  behavior_tree_msgs::srv::GetBlackBoard_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs


// Include directives for member types
// Member 'poses'
#include "behavior_tree_msgs/msg/detail/bb_pose__struct.hpp"
// Member 'paths'
#include "behavior_tree_msgs/msg/detail/bb_path__struct.hpp"
// Member 'float_array_set'
#include "behavior_tree_msgs/msg/detail/bb_float64_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_tree_msgs__srv__GetBlackBoard_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_tree_msgs__srv__GetBlackBoard_Response __declspec(deprecated)
#endif

namespace behavior_tree_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBlackBoard_Response_
{
  using Type = GetBlackBoard_Response_<ContainerAllocator>;

  explicit GetBlackBoard_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetBlackBoard_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _poses_type =
    std::vector<behavior_tree_msgs::msg::BBPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBPose_<ContainerAllocator>>>;
  _poses_type poses;
  using _paths_type =
    std::vector<behavior_tree_msgs::msg::BBPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBPath_<ContainerAllocator>>>;
  _paths_type paths;
  using _float_array_set_type =
    std::vector<behavior_tree_msgs::msg::BBFloat64Array_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBFloat64Array_<ContainerAllocator>>>;
  _float_array_set_type float_array_set;

  // setters for named parameter idiom
  Type & set__poses(
    const std::vector<behavior_tree_msgs::msg::BBPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBPose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__paths(
    const std::vector<behavior_tree_msgs::msg::BBPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBPath_<ContainerAllocator>>> & _arg)
  {
    this->paths = _arg;
    return *this;
  }
  Type & set__float_array_set(
    const std::vector<behavior_tree_msgs::msg::BBFloat64Array_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<behavior_tree_msgs::msg::BBFloat64Array_<ContainerAllocator>>> & _arg)
  {
    this->float_array_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_tree_msgs__srv__GetBlackBoard_Response
    std::shared_ptr<behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_tree_msgs__srv__GetBlackBoard_Response
    std::shared_ptr<behavior_tree_msgs::srv::GetBlackBoard_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBlackBoard_Response_ & other) const
  {
    if (this->poses != other.poses) {
      return false;
    }
    if (this->paths != other.paths) {
      return false;
    }
    if (this->float_array_set != other.float_array_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBlackBoard_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBlackBoard_Response_

// alias to use template instance with default allocator
using GetBlackBoard_Response =
  behavior_tree_msgs::srv::GetBlackBoard_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_tree_msgs

namespace behavior_tree_msgs
{

namespace srv
{

struct GetBlackBoard
{
  using Request = behavior_tree_msgs::srv::GetBlackBoard_Request;
  using Response = behavior_tree_msgs::srv::GetBlackBoard_Response;
};

}  // namespace srv

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__STRUCT_HPP_
