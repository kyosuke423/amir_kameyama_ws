// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_nav_msgs:srv/SetObjCost.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__STRUCT_HPP_
#define MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/marker_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__srv__SetObjCost_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__srv__SetObjCost_Request __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetObjCost_Request_
{
  using Type = SetObjCost_Request_<ContainerAllocator>;

  explicit SetObjCost_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : markers(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->partial_update = false;
    }
  }

  explicit SetObjCost_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : markers(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->partial_update = false;
    }
  }

  // field types and members
  using _markers_type =
    visualization_msgs::msg::MarkerArray_<ContainerAllocator>;
  _markers_type markers;
  using _partial_update_type =
    bool;
  _partial_update_type partial_update;

  // setters for named parameter idiom
  Type & set__markers(
    const visualization_msgs::msg::MarkerArray_<ContainerAllocator> & _arg)
  {
    this->markers = _arg;
    return *this;
  }
  Type & set__partial_update(
    const bool & _arg)
  {
    this->partial_update = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__srv__SetObjCost_Request
    std::shared_ptr<my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__srv__SetObjCost_Request
    std::shared_ptr<my_nav_msgs::srv::SetObjCost_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetObjCost_Request_ & other) const
  {
    if (this->markers != other.markers) {
      return false;
    }
    if (this->partial_update != other.partial_update) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetObjCost_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetObjCost_Request_

// alias to use template instance with default allocator
using SetObjCost_Request =
  my_nav_msgs::srv::SetObjCost_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_nav_msgs


// Include directives for member types
// Member 'set_markers'
// already included above
// #include "visualization_msgs/msg/detail/marker_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__srv__SetObjCost_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__srv__SetObjCost_Response __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetObjCost_Response_
{
  using Type = SetObjCost_Response_<ContainerAllocator>;

  explicit SetObjCost_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : set_markers(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_string = "";
    }
  }

  explicit SetObjCost_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc),
    set_markers(_alloc, _init)
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
  using _set_markers_type =
    visualization_msgs::msg::MarkerArray_<ContainerAllocator>;
  _set_markers_type set_markers;

  // setters for named parameter idiom
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }
  Type & set__set_markers(
    const visualization_msgs::msg::MarkerArray_<ContainerAllocator> & _arg)
  {
    this->set_markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__srv__SetObjCost_Response
    std::shared_ptr<my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__srv__SetObjCost_Response
    std::shared_ptr<my_nav_msgs::srv::SetObjCost_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetObjCost_Response_ & other) const
  {
    if (this->error_string != other.error_string) {
      return false;
    }
    if (this->set_markers != other.set_markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetObjCost_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetObjCost_Response_

// alias to use template instance with default allocator
using SetObjCost_Response =
  my_nav_msgs::srv::SetObjCost_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_nav_msgs

namespace my_nav_msgs
{

namespace srv
{

struct SetObjCost
{
  using Request = my_nav_msgs::srv::SetObjCost_Request;
  using Response = my_nav_msgs::srv::SetObjCost_Response;
};

}  // namespace srv

}  // namespace my_nav_msgs

#endif  // MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__STRUCT_HPP_
