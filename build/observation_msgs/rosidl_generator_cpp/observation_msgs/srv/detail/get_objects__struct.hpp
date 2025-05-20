// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from observation_msgs:srv/GetObjects.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__STRUCT_HPP_
#define OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__observation_msgs__srv__GetObjects_Request __attribute__((deprecated))
#else
# define DEPRECATED__observation_msgs__srv__GetObjects_Request __declspec(deprecated)
#endif

namespace observation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjects_Request_
{
  using Type = GetObjects_Request_<ContainerAllocator>;

  explicit GetObjects_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0l;
    }
  }

  explicit GetObjects_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0l;
    }
  }

  // field types and members
  using _id_set_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _id_set_type id_set;
  using _command_type =
    int32_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__id_set(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->id_set = _arg;
    return *this;
  }
  Type & set__command(
    const int32_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t ID =
    0;
  static constexpr int32_t GROUP =
    1;
  static constexpr int32_t ALL =
    2;
  static constexpr int32_t ALL_COLLISION =
    3;

  // pointer types
  using RawPtr =
    observation_msgs::srv::GetObjects_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const observation_msgs::srv::GetObjects_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observation_msgs::srv::GetObjects_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observation_msgs::srv::GetObjects_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::GetObjects_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::GetObjects_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::GetObjects_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::GetObjects_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observation_msgs::srv::GetObjects_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observation_msgs::srv::GetObjects_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observation_msgs__srv__GetObjects_Request
    std::shared_ptr<observation_msgs::srv::GetObjects_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observation_msgs__srv__GetObjects_Request
    std::shared_ptr<observation_msgs::srv::GetObjects_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjects_Request_ & other) const
  {
    if (this->id_set != other.id_set) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjects_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjects_Request_

// alias to use template instance with default allocator
using GetObjects_Request =
  observation_msgs::srv::GetObjects_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t GetObjects_Request_<ContainerAllocator>::ID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t GetObjects_Request_<ContainerAllocator>::GROUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t GetObjects_Request_<ContainerAllocator>::ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t GetObjects_Request_<ContainerAllocator>::ALL_COLLISION;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace observation_msgs


// Include directives for member types
// Member 'objects'
#include "observation_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__observation_msgs__srv__GetObjects_Response __attribute__((deprecated))
#else
# define DEPRECATED__observation_msgs__srv__GetObjects_Response __declspec(deprecated)
#endif

namespace observation_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjects_Response_
{
  using Type = GetObjects_Response_<ContainerAllocator>;

  explicit GetObjects_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetObjects_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    observation_msgs::srv::GetObjects_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const observation_msgs::srv::GetObjects_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<observation_msgs::srv::GetObjects_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<observation_msgs::srv::GetObjects_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::GetObjects_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::GetObjects_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      observation_msgs::srv::GetObjects_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<observation_msgs::srv::GetObjects_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<observation_msgs::srv::GetObjects_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<observation_msgs::srv::GetObjects_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__observation_msgs__srv__GetObjects_Response
    std::shared_ptr<observation_msgs::srv::GetObjects_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__observation_msgs__srv__GetObjects_Response
    std::shared_ptr<observation_msgs::srv::GetObjects_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjects_Response_ & other) const
  {
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjects_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjects_Response_

// alias to use template instance with default allocator
using GetObjects_Response =
  observation_msgs::srv::GetObjects_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace observation_msgs

namespace observation_msgs
{

namespace srv
{

struct GetObjects
{
  using Request = observation_msgs::srv::GetObjects_Request;
  using Response = observation_msgs::srv::GetObjects_Response;
};

}  // namespace srv

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__STRUCT_HPP_
