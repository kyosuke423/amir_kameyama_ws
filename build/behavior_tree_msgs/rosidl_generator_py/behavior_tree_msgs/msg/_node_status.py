# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_tree_msgs:msg/NodeStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeStatus(type):
    """Metaclass of message 'NodeStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'IDLE': b'\x00',
        'RUNNING': b'\x01',
        'SUCCESS': b'\x02',
        'FAILURE': b'\x03',
        'UNDEFINED': b'\x00',
        'ACTION': b'\x01',
        'CONDITION': b'\x02',
        'CONTROL': b'\x03',
        'DECORATOR': b'\x04',
        'SUBTREE': b'\x05',
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
                'behavior_tree_msgs.msg.NodeStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'IDLE': cls.__constants['IDLE'],
            'RUNNING': cls.__constants['RUNNING'],
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILURE': cls.__constants['FAILURE'],
            'UNDEFINED': cls.__constants['UNDEFINED'],
            'ACTION': cls.__constants['ACTION'],
            'CONDITION': cls.__constants['CONDITION'],
            'CONTROL': cls.__constants['CONTROL'],
            'DECORATOR': cls.__constants['DECORATOR'],
            'SUBTREE': cls.__constants['SUBTREE'],
        }

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_NodeStatus.__constants['IDLE']

    @property
    def RUNNING(self):
        """Message constant 'RUNNING'."""
        return Metaclass_NodeStatus.__constants['RUNNING']

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_NodeStatus.__constants['SUCCESS']

    @property
    def FAILURE(self):
        """Message constant 'FAILURE'."""
        return Metaclass_NodeStatus.__constants['FAILURE']

    @property
    def UNDEFINED(self):
        """Message constant 'UNDEFINED'."""
        return Metaclass_NodeStatus.__constants['UNDEFINED']

    @property
    def ACTION(self):
        """Message constant 'ACTION'."""
        return Metaclass_NodeStatus.__constants['ACTION']

    @property
    def CONDITION(self):
        """Message constant 'CONDITION'."""
        return Metaclass_NodeStatus.__constants['CONDITION']

    @property
    def CONTROL(self):
        """Message constant 'CONTROL'."""
        return Metaclass_NodeStatus.__constants['CONTROL']

    @property
    def DECORATOR(self):
        """Message constant 'DECORATOR'."""
        return Metaclass_NodeStatus.__constants['DECORATOR']

    @property
    def SUBTREE(self):
        """Message constant 'SUBTREE'."""
        return Metaclass_NodeStatus.__constants['SUBTREE']


class NodeStatus(metaclass=Metaclass_NodeStatus):
    """
    Message class 'NodeStatus'.

    Constants:
      IDLE
      RUNNING
      SUCCESS
      FAILURE
      UNDEFINED
      ACTION
      CONDITION
      CONTROL
      DECORATOR
      SUBTREE
    """

    __slots__ = [
        '_node_name',
        '_node_id',
        '_status',
        '_node_type',
    ]

    _fields_and_field_types = {
        'node_name': 'string',
        'node_id': 'int16',
        'status': 'octet',
        'node_type': 'octet',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node_name = kwargs.get('node_name', str())
        self.node_id = kwargs.get('node_id', int())
        self.status = kwargs.get('status', bytes([0]))
        self.node_type = kwargs.get('node_type', bytes([0]))

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
        if self.node_name != other.node_name:
            return False
        if self.node_id != other.node_id:
            return False
        if self.status != other.status:
            return False
        if self.node_type != other.node_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_name(self):
        """Message field 'node_name'."""
        return self._node_name

    @node_name.setter
    def node_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node_name' field must be of type 'str'"
        self._node_name = value

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'node_id' field must be an integer in [-32768, 32767]"
        self._node_id = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'status' field must be of type 'bytes' or 'ByteString' with length 1"
        self._status = value

    @builtins.property
    def node_type(self):
        """Message field 'node_type'."""
        return self._node_type

    @node_type.setter
    def node_type(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'node_type' field must be of type 'bytes' or 'ByteString' with length 1"
        self._node_type = value
