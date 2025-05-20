// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from observation_msgs:srv/SetObjects.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__SET_OBJECTS__STRUCT_HPP_
#define OBSERVATION_MSGS__SRV__DETAIL__SET_OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'objects'
#include "observation_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__observation_msgs__srv__SetObjects_Request __attribute__((deprecated))
#else
# define DEPRECATED__observation_msgs__srv__SetObjects_Request __declspec(deprecated)
#endif

namespace observation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetObjects_Request_
{
  using Type = SetObjects_Request_<ContainerAllocator>;

  explicit SetObjects_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetObjects_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _objects_type =
    std::vector<observation_msgs::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<observation_msgs::msg::Object_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__objects(
    const std::vector<observation_msgs::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<observation_msgs::msg::Object_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    observation_msgs::srv::SetObjects_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const observation_msgs::srv::SetObjects_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observation_msgs::srv::SetObjects_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observation_msgs::srv::SetObjects_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::SetObjects_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::SetObjects_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::SetObjects_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::SetObjects_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observation_msgs::srv::SetObjects_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observation_msgs::srv::SetObjects_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observation_msgs__srv__SetObjects_Request
    std::shared_ptr<observation_msgs::srv::SetObjects_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observation_msgs__srv__SetObjects_Request
    std::shared_ptr<observation_msgs::srv::SetObjects_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetObjects_Request_ & other) const
  {
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetObjects_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetObjects_Request_

// alias to use template instance with default allocator
using SetObjects_Request =
  observation_msgs::srv::SetObjects_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace observation_msgs


#ifndef _WIN32
# define DEPRECATED__observation_msgs__srv__SetObjects_Response __attribute__((deprecated))
#else
# define DEPRECATED__observation_msgs__srv__SetObjects_Response __declspec(deprecated)
#endif

namespace observation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetObjects_Response_
{
  using Type = SetObjects_Response_<ContainerAllocator>;

  explicit SetObjects_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_string = "";
    }
  }

  explicit SetObjects_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    observation_msgs::srv::SetObjects_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const observation_msgs::srv::SetObjects_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observation_msgs::srv::SetObjects_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observation_msgs::srv::SetObjects_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::SetObjects_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::SetObjects_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::SetObjects_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::SetObjects_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observation_msgs::srv::SetObjects_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observation_msgs::srv::SetObjects_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observation_msgs__srv__SetObjects_Response
    std::shared_ptr<observation_msgs::srv::SetObjects_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observation_msgs__srv__SetObjects_Response
    std::shared_ptr<observation_msgs::srv::SetObjects_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetObjects_Response_ & other) const
  {
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetObjects_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetObjects_Response_

// alias to use template instance with default allocator
using SetObjects_Response =
  observation_msgs::srv::SetObjects_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace observation_msgs

namespace observation_msgs
{

namespace srv
{

struct SetObjects
{
  using Request = observation_msgs::srv::SetObjects_Request;
  using Response = observation_msgs::srv::SetObjects_Response;
};

}  // namespace srv

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__SRV__DETAIL__SET_OBJECTS__STRUCT_HPP_
