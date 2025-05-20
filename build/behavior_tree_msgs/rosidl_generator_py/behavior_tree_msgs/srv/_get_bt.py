# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_tree_msgs:srv/GetBT.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetBT_Request(type):
    """Metaclass of message 'GetBT_Request'."""

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
                'behavior_tree_msgs.srv.GetBT_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_bt__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_bt__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_bt__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_bt__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_bt__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBT_Request(metaclass=Metaclass_GetBT_Request):
    """Message class 'GetBT_Request'."""

    __slots__ = [
        '_type',
        '_bt',
        '_goal_condition',
        '_goal_conditions',
        '_failed_nood_id',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'bt': 'string',
        'goal_condition': 'string',
        'goal_conditions': 'sequence<string>',
        'failed_nood_id': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.bt = kwargs.get('bt', str())
        self.goal_condition = kwargs.get('goal_condition', str())
        self.goal_conditions = kwargs.get('goal_conditions', [])
        self.failed_nood_id = kwargs.get('failed_nood_id', int())

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
        if self.type != other.type:
            return False
        if self.bt != other.bt:
            return False
        if self.goal_condition != other.goal_condition:
            return False
        if self.goal_conditions != other.goal_conditions:
            return False
        if self.failed_nood_id != other.failed_nood_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def bt(self):
        """Message field 'bt'."""
        return self._bt

    @bt.setter
    def bt(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bt' field must be of type 'str'"
        self._bt = value

    @builtins.property
    def goal_condition(self):
        """Message field 'goal_condition'."""
        return self._goal_condition

    @goal_condition.setter
    def goal_condition(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'goal_condition' field must be of type 'str'"
        self._goal_condition = value

    @builtins.property
    def goal_conditions(self):
        """Message field 'goal_conditions'."""
        return self._goal_conditions

    @goal_conditions.setter
    def goal_conditions(self, value):
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
                "The 'goal_conditions' field must be a set or sequence and each value of type 'str'"
        self._goal_conditions = value

    @builtins.property
    def failed_nood_id(self):
        """Message field 'failed_nood_id'."""
        return self._failed_nood_id

    @failed_nood_id.setter
    def failed_nood_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failed_nood_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'failed_nood_id' field must be an integer in [-32768, 32767]"
        self._failed_nood_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetBT_Response(type):
    """Metaclass of message 'GetBT_Response'."""

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
                'behavior_tree_msgs.srv.GetBT_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_bt__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_bt__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_bt__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_bt__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_bt__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBT_Response(metaclass=Metaclass_GetBT_Response):
    """Message class 'GetBT_Response'."""

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


class Metaclass_GetBT(type):
    """Metaclass of service 'GetBT'."""

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
                'behavior_tree_msgs.srv.GetBT')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_bt

            from behavior_tree_msgs.srv import _get_bt
            if _get_bt.Metaclass_GetBT_Request._TYPE_SUPPORT is None:
                _get_bt.Metaclass_GetBT_Request.__import_type_support__()
            if _get_bt.Metaclass_GetBT_Response._TYPE_SUPPORT is None:
                _get_bt.Metaclass_GetBT_Response.__import_type_support__()


class GetBT(metaclass=Metaclass_GetBT):
    from behavior_tree_msgs.srv._get_bt import GetBT_Request as Request
    from behavior_tree_msgs.srv._get_bt import GetBT_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
