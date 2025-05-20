# generated from rosidl_generator_py/resource/_idl.py.em
# with input from observation_msgs:srv/GetObjects.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetObjects_Request(type):
    """Metaclass of message 'GetObjects_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ID': 0,
        'GROUP': 1,
        'ALL': 2,
        'ALL_COLLISION': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('observation_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'observation_msgs.srv.GetObjects_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_objects__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_objects__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_objects__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_objects__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_objects__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ID': cls.__constants['ID'],
            'GROUP': cls.__constants['GROUP'],
            'ALL': cls.__constants['ALL'],
            'ALL_COLLISION': cls.__constants['ALL_COLLISION'],
        }

    @property
    def ID(self):
        """Message constant 'ID'."""
        return Metaclass_GetObjects_Request.__constants['ID']

    @property
    def GROUP(self):
        """Message constant 'GROUP'."""
        return Metaclass_GetObjects_Request.__constants['GROUP']

    @property
    def ALL(self):
        """Message constant 'ALL'."""
        return Metaclass_GetObjects_Request.__constants['ALL']

    @property
    def ALL_COLLISION(self):
        """Message constant 'ALL_COLLISION'."""
        return Metaclass_GetObjects_Request.__constants['ALL_COLLISION']


class GetObjects_Request(metaclass=Metaclass_GetObjects_Request):
    """
    Message class 'GetObjects_Request'.

    Constants:
      ID
      GROUP
      ALL
      ALL_COLLISION
    """

    __slots__ = [
        '_id_set',
        '_command',
    ]

    _fields_and_field_types = {
        'id_set': 'sequence<string>',
        'command': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id_set = kwargs.get('id_set', [])
        self.command = kwargs.get('command', int())

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
        if self.id_set != other.id_set:
            return False
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def id_set(self):
        """Message field 'id_set'."""
        return self._id_set

    @id_set.setter
    def id_set(self, value):
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
                "The 'id_set' field must be a set or sequence and each value of type 'str'"
        self._id_set = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'command' field must be an integer in [-2147483648, 2147483647]"
        self._command = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetObjects_Response(type):
    """Metaclass of message 'GetObjects_Response'."""

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
            module = import_type_support('observation_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'observation_msgs.srv.GetObjects_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_objects__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_objects__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_objects__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_objects__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_objects__response

            from observation_msgs.msg import Object
            if Object.__class__._TYPE_SUPPORT is None:
                Object.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetObjects_Response(metaclass=Metaclass_GetObjects_Response):
    """Message class 'GetObjects_Response'."""

    __slots__ = [
        '_objects',
    ]

    _fields_and_field_types = {
        'objects': 'sequence<observation_msgs/Object>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['observation_msgs', 'msg'], 'Object')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.objects = kwargs.get('objects', [])

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
        if self.objects != other.objects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def objects(self):
        """Message field 'objects'."""
        return self._objects

    @objects.setter
    def objects(self, value):
        if __debug__:
            from observation_msgs.msg import Object
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
                 all(isinstance(v, Object) for v in value) and
                 True), \
                "The 'objects' field must be a set or sequence and each value of type 'Object'"
        self._objects = value


class Metaclass_GetObjects(type):
    """Metaclass of service 'GetObjects'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('observation_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'observation_msgs.srv.GetObjects')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_objects

            from observation_msgs.srv import _get_objects
            if _get_objects.Metaclass_GetObjects_Request._TYPE_SUPPORT is None:
                _get_objects.Metaclass_GetObjects_Request.__import_type_support__()
            if _get_objects.Metaclass_GetObjects_Response._TYPE_SUPPORT is None:
                _get_objects.Metaclass_GetObjects_Response.__import_type_support__()


class GetObjects(metaclass=Metaclass_GetObjects):
    from observation_msgs.srv._get_objects import GetObjects_Request as Request
    from observation_msgs.srv._get_objects import GetObjects_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
