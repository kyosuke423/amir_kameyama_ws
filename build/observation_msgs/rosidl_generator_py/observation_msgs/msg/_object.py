# generated from rosidl_generator_py/resource/_idl.py.em
# with input from observation_msgs:msg/Object.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object(type):
    """Metaclass of message 'Object'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'KNOWN': 1,
        'LOST': 2,
        'POSE_KNOWN': 3,
        'ATTACHED': 4,
        'POINT': 0,
        'POSE': 1,
        'COLLISION': 2,
        'ATTACHED_COLLISION': 3,
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
                'observation_msgs.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from moveit_msgs.msg import AttachedCollisionObject
            if AttachedCollisionObject.__class__._TYPE_SUPPORT is None:
                AttachedCollisionObject.__class__.__import_type_support__()

            from moveit_msgs.msg import CollisionObject
            if CollisionObject.__class__._TYPE_SUPPORT is None:
                CollisionObject.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'KNOWN': cls.__constants['KNOWN'],
            'LOST': cls.__constants['LOST'],
            'POSE_KNOWN': cls.__constants['POSE_KNOWN'],
            'ATTACHED': cls.__constants['ATTACHED'],
            'POINT': cls.__constants['POINT'],
            'POSE': cls.__constants['POSE'],
            'COLLISION': cls.__constants['COLLISION'],
            'ATTACHED_COLLISION': cls.__constants['ATTACHED_COLLISION'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_Object.__constants['UNKNOWN']

    @property
    def KNOWN(self):
        """Message constant 'KNOWN'."""
        return Metaclass_Object.__constants['KNOWN']

    @property
    def LOST(self):
        """Message constant 'LOST'."""
        return Metaclass_Object.__constants['LOST']

    @property
    def POSE_KNOWN(self):
        """Message constant 'POSE_KNOWN'."""
        return Metaclass_Object.__constants['POSE_KNOWN']

    @property
    def ATTACHED(self):
        """Message constant 'ATTACHED'."""
        return Metaclass_Object.__constants['ATTACHED']

    @property
    def POINT(self):
        """Message constant 'POINT'."""
        return Metaclass_Object.__constants['POINT']

    @property
    def POSE(self):
        """Message constant 'POSE'."""
        return Metaclass_Object.__constants['POSE']

    @property
    def COLLISION(self):
        """Message constant 'COLLISION'."""
        return Metaclass_Object.__constants['COLLISION']

    @property
    def ATTACHED_COLLISION(self):
        """Message constant 'ATTACHED_COLLISION'."""
        return Metaclass_Object.__constants['ATTACHED_COLLISION']


class Object(metaclass=Metaclass_Object):
    """
    Message class 'Object'.

    Constants:
      UNKNOWN
      KNOWN
      LOST
      POSE_KNOWN
      ATTACHED
      POINT
      POSE
      COLLISION
      ATTACHED_COLLISION
    """

    __slots__ = [
        '_header',
        '_pose',
        '_collision_object',
        '_attached_collision_object',
        '_id',
        '_obj_group',
        '_status',
        '_msg_type',
        '_weight',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pose': 'geometry_msgs/Pose',
        'collision_object': 'moveit_msgs/CollisionObject',
        'attached_collision_object': 'moveit_msgs/AttachedCollisionObject',
        'id': 'string',
        'obj_group': 'string',
        'status': 'int32',
        'msg_type': 'int32',
        'weight': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'CollisionObject'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'AttachedCollisionObject'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from moveit_msgs.msg import CollisionObject
        self.collision_object = kwargs.get('collision_object', CollisionObject())
        from moveit_msgs.msg import AttachedCollisionObject
        self.attached_collision_object = kwargs.get('attached_collision_object', AttachedCollisionObject())
        self.id = kwargs.get('id', str())
        self.obj_group = kwargs.get('obj_group', str())
        self.status = kwargs.get('status', int())
        self.msg_type = kwargs.get('msg_type', int())
        self.weight = kwargs.get('weight', float())

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
        if self.header != other.header:
            return False
        if self.pose != other.pose:
            return False
        if self.collision_object != other.collision_object:
            return False
        if self.attached_collision_object != other.attached_collision_object:
            return False
        if self.id != other.id:
            return False
        if self.obj_group != other.obj_group:
            return False
        if self.status != other.status:
            return False
        if self.msg_type != other.msg_type:
            return False
        if self.weight != other.weight:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def collision_object(self):
        """Message field 'collision_object'."""
        return self._collision_object

    @collision_object.setter
    def collision_object(self, value):
        if __debug__:
            from moveit_msgs.msg import CollisionObject
            assert \
                isinstance(value, CollisionObject), \
                "The 'collision_object' field must be a sub message of type 'CollisionObject'"
        self._collision_object = value

    @builtins.property
    def attached_collision_object(self):
        """Message field 'attached_collision_object'."""
        return self._attached_collision_object

    @attached_collision_object.setter
    def attached_collision_object(self, value):
        if __debug__:
            from moveit_msgs.msg import AttachedCollisionObject
            assert \
                isinstance(value, AttachedCollisionObject), \
                "The 'attached_collision_object' field must be a sub message of type 'AttachedCollisionObject'"
        self._attached_collision_object = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def obj_group(self):
        """Message field 'obj_group'."""
        return self._obj_group

    @obj_group.setter
    def obj_group(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'obj_group' field must be of type 'str'"
        self._obj_group = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value

    @builtins.property
    def msg_type(self):
        """Message field 'msg_type'."""
        return self._msg_type

    @msg_type.setter
    def msg_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'msg_type' field must be an integer in [-2147483648, 2147483647]"
        self._msg_type = value

    @builtins.property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'weight' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'weight' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._weight = value
