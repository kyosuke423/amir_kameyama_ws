# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_tree_msgs:srv/GetBlackBoard.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetBlackBoard_Request(type):
    """Metaclass of message 'GetBlackBoard_Request'."""

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
            module = import_type_support('behavior_tree_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_tree_msgs.srv.GetBlackBoard_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_black_board__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_black_board__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_black_board__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_black_board__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_black_board__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBlackBoard_Request(metaclass=Metaclass_GetBlackBoard_Request):
    """Message class 'GetBlackBoard_Request'."""

    __slots__ = [
        '_pose_names',
        '_path_names',
        '_float_array_names',
    ]

    _fields_and_field_types = {
        'pose_names': 'sequence<string>',
        'path_names': 'sequence<string>',
        'float_array_names': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pose_names = kwargs.get('pose_names', [])
        self.path_names = kwargs.get('path_names', [])
        self.float_array_names = kwargs.get('float_array_names', [])

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
        if self.pose_names != other.pose_names:
            return False
        if self.path_names != other.path_names:
            return False
        if self.float_array_names != other.float_array_names:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose_names(self):
        """Message field 'pose_names'."""
        return self._pose_names

    @pose_names.setter
    def pose_names(self, value):
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
                "The 'pose_names' field must be a set or sequence and each value of type 'str'"
        self._pose_names = value

    @builtins.property
    def path_names(self):
        """Message field 'path_names'."""
        return self._path_names

    @path_names.setter
    def path_names(self, value):
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
                "The 'path_names' field must be a set or sequence and each value of type 'str'"
        self._path_names = value

    @builtins.property
    def float_array_names(self):
        """Message field 'float_array_names'."""
        return self._float_array_names

    @float_array_names.setter
    def float_array_names(self, value):
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
                "The 'float_array_names' field must be a set or sequence and each value of type 'str'"
        self._float_array_names = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetBlackBoard_Response(type):
    """Metaclass of message 'GetBlackBoard_Response'."""

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
            module = import_type_support('behavior_tree_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_tree_msgs.srv.GetBlackBoard_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_black_board__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_black_board__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_black_board__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_black_board__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_black_board__response

            from behavior_tree_msgs.msg import BBFloat64Array
            if BBFloat64Array.__class__._TYPE_SUPPORT is None:
                BBFloat64Array.__class__.__import_type_support__()

            from behavior_tree_msgs.msg import BBPath
            if BBPath.__class__._TYPE_SUPPORT is None:
                BBPath.__class__.__import_type_support__()

            from behavior_tree_msgs.msg import BBPose
            if BBPose.__class__._TYPE_SUPPORT is None:
                BBPose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBlackBoard_Response(metaclass=Metaclass_GetBlackBoard_Response):
    """Message class 'GetBlackBoard_Response'."""

    __slots__ = [
        '_poses',
        '_paths',
        '_float_array_set',
    ]

    _fields_and_field_types = {
        'poses': 'sequence<behavior_tree_msgs/BBPose>',
        'paths': 'sequence<behavior_tree_msgs/BBPath>',
        'float_array_set': 'sequence<behavior_tree_msgs/BBFloat64Array>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['behavior_tree_msgs', 'msg'], 'BBPose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['behavior_tree_msgs', 'msg'], 'BBPath')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['behavior_tree_msgs', 'msg'], 'BBFloat64Array')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.poses = kwargs.get('poses', [])
        self.paths = kwargs.get('paths', [])
        self.float_array_set = kwargs.get('float_array_set', [])

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
        if self.poses != other.poses:
            return False
        if self.paths != other.paths:
            return False
        if self.float_array_set != other.float_array_set:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if __debug__:
            from behavior_tree_msgs.msg import BBPose
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
                 all(isinstance(v, BBPose) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'BBPose'"
        self._poses = value

    @builtins.property
    def paths(self):
        """Message field 'paths'."""
        return self._paths

    @paths.setter
    def paths(self, value):
        if __debug__:
            from behavior_tree_msgs.msg import BBPath
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
                 all(isinstance(v, BBPath) for v in value) and
                 True), \
                "The 'paths' field must be a set or sequence and each value of type 'BBPath'"
        self._paths = value

    @builtins.property
    def float_array_set(self):
        """Message field 'float_array_set'."""
        return self._float_array_set

    @float_array_set.setter
    def float_array_set(self, value):
        if __debug__:
            from behavior_tree_msgs.msg import BBFloat64Array
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
                 all(isinstance(v, BBFloat64Array) for v in value) and
                 True), \
                "The 'float_array_set' field must be a set or sequence and each value of type 'BBFloat64Array'"
        self._float_array_set = value


class Metaclass_GetBlackBoard(type):
    """Metaclass of service 'GetBlackBoard'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('behavior_tree_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_tree_msgs.srv.GetBlackBoard')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_black_board

            from behavior_tree_msgs.srv import _get_black_board
            if _get_black_board.Metaclass_GetBlackBoard_Request._TYPE_SUPPORT is None:
                _get_black_board.Metaclass_GetBlackBoard_Request.__import_type_support__()
            if _get_black_board.Metaclass_GetBlackBoard_Response._TYPE_SUPPORT is None:
                _get_black_board.Metaclass_GetBlackBoard_Response.__import_type_support__()


class GetBlackBoard(metaclass=Metaclass_GetBlackBoard):
    from behavior_tree_msgs.srv._get_black_board import GetBlackBoard_Request as Request
    from behavior_tree_msgs.srv._get_black_board import GetBlackBoard_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
