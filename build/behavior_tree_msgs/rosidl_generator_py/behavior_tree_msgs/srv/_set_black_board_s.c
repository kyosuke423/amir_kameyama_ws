// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from behavior_tree_msgs:srv/SetBlackBoard.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "behavior_tree_msgs/srv/detail/set_black_board__struct.h"
#include "behavior_tree_msgs/srv/detail/set_black_board__functions.h"

bool behavior_tree_msgs__msg__bb_message__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * behavior_tree_msgs__msg__bb_message__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool behavior_tree_msgs__srv__set_black_board__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("behavior_tree_msgs.srv._set_black_board.SetBlackBoard_Request", full_classname_dest, 61) == 0);
  }
  behavior_tree_msgs__srv__SetBlackBoard_Request * ros_message = _ros_message;
  {  // bb_message
    PyObject * field = PyObject_GetAttrString(_pymsg, "bb_message");
    if (!field) {
      return false;
    }
    if (!behavior_tree_msgs__msg__bb_message__convert_from_py(field, &ros_message->bb_message)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * behavior_tree_msgs__srv__set_black_board__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetBlackBoard_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("behavior_tree_msgs.srv._set_black_board");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetBlackBoard_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  behavior_tree_msgs__srv__SetBlackBoard_Request * ros_message = (behavior_tree_msgs__srv__SetBlackBoard_Request *)raw_ros_message;
  {  // bb_message
    PyObject * field = NULL;
    field = behavior_tree_msgs__msg__bb_message__convert_to_py(&ros_message->bb_message);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bb_message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/set_black_board__struct.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/set_black_board__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool behavior_tree_msgs__srv__set_black_board__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("behavior_tree_msgs.srv._set_black_board.SetBlackBoard_Response", full_classname_dest, 62) == 0);
  }
  behavior_tree_msgs__srv__SetBlackBoard_Response * ros_message = _ros_message;
  {  // behavior_tree
    PyObject * field = PyObject_GetAttrString(_pymsg, "behavior_tree");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->behavior_tree, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * behavior_tree_msgs__srv__set_black_board__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetBlackBoard_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("behavior_tree_msgs.srv._set_black_board");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetBlackBoard_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  behavior_tree_msgs__srv__SetBlackBoard_Response * ros_message = (behavior_tree_msgs__srv__SetBlackBoard_Response *)raw_ros_message;
  {  // behavior_tree
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->behavior_tree.data,
      strlen(ros_message->behavior_tree.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "behavior_tree", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
