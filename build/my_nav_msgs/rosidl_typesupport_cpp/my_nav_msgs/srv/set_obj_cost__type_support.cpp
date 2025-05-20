// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_nav_msgs:srv/SetObjCost.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_nav_msgs/srv/detail/set_obj_cost__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetObjCost_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetObjCost_Request_type_support_ids_t;

static const _SetObjCost_Request_type_support_ids_t _SetObjCost_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetObjCost_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetObjCost_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetObjCost_Request_type_support_symbol_names_t _SetObjCost_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_nav_msgs, srv, SetObjCost_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_nav_msgs, srv, SetObjCost_Request)),
  }
};

typedef struct _SetObjCost_Request_type_support_data_t
{
  void * data[2];
} _SetObjCost_Request_type_support_data_t;

static _SetObjCost_Request_type_support_data_t _SetObjCost_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetObjCost_Request_message_typesupport_map = {
  2,
  "my_nav_msgs",
  &_SetObjCost_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetObjCost_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetObjCost_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetObjCost_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetObjCost_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_nav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_nav_msgs::srv::SetObjCost_Request>()
{
  return &::my_nav_msgs::srv::rosidl_typesupport_cpp::SetObjCost_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_nav_msgs, srv, SetObjCost_Request)() {
  return get_message_type_support_handle<my_nav_msgs::srv::SetObjCost_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_nav_msgs/srv/detail/set_obj_cost__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetObjCost_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetObjCost_Response_type_support_ids_t;

static const _SetObjCost_Response_type_support_ids_t _SetObjCost_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetObjCost_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetObjCost_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetObjCost_Response_type_support_symbol_names_t _SetObjCost_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_nav_msgs, srv, SetObjCost_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_nav_msgs, srv, SetObjCost_Response)),
  }
};

typedef struct _SetObjCost_Response_type_support_data_t
{
  void * data[2];
} _SetObjCost_Response_type_support_data_t;

static _SetObjCost_Response_type_support_data_t _SetObjCost_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetObjCost_Response_message_typesupport_map = {
  2,
  "my_nav_msgs",
  &_SetObjCost_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetObjCost_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetObjCost_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetObjCost_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetObjCost_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_nav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_nav_msgs::srv::SetObjCost_Response>()
{
  return &::my_nav_msgs::srv::rosidl_typesupport_cpp::SetObjCost_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_nav_msgs, srv, SetObjCost_Response)() {
  return get_message_type_support_handle<my_nav_msgs::srv::SetObjCost_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_nav_msgs/srv/detail/set_obj_cost__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetObjCost_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetObjCost_type_support_ids_t;

static const _SetObjCost_type_support_ids_t _SetObjCost_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetObjCost_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetObjCost_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetObjCost_type_support_symbol_names_t _SetObjCost_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_nav_msgs, srv, SetObjCost)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_nav_msgs, srv, SetObjCost)),
  }
};

typedef struct _SetObjCost_type_support_data_t
{
  void * data[2];
} _SetObjCost_type_support_data_t;

static _SetObjCost_type_support_data_t _SetObjCost_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetObjCost_service_typesupport_map = {
  2,
  "my_nav_msgs",
  &_SetObjCost_service_typesupport_ids.typesupport_identifier[0],
  &_SetObjCost_service_typesupport_symbol_names.symbol_name[0],
  &_SetObjCost_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetObjCost_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetObjCost_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_nav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_nav_msgs::srv::SetObjCost>()
{
  return &::my_nav_msgs::srv::rosidl_typesupport_cpp::SetObjCost_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_nav_msgs, srv, SetObjCost)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_nav_msgs::srv::SetObjCost>();
}

#ifdef __cplusplus
}
#endif
