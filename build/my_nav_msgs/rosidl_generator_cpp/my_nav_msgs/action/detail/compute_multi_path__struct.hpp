// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_nav_msgs:action/ComputeMultiPath.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__STRUCT_HPP_
#define MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal'
// Member 'start'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Goal __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Goal __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputeMultiPath_Goal_
{
  using Type = ComputeMultiPath_Goal_<ContainerAllocator>;

  explicit ComputeMultiPath_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_init),
    start(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planner_id = "";
      this->use_start = false;
    }
  }

  explicit ComputeMultiPath_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_alloc, _init),
    start(_alloc, _init),
    planner_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planner_id = "";
      this->use_start = false;
    }
  }

  // field types and members
  using _goal_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_type goal;
  using _start_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _start_type start;
  using _planner_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planner_id_type planner_id;
  using _use_start_type =
    bool;
  _use_start_type use_start;

  // setters for named parameter idiom
  Type & set__goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__start(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__planner_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planner_id = _arg;
    return *this;
  }
  Type & set__use_start(
    const bool & _arg)
  {
    this->use_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Goal
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Goal
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeMultiPath_Goal_ & other) const
  {
    if (this->goal != other.goal) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->planner_id != other.planner_id) {
      return false;
    }
    if (this->use_start != other.use_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeMultiPath_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeMultiPath_Goal_

// alias to use template instance with default allocator
using ComputeMultiPath_Goal =
  my_nav_msgs::action::ComputeMultiPath_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_nav_msgs


// Include directives for member types
// Member 'multi_path'
#include "my_nav_msgs/msg/detail/path_with_condition__struct.hpp"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Result __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Result __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputeMultiPath_Result_
{
  using Type = ComputeMultiPath_Result_<ContainerAllocator>;

  explicit ComputeMultiPath_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planning_time(_init)
  {
    (void)_init;
  }

  explicit ComputeMultiPath_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planning_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _multi_path_type =
    std::vector<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>>>;
  _multi_path_type multi_path;
  using _planning_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _planning_time_type planning_time;

  // setters for named parameter idiom
  Type & set__multi_path(
    const std::vector<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_nav_msgs::msg::PathWithCondition_<ContainerAllocator>>> & _arg)
  {
    this->multi_path = _arg;
    return *this;
  }
  Type & set__planning_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->planning_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Result
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Result
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeMultiPath_Result_ & other) const
  {
    if (this->multi_path != other.multi_path) {
      return false;
    }
    if (this->planning_time != other.planning_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeMultiPath_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeMultiPath_Result_

// alias to use template instance with default allocator
using ComputeMultiPath_Result =
  my_nav_msgs::action::ComputeMultiPath_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_nav_msgs


#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Feedback __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputeMultiPath_Feedback_
{
  using Type = ComputeMultiPath_Feedback_<ContainerAllocator>;

  explicit ComputeMultiPath_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ComputeMultiPath_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Feedback
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_Feedback
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeMultiPath_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeMultiPath_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeMultiPath_Feedback_

// alias to use template instance with default allocator
using ComputeMultiPath_Feedback =
  my_nav_msgs::action::ComputeMultiPath_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_nav_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "my_nav_msgs/action/detail/compute_multi_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_SendGoal_Request __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputeMultiPath_SendGoal_Request_
{
  using Type = ComputeMultiPath_SendGoal_Request_<ContainerAllocator>;

  explicit ComputeMultiPath_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ComputeMultiPath_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const my_nav_msgs::action::ComputeMultiPath_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_SendGoal_Request
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_SendGoal_Request
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeMultiPath_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeMultiPath_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeMultiPath_SendGoal_Request_

// alias to use template instance with default allocator
using ComputeMultiPath_SendGoal_Request =
  my_nav_msgs::action::ComputeMultiPath_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_nav_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_SendGoal_Response __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputeMultiPath_SendGoal_Response_
{
  using Type = ComputeMultiPath_SendGoal_Response_<ContainerAllocator>;

  explicit ComputeMultiPath_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ComputeMultiPath_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_SendGoal_Response
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_SendGoal_Response
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeMultiPath_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeMultiPath_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeMultiPath_SendGoal_Response_

// alias to use template instance with default allocator
using ComputeMultiPath_SendGoal_Response =
  my_nav_msgs::action::ComputeMultiPath_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_nav_msgs

namespace my_nav_msgs
{

namespace action
{

struct ComputeMultiPath_SendGoal
{
  using Request = my_nav_msgs::action::ComputeMultiPath_SendGoal_Request;
  using Response = my_nav_msgs::action::ComputeMultiPath_SendGoal_Response;
};

}  // namespace action

}  // namespace my_nav_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_GetResult_Request __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputeMultiPath_GetResult_Request_
{
  using Type = ComputeMultiPath_GetResult_Request_<ContainerAllocator>;

  explicit ComputeMultiPath_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ComputeMultiPath_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_GetResult_Request
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_GetResult_Request
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeMultiPath_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeMultiPath_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeMultiPath_GetResult_Request_

// alias to use template instance with default allocator
using ComputeMultiPath_GetResult_Request =
  my_nav_msgs::action::ComputeMultiPath_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_nav_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "my_nav_msgs/action/detail/compute_multi_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_GetResult_Response __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputeMultiPath_GetResult_Response_
{
  using Type = ComputeMultiPath_GetResult_Response_<ContainerAllocator>;

  explicit ComputeMultiPath_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ComputeMultiPath_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const my_nav_msgs::action::ComputeMultiPath_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_GetResult_Response
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_GetResult_Response
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeMultiPath_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeMultiPath_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeMultiPath_GetResult_Response_

// alias to use template instance with default allocator
using ComputeMultiPath_GetResult_Response =
  my_nav_msgs::action::ComputeMultiPath_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_nav_msgs

namespace my_nav_msgs
{

namespace action
{

struct ComputeMultiPath_GetResult
{
  using Request = my_nav_msgs::action::ComputeMultiPath_GetResult_Request;
  using Response = my_nav_msgs::action::ComputeMultiPath_GetResult_Response;
};

}  // namespace action

}  // namespace my_nav_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "my_nav_msgs/action/detail/compute_multi_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_nav_msgs__action__ComputeMultiPath_FeedbackMessage __declspec(deprecated)
#endif

namespace my_nav_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputeMultiPath_FeedbackMessage_
{
  using Type = ComputeMultiPath_FeedbackMessage_<ContainerAllocator>;

  explicit ComputeMultiPath_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ComputeMultiPath_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const my_nav_msgs::action::ComputeMultiPath_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_FeedbackMessage
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_nav_msgs__action__ComputeMultiPath_FeedbackMessage
    std::shared_ptr<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeMultiPath_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeMultiPath_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeMultiPath_FeedbackMessage_

// alias to use template instance with default allocator
using ComputeMultiPath_FeedbackMessage =
  my_nav_msgs::action::ComputeMultiPath_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_nav_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace my_nav_msgs
{

namespace action
{

struct ComputeMultiPath
{
  /// The goal message defined in the action definition.
  using Goal = my_nav_msgs::action::ComputeMultiPath_Goal;
  /// The result message defined in the action definition.
  using Result = my_nav_msgs::action::ComputeMultiPath_Result;
  /// The feedback message defined in the action definition.
  using Feedback = my_nav_msgs::action::ComputeMultiPath_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = my_nav_msgs::action::ComputeMultiPath_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = my_nav_msgs::action::ComputeMultiPath_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = my_nav_msgs::action::ComputeMultiPath_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ComputeMultiPath ComputeMultiPath;

}  // namespace action

}  // namespace my_nav_msgs

#endif  // MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__STRUCT_HPP_
