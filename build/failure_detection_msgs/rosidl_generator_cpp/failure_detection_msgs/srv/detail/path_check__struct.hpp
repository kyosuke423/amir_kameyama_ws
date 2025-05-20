// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from failure_detection_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_HPP_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'paths'
#include "my_nav_msgs/msg/detail/path_with_condition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__failure_detection_msgs__srv__PathCheck_Request __attribute__((deprecated))
#else
# define DEPRECATED__failure_detection_msgs__srv__PathCheck_Request __declspec(deprecated)
#endif

namespace failure_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PathCheck_Request_
{
  using Type = PathCheck_Request_<ContainerAllocator>;

  explicit PathCheck_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PathCheck_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _paths_type =
    std::vector<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>>>;
  _paths_type paths;

  // setters for named parameter idiom
  Type & set__paths(
    const std::vector<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>>> & _arg)
  {
    this->paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__failure_detection_msgs__srv__PathCheck_Request
    std::shared_ptr<failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__failure_detection_msgs__srv__PathCheck_Request
    std::shared_ptr<failure_detection_msgs::srv::PathCheck_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathCheck_Request_ & other) const
  {
    if (this->paths != other.paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathCheck_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathCheck_Request_

// alias to use template instance with default allocator
using PathCheck_Request =
  failure_detection_msgs::srv::PathCheck_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace failure_detection_msgs


// Include directives for member types
// Member 'info_set'
#include "my_nav_msgs/msg/detail/path_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__failure_detection_msgs__srv__PathCheck_Response __attribute__((deprecated))
#else
# define DEPRECATED__failure_detection_msgs__srv__PathCheck_Response __declspec(deprecated)
#endif

namespace failure_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PathCheck_Response_
{
  using Type = PathCheck_Response_<ContainerAllocator>;

  explicit PathCheck_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_strings = "";
    }
  }

  explicit PathCheck_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_strings(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_strings = "";
    }
  }

  // field types and members
  using _error_strings_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_strings_type error_strings;
  using _info_set_type =
    std::vector<my_nav_msgs::msg::PathInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_nav_msgs::msg::PathInfo_<ContainerAllocator>>>;
  _info_set_type info_set;

  // setters for named parameter idiom
  Type & set__error_strings(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_strings = _arg;
    return *this;
  }
  Type & set__info_set(
    const std::vector<my_nav_msgs::msg::PathInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_nav_msgs::msg::PathInfo_<ContainerAllocator>>> & _arg)
  {
    this->info_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__failure_detection_msgs__srv__PathCheck_Response
    std::shared_ptr<failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__failure_detection_msgs__srv__PathCheck_Response
    std::shared_ptr<failure_detection_msgs::srv::PathCheck_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathCheck_Response_ & other) const
  {
    if (this->error_strings != other.error_strings) {
      return false;
    }
    if (this->info_set != other.info_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathCheck_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathCheck_Response_

// alias to use template instance with default allocator
using PathCheck_Response =
  failure_detection_msgs::srv::PathCheck_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace failure_detection_msgs

namespace failure_detection_msgs
{

namespace srv
{

struct PathCheck
{
  using Request = failure_detection_msgs::srv::PathCheck_Request;
  using Response = failure_detection_msgs::srv::PathCheck_Response;
};

}  // namespace srv

}  // namespace failure_detection_msgs

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_HPP_
