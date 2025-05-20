// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from behavior_tree_msgs:msg/Object.idl
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
#include "behavior_tree_msgs/msg/detail/object__struct.h"
#include "behavior_tree_msgs/msg/detail/object__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool behavior_tree_msgs__msg__pixel__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * behavior_tree_msgs__msg__pixel__convert_to_py(void * raw_ros_message);
bool behavior_tree_msgs__msg__pixel__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * behavior_tree_msgs__msg__pixel__convert_to_py(void * raw_ros_message);
bool behavior_tree_msgs__msg__pixel__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * behavior_tree_msgs__msg__pixel__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool behavior_tree_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("behavior_tree_msgs.msg._object.Object", full_classname_dest, 37) == 0);
  }
  behavior_tree_msgs__msg__Object * ros_message = _ros_message;
  {  // from_camera
    PyObject * field = PyObject_GetAttrString(_pymsg, "from_camera");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->from_camera)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // from_base
    PyObject * field = PyObject_GetAttrString(_pymsg, "from_base");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->from_base)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // from_odom
    PyObject * field = PyObject_GetAttrString(_pymsg, "from_odom");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->from_odom)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // label
    PyObject * field = PyObject_GetAttrString(_pymsg, "label");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->label, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pixel_bottom_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "pixel_bottom_right");
    if (!field) {
      return false;
    }
    if (!behavior_tree_msgs__msg__pixel__convert_from_py(field, &ros_message->pixel_bottom_right)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pixel_top_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "pixel_top_left");
    if (!field) {
      return false;
    }
    if (!behavior_tree_msgs__msg__pixel__convert_from_py(field, &ros_message->pixel_top_left)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pixel_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "pixel_center");
    if (!field) {
      return false;
    }
    if (!behavior_tree_msgs__msg__pixel__convert_from_py(field, &ros_message->pixel_center)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // stand
    PyObject * field = PyObject_GetAttrString(_pymsg, "stand");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stand = (Py_True == field);
    Py_DECREF(field);
  }
  {  // probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * behavior_tree_msgs__msg__object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Object */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("behavior_tree_msgs.msg._object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Object");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  behavior_tree_msgs__msg__Object * ros_message = (behavior_tree_msgs__msg__Object *)raw_ros_message;
  {  // from_camera
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->from_camera);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "from_camera", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // from_base
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->from_base);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "from_base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // from_odom
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->from_odom);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "from_odom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // label
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->label.data,
      strlen(ros_message->label.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pixel_bottom_right
    PyObject * field = NULL;
    field = behavior_tree_msgs__msg__pixel__convert_to_py(&ros_message->pixel_bottom_right);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pixel_bottom_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pixel_top_left
    PyObject * field = NULL;
    field = behavior_tree_msgs__msg__pixel__convert_to_py(&ros_message->pixel_top_left);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pixel_top_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pixel_center
    PyObject * field = NULL;
    field = behavior_tree_msgs__msg__pixel__convert_to_py(&ros_message->pixel_center);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pixel_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stand
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stand ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
