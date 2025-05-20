// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:srv/GetBlackBoard.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/srv/detail/get_black_board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBlackBoard_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose_names
  {
    if (msg.pose_names.size() == 0) {
      out << "pose_names: []";
    } else {
      out << "pose_names: [";
      size_t pending_items = msg.pose_names.size();
      for (auto item : msg.pose_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_names
  {
    if (msg.path_names.size() == 0) {
      out << "path_names: []";
    } else {
      out << "path_names: [";
      size_t pending_items = msg.path_names.size();
      for (auto item : msg.path_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float_array_names
  {
    if (msg.float_array_names.size() == 0) {
      out << "float_array_names: []";
    } else {
      out << "float_array_names: [";
      size_t pending_items = msg.float_array_names.size();
      for (auto item : msg.float_array_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBlackBoard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_names.size() == 0) {
      out << "pose_names: []\n";
    } else {
      out << "pose_names:\n";
      for (auto item : msg.pose_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: path_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_names.size() == 0) {
      out << "path_names: []\n";
    } else {
      out << "path_names:\n";
      for (auto item : msg.path_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float_array_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float_array_names.size() == 0) {
      out << "float_array_names: []\n";
    } else {
      out << "float_array_names:\n";
      for (auto item : msg.float_array_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBlackBoard_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::srv::GetBlackBoard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::GetBlackBoard_Request & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::GetBlackBoard_Request>()
{
  return "behavior_tree_msgs::srv::GetBlackBoard_Request";
}

template<>
inline const char * name<behavior_tree_msgs::srv::GetBlackBoard_Request>()
{
  return "behavior_tree_msgs/srv/GetBlackBoard_Request";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::GetBlackBoard_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::GetBlackBoard_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::srv::GetBlackBoard_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'poses'
#include "behavior_tree_msgs/msg/detail/bb_pose__traits.hpp"
// Member 'paths'
#include "behavior_tree_msgs/msg/detail/bb_path__traits.hpp"
// Member 'float_array_set'
#include "behavior_tree_msgs/msg/detail/bb_float64_array__traits.hpp"

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBlackBoard_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: paths
  {
    if (msg.paths.size() == 0) {
      out << "paths: []";
    } else {
      out << "paths: [";
      size_t pending_items = msg.paths.size();
      for (auto item : msg.paths) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float_array_set
  {
    if (msg.float_array_set.size() == 0) {
      out << "float_array_set: []";
    } else {
      out << "float_array_set: [";
      size_t pending_items = msg.float_array_set.size();
      for (auto item : msg.float_array_set) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBlackBoard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.paths.size() == 0) {
      out << "paths: []\n";
    } else {
      out << "paths:\n";
      for (auto item : msg.paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: float_array_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float_array_set.size() == 0) {
      out << "float_array_set: []\n";
    } else {
      out << "float_array_set:\n";
      for (auto item : msg.float_array_set) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBlackBoard_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::srv::GetBlackBoard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::GetBlackBoard_Response & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::GetBlackBoard_Response>()
{
  return "behavior_tree_msgs::srv::GetBlackBoard_Response";
}

template<>
inline const char * name<behavior_tree_msgs::srv::GetBlackBoard_Response>()
{
  return "behavior_tree_msgs/srv/GetBlackBoard_Response";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::GetBlackBoard_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::GetBlackBoard_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::srv::GetBlackBoard_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_tree_msgs::srv::GetBlackBoard>()
{
  return "behavior_tree_msgs::srv::GetBlackBoard";
}

template<>
inline const char * name<behavior_tree_msgs::srv::GetBlackBoard>()
{
  return "behavior_tree_msgs/srv/GetBlackBoard";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::GetBlackBoard>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_tree_msgs::srv::GetBlackBoard_Request>::value &&
    has_fixed_size<behavior_tree_msgs::srv::GetBlackBoard_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::GetBlackBoard>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_tree_msgs::srv::GetBlackBoard_Request>::value &&
    has_bounded_size<behavior_tree_msgs::srv::GetBlackBoard_Response>::value
  >
{
};

template<>
struct is_service<behavior_tree_msgs::srv::GetBlackBoard>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_tree_msgs::srv::GetBlackBoard_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_tree_msgs::srv::GetBlackBoard_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BLACK_BOARD__TRAITS_HPP_
