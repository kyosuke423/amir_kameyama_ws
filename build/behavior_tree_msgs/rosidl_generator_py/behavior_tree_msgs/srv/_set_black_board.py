# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_tree_msgs:srv/SetBlackBoard.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetBlackBoard_Request(type):
    """Metaclass of message 'SetBlackBoard_Request'."""

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
                'behavior_tree_msgs.srv.SetBlackBoard_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_black_board__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_black_board__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_black_board__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_black_board__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_black_board__request

            from behavior_tree_msgs.msg import BBMessage
            if BBMessage.__class__._TYPE_SUPPORT is None:
                BBMessage.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetBlackBoard_Request(metaclass=Metaclass_SetBlackBoard_Request):
    """Message class 'SetBlackBoard_Request'."""

    __slots__ = [
        '_bb_message',
    ]

    _fields_and_field_types = {
        'bb_message': 'behavior_tree_msgs/BBMessage',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['behavior_tree_msgs', 'msg'], 'BBMessage'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from behavior_tree_msgs.msg import BBMessage
        self.bb_message = kwargs.get('bb_message', BBMessage())

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
        if self.bb_message != other.bb_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bb_message(self):
        """Message field 'bb_message'."""
        return self._bb_message

    @bb_message.setter
    def bb_message(self, value):
        if __debug__:
            from behavior_tree_msgs.msg import BBMessage
            assert \
                isinstance(value, BBMessage), \
                "The 'bb_message' field must be a sub message of type 'BBMessage'"
        self._bb_message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetBlackBoard_Response(type):
    """Metaclass of message 'SetBlackBoard_Response'."""

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
                'behavior_tree_msgs.srv.SetBlackBoard_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_black_board__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_black_board__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_black_board__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_black_board__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_black_board__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetBlackBoard_Response(metaclass=Metaclass_SetBlackBoard_Response):
    """Message class 'SetBlackBoard_Response'."""

    __slots__ = [
        '_behavior_tree',
    ]

    _fields_and_field_types = {
        'behavior_tree': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.behavior_tree = kwargs.get('behavior_tree', str())

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
        if self.behavior_tree != other.behavior_tree:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def behavior_tree(self):
        """Message field 'behavior_tree'."""
        return self._behavior_tree

    @behavior_tree.setter
    def behavior_tree(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'behavior_tree' field must be of type 'str'"
        self._behavior_tree = value


class Metaclass_SetBlackBoard(type):
    """Metaclass of service 'SetBlackBoard'."""

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
                'behavior_tree_msgs.srv.SetBlackBoard')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_black_board

            from behavior_tree_msgs.srv import _set_black_board
            if _set_black_board.Metaclass_SetBlackBoard_Request._TYPE_SUPPORT is None:
                _set_black_board.Metaclass_SetBlackBoard_Request.__import_type_support__()
            if _set_black_board.Metaclass_SetBlackBoard_Response._TYPE_SUPPORT is None:
                _set_black_board.Metaclass_SetBlackBoard_Response.__import_type_support__()


class SetBlackBoard(metaclass=Metaclass_SetBlackBoard):
    from behavior_tree_msgs.srv._set_black_board import SetBlackBoard_Request as Request
    from behavior_tree_msgs.srv._set_black_board import SetBlackBoard_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
