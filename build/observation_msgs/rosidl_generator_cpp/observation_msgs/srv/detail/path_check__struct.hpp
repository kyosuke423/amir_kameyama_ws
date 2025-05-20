// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from observation_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_HPP_
#define OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__observation_msgs__srv__PathCheck_Request __attribute__((deprecated))
#else
# define DEPRECATED__observation_msgs__srv__PathCheck_Request __declspec(deprecated)
#endif

namespace observation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PathCheck_Request_
{
  using Type = PathCheck_Request_<ContainerAllocator>;

  explicit PathCheck_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init)
  {
    (void)_init;
  }

  explicit PathCheck_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    observation_msgs::srv::PathCheck_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const observation_msgs::srv::PathCheck_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observation_msgs::srv::PathCheck_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observation_msgs::srv::PathCheck_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::PathCheck_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::PathCheck_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::PathCheck_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::PathCheck_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observation_msgs::srv::PathCheck_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observation_msgs::srv::PathCheck_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observation_msgs__srv__PathCheck_Request
    std::shared_ptr<observation_msgs::srv::PathCheck_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observation_msgs__srv__PathCheck_Request
    std::shared_ptr<observation_msgs::srv::PathCheck_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathCheck_Request_ & other) const
  {
    if (this->path != other.path) {
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
  observation_msgs::srv::PathCheck_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace observation_msgs


#ifndef _WIN32
# define DEPRECATED__observation_msgs__srv__PathCheck_Response __attribute__((deprecated))
#else
# define DEPRECATED__observation_msgs__srv__PathCheck_Response __declspec(deprecated)
#endif

namespace observation_msgs
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
      this->error_string = "";
      this->anomaly_score = 0;
    }
  }

  explicit PathCheck_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_string = "";
      this->anomaly_score = 0;
    }
  }

  // field types and members
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_string_type error_string;
  using _anomaly_score_type =
    int8_t;
  _anomaly_score_type anomaly_score;

  // setters for named parameter idiom
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }
  Type & set__anomaly_score(
    const int8_t & _arg)
  {
    this->anomaly_score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    observation_msgs::srv::PathCheck_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const observation_msgs::srv::PathCheck_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observation_msgs::srv::PathCheck_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observation_msgs::srv::PathCheck_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::PathCheck_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::PathCheck_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::PathCheck_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::PathCheck_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observation_msgs::srv::PathCheck_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observation_msgs::srv::PathCheck_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observation_msgs__srv__PathCheck_Response
    std::shared_ptr<observation_msgs::srv::PathCheck_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observation_msgs__srv__PathCheck_Response
    std::shared_ptr<observation_msgs::srv::PathCheck_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathCheck_Response_ & other) const
  {
    if (this->error_string != other.error_string) {
      return false;
    }
    if (this->anomaly_score != other.anomaly_score) {
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
  observation_msgs::srv::PathCheck_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace observation_msgs

namespace observation_msgs
{

namespace srv
{

struct PathCheck
{
  using Request = observation_msgs::srv::PathCheck_Request;
  using Response = observation_msgs::srv::PathCheck_Response;
};

}  // namespace srv

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__STRUCT_HPP_
