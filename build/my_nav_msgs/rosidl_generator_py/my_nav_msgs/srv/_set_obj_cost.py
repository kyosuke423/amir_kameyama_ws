# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_nav_msgs:srv/SetObjCost.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetObjCost_Request(type):
    """Metaclass of message 'SetObjCost_Request'."""

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
                'my_nav_msgs.srv.SetObjCost_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_obj_cost__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_obj_cost__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_obj_cost__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_obj_cost__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_obj_cost__request

            from visualization_msgs.msg import MarkerArray
            if MarkerArray.__class__._TYPE_SUPPORT is None:
                MarkerArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetObjCost_Request(metaclass=Metaclass_SetObjCost_Request):
    """Message class 'SetObjCost_Request'."""

    __slots__ = [
        '_markers',
        '_partial_update',
    ]

    _fields_and_field_types = {
        'markers': 'visualization_msgs/MarkerArray',
        'partial_update': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'MarkerArray'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from visualization_msgs.msg import MarkerArray
        self.markers = kwargs.get('markers', MarkerArray())
        self.partial_update = kwargs.get('partial_update', bool())

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
        if self.markers != other.markers:
            return False
        if self.partial_update != other.partial_update:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def markers(self):
        """Message field 'markers'."""
        return self._markers

    @markers.setter
    def markers(self, value):
        if __debug__:
            from visualization_msgs.msg import MarkerArray
            assert \
                isinstance(value, MarkerArray), \
                "The 'markers' field must be a sub message of type 'MarkerArray'"
        self._markers = value

    @builtins.property
    def partial_update(self):
        """Message field 'partial_update'."""
        return self._partial_update

    @partial_update.setter
    def partial_update(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'partial_update' field must be of type 'bool'"
        self._partial_update = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetObjCost_Response(type):
    """Metaclass of message 'SetObjCost_Response'."""

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
                'my_nav_msgs.srv.SetObjCost_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_obj_cost__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_obj_cost__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_obj_cost__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_obj_cost__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_obj_cost__response

            from visualization_msgs.msg import MarkerArray
            if MarkerArray.__class__._TYPE_SUPPORT is None:
                MarkerArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetObjCost_Response(metaclass=Metaclass_SetObjCost_Response):
    """Message class 'SetObjCost_Response'."""

    __slots__ = [
        '_error_string',
        '_set_markers',
    ]

    _fields_and_field_types = {
        'error_string': 'string',
        'set_markers': 'visualization_msgs/MarkerArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'MarkerArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error_string = kwargs.get('error_string', str())
        from visualization_msgs.msg import MarkerArray
        self.set_markers = kwargs.get('set_markers', MarkerArray())

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
        if self.error_string != other.error_string:
            return False
        if self.set_markers != other.set_markers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def set_markers(self):
        """Message field 'set_markers'."""
        return self._set_markers

    @set_markers.setter
    def set_markers(self, value):
        if __debug__:
            from visualization_msgs.msg import MarkerArray
            assert \
                isinstance(value, MarkerArray), \
                "The 'set_markers' field must be a sub message of type 'MarkerArray'"
        self._set_markers = value


class Metaclass_SetObjCost(type):
    """Metaclass of service 'SetObjCost'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_nav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_nav_msgs.srv.SetObjCost')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_obj_cost

            from my_nav_msgs.srv import _set_obj_cost
            if _set_obj_cost.Metaclass_SetObjCost_Request._TYPE_SUPPORT is None:
                _set_obj_cost.Metaclass_SetObjCost_Request.__import_type_support__()
            if _set_obj_cost.Metaclass_SetObjCost_Response._TYPE_SUPPORT is None:
                _set_obj_cost.Metaclass_SetObjCost_Response.__import_type_support__()


class SetObjCost(metaclass=Metaclass_SetObjCost):
    from my_nav_msgs.srv._set_obj_cost import SetObjCost_Request as Request
    from my_nav_msgs.srv._set_obj_cost import SetObjCost_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
