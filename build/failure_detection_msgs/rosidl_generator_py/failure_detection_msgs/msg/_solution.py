# generated from rosidl_generator_py/resource/_idl.py.em
# with input from failure_detection_msgs:msg/Solution.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'priorities'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Solution(type):
    """Metaclass of message 'Solution'."""

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
                'failure_detection_msgs.msg.Solution')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__solution
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__solution
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__solution
            cls._TYPE_SUPPORT = module.type_support_msg__msg__solution
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__solution

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


class Solution(metaclass=Metaclass_Solution):
    """Message class 'Solution'."""

    __slots__ = [
        '_bt_node_name',
        '_solutions',
        '_priorities',
        '_bb_message',
    ]

    _fields_and_field_types = {
        'bt_node_name': 'string',
        'solutions': 'sequence<string>',
        'priorities': 'sequence<float>',
        'bb_message': 'behavior_tree_msgs/BBMessage',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_tree_msgs', 'msg'], 'BBMessage'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bt_node_name = kwargs.get('bt_node_name', str())
        self.solutions = kwargs.get('solutions', [])
        self.priorities = array.array('f', kwargs.get('priorities', []))
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
        if self.bt_node_name != other.bt_node_name:
            return False
        if self.solutions != other.solutions:
            return False
        if self.priorities != other.priorities:
            return False
        if self.bb_message != other.bb_message:
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
    def solutions(self):
        """Message field 'solutions'."""
        return self._solutions

    @solutions.setter
    def solutions(self, value):
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
                "The 'solutions' field must be a set or sequence and each value of type 'str'"
        self._solutions = value

    @builtins.property
    def priorities(self):
        """Message field 'priorities'."""
        return self._priorities

    @priorities.setter
    def priorities(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'priorities' array.array() must have the type code of 'f'"
            self._priorities = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'priorities' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._priorities = array.array('f', value)

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
