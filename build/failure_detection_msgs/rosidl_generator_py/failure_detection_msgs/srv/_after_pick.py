# generated from rosidl_generator_py/resource/_idl.py.em
# with input from failure_detection_msgs:srv/AfterPick.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AfterPick_Request(type):
    """Metaclass of message 'AfterPick_Request'."""

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
                'failure_detection_msgs.srv.AfterPick_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__after_pick__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__after_pick__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__after_pick__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__after_pick__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__after_pick__request

            from moveit_msgs.msg import AttachedCollisionObject
            if AttachedCollisionObject.__class__._TYPE_SUPPORT is None:
                AttachedCollisionObject.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AfterPick_Request(metaclass=Metaclass_AfterPick_Request):
    """Message class 'AfterPick_Request'."""

    __slots__ = [
        '_bt_node_name',
        '_error_string',
        '_grasped_object',
    ]

    _fields_and_field_types = {
        'bt_node_name': 'string',
        'error_string': 'string',
        'grasped_object': 'moveit_msgs/AttachedCollisionObject',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'AttachedCollisionObject'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bt_node_name = kwargs.get('bt_node_name', str())
        self.error_string = kwargs.get('error_string', str())
        from moveit_msgs.msg import AttachedCollisionObject
        self.grasped_object = kwargs.get('grasped_object', AttachedCollisionObject())

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
        if self.bt_node_name != other.bt_node_name:
            return False
        if self.error_string != other.error_string:
            return False
        if self.grasped_object != other.grasped_object:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bt_node_name(self):
        """Message field 'bt_node_name'."""
        return self._bt_node_name

    @bt_node_name.setter
    def bt_node_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bt_node_name' field must be of type 'str'"
        self._bt_node_name = value

    @builtins.property
    def error_string(self):
        """Message field 'error_string'."""
        return self._error_string

    @error_string.setter
    def error_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_string' field must be of type 'str'"
        self._error_string = value

    @builtins.property
    def grasped_object(self):
        """Message field 'grasped_object'."""
        return self._grasped_object

    @grasped_object.setter
    def grasped_object(self, value):
        if __debug__:
            from moveit_msgs.msg import AttachedCollisionObject
            assert \
                isinstance(value, AttachedCollisionObject), \
                "The 'grasped_object' field must be a sub message of type 'AttachedCollisionObject'"
        self._grasped_object = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AfterPick_Response(type):
    """Metaclass of message 'AfterPick_Response'."""

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
                'failure_detection_msgs.srv.AfterPick_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__after_pick__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__after_pick__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__after_pick__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__after_pick__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__after_pick__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AfterPick_Response(metaclass=Metaclass_AfterPick_Response):
    """Message class 'AfterPick_Response'."""

    __slots__ = [
        '_command',
    ]

    _fields_and_field_types = {
        'command': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())

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
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value


class Metaclass_AfterPick(type):
    """Metaclass of service 'AfterPick'."""

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
                'failure_detection_msgs.srv.AfterPick')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__after_pick

            from failure_detection_msgs.srv import _after_pick
            if _after_pick.Metaclass_AfterPick_Request._TYPE_SUPPORT is None:
                _after_pick.Metaclass_AfterPick_Request.__import_type_support__()
            if _after_pick.Metaclass_AfterPick_Response._TYPE_SUPPORT is None:
                _after_pick.Metaclass_AfterPick_Response.__import_type_support__()


class AfterPick(metaclass=Metaclass_AfterPick):
    from failure_detection_msgs.srv._after_pick import AfterPick_Request as Request
    from failure_detection_msgs.srv._after_pick import AfterPick_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
