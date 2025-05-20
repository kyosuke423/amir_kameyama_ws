# generated from rosidl_generator_py/resource/_idl.py.em
# with input from failure_detection_msgs:srv/PathCheck.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathCheck_Request(type):
    """Metaclass of message 'PathCheck_Request'."""

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
            module = import_type_support('failure_detection_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'failure_detection_msgs.srv.PathCheck_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__path_check__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__path_check__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__path_check__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__path_check__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__path_check__request

            from my_nav_msgs.msg import PathWithCondition
            if PathWithCondition.__class__._TYPE_SUPPORT is None:
                PathWithCondition.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathCheck_Request(metaclass=Metaclass_PathCheck_Request):
    """Message class 'PathCheck_Request'."""

    __slots__ = [
        '_paths',
    ]

    _fields_and_field_types = {
        'paths': 'sequence<my_nav_msgs/PathWithCondition>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['my_nav_msgs', 'msg'], 'PathWithCondition')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.paths = kwargs.get('paths', [])

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
        if self.paths != other.paths:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def paths(self):
        """Message field 'paths'."""
        return self._paths

    @paths.setter
    def paths(self, value):
        if __debug__:
            from my_nav_msgs.msg import PathWithCondition
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
                 all(isinstance(v, PathWithCondition) for v in value) and
                 True), \
                "The 'paths' field must be a set or sequence and each value of type 'PathWithCondition'"
        self._paths = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathCheck_Response(type):
    """Metaclass of message 'PathCheck_Response'."""

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
            module = import_type_support('failure_detection_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'failure_detection_msgs.srv.PathCheck_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__path_check__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__path_check__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__path_check__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__path_check__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__path_check__response

            from my_nav_msgs.msg import PathInfo
            if PathInfo.__class__._TYPE_SUPPORT is None:
                PathInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathCheck_Response(metaclass=Metaclass_PathCheck_Response):
    """Message class 'PathCheck_Response'."""

    __slots__ = [
        '_error_strings',
        '_info_set',
    ]

    _fields_and_field_types = {
        'error_strings': 'string',
        'info_set': 'sequence<my_nav_msgs/PathInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['my_nav_msgs', 'msg'], 'PathInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error_strings = kwargs.get('error_strings', str())
        self.info_set = kwargs.get('info_set', [])

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
        if self.error_strings != other.error_strings:
            return False
        if self.info_set != other.info_set:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def error_strings(self):
        """Message field 'error_strings'."""
        return self._error_strings

    @error_strings.setter
    def error_strings(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_strings' field must be of type 'str'"
        self._error_strings = value

    @builtins.property
    def info_set(self):
        """Message field 'info_set'."""
        return self._info_set

    @info_set.setter
    def info_set(self, value):
        if __debug__:
            from my_nav_msgs.msg import PathInfo
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
                 all(isinstance(v, PathInfo) for v in value) and
                 True), \
                "The 'info_set' field must be a set or sequence and each value of type 'PathInfo'"
        self._info_set = value


class Metaclass_PathCheck(type):
    """Metaclass of service 'PathCheck'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('failure_detection_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'failure_detection_msgs.srv.PathCheck')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__path_check

            from failure_detection_msgs.srv import _path_check
            if _path_check.Metaclass_PathCheck_Request._TYPE_SUPPORT is None:
                _path_check.Metaclass_PathCheck_Request.__import_type_support__()
            if _path_check.Metaclass_PathCheck_Response._TYPE_SUPPORT is None:
                _path_check.Metaclass_PathCheck_Response.__import_type_support__()


class PathCheck(metaclass=Metaclass_PathCheck):
    from failure_detection_msgs.srv._path_check import PathCheck_Request as Request
    from failure_detection_msgs.srv._path_check import PathCheck_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
