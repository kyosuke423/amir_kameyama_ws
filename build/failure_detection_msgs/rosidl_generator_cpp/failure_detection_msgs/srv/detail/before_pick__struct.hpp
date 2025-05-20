// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from failure_detection_msgs:srv/BeforePick.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__STRUCT_HPP_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__failure_detection_msgs__srv__BeforePick_Request __attribute__((deprecated))
#else
# define DEPRECATED__failure_detection_msgs__srv__BeforePick_Request __declspec(deprecated)
#endif

namespace failure_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BeforePick_Request_
{
  using Type = BeforePick_Request_<ContainerAllocator>;

  explicit BeforePick_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->id = "";
      this->stand = false;
    }
  }

  explicit BeforePick_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    id(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->id = "";
      this->stand = false;
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;
  using _stand_type =
    bool;
  _stand_type stand;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__stand(
    const bool & _arg)
  {
    this->stand = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__failure_detection_msgs__srv__BeforePick_Request
    std::shared_ptr<failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__failure_detection_msgs__srv__BeforePick_Request
    std::shared_ptr<failure_detection_msgs::srv::BeforePick_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BeforePick_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->stand != other.stand) {
      return false;
    }
    return true;
  }
  bool operator!=(const BeforePick_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BeforePick_Request_

// alias to use template instance with default allocator
using BeforePick_Request =
  failure_detection_msgs::srv::BeforePick_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace failure_detection_msgs


#ifndef _WIN32
# define DEPRECATED__failure_detection_msgs__srv__BeforePick_Response __attribute__((deprecated))
#else
# define DEPRECATED__failure_detection_msgs__srv__BeforePick_Response __declspec(deprecated)
#endif

namespace failure_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BeforePick_Response_
{
  using Type = BeforePick_Response_<ContainerAllocator>;

  explicit BeforePick_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit BeforePick_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__failure_detection_msgs__srv__BeforePick_Response
    std::shared_ptr<failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__failure_detection_msgs__srv__BeforePick_Response
    std::shared_ptr<failure_detection_msgs::srv::BeforePick_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BeforePick_Response_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const BeforePick_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BeforePick_Response_

// alias to use template instance with default allocator
using BeforePick_Response =
  failure_detection_msgs::srv::BeforePick_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace failure_detection_msgs

namespace failure_detection_msgs
{

namespace srv
{

struct BeforePick
{
  using Request = failure_detection_msgs::srv::BeforePick_Request;
  using Response = failure_detection_msgs::srv::BeforePick_Response;
};

}  // namespace srv

}  // namespace failure_detection_msgs

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__STRUCT_HPP_
