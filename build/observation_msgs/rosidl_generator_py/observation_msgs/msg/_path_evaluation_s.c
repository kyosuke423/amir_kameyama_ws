// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from observation_msgs:msg/PathEvaluation.idl
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
#include "observation_msgs/msg/detail/path_evaluation__struct.h"
#include "observation_msgs/msg/detail/path_evaluation__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool observation_msgs__msg__path_evaluation__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("observation_msgs.msg._path_evaluation.PathEvaluation", full_classname_dest, 52) == 0);
  }
  observation_msgs__msg__PathEvaluation * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // max_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_cost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_cost = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ave_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "ave_cost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ave_cost = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // unknown_area
    PyObject * field = PyObject_GetAttrString(_pymsg, "unknown_area");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->unknown_area = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * observation_msgs__msg__path_evaluation__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PathEvaluation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("observation_msgs.msg._path_evaluation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PathEvaluation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  observation_msgs__msg__PathEvaluation * ros_message = (observation_msgs__msg__PathEvaluation *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_cost
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->max_cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ave_cost
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ave_cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ave_cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unknown_area
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->unknown_area ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unknown_area", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
