# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_nav_msgs:msg/PathInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathInfo(type):
    """Metaclass of message 'PathInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_nav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_nav_msgs.msg.PathInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathInfo(metaclass=Metaclass_PathInfo):
    """Message class 'PathInfo'."""

    __slots__ = [
        '_remove_id_set',
        '_success_rate',
    ]

    _fields_and_field_types = {
        'remove_id_set': 'sequence<string>',
        'success_rate': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.remove_id_set = kwargs.get('remove_id_set', [])
        self.success_rate = kwargs.get('success_rate', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.remove_id_set != other.remove_id_set:
            return False
        if self.success_rate != other.success_rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def remove_id_set(self):
        """Message field 'remove_id_set'."""
        return self._remove_id_set

    @remove_id_set.setter
    def remove_id_set(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'remove_id_set' field must be a set or sequence and each value of type 'str'"
        self._remove_id_set = value

    @builtins.property
    def success_rate(self):
        """Message field 'success_rate'."""
        return self._success_rate

    @success_rate.setter
    def success_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'success_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'success_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._success_rate = value
