# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_tree_msgs:msg/Object.idl
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
                'behavior_tree_msgs.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

            from behavior_tree_msgs.msg import Pixel
            if Pixel.__class__._TYPE_SUPPORT is None:
                Pixel.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Object(metaclass=Metaclass_Object):
    """Message class 'Object'."""

    __slots__ = [
        '_from_camera',
        '_from_base',
        '_from_odom',
        '_label',
        '_id',
        '_pixel_bottom_right',
        '_pixel_top_left',
        '_pixel_center',
        '_stand',
        '_probability',
    ]

    _fields_and_field_types = {
        'from_camera': 'geometry_msgs/Pose',
        'from_base': 'geometry_msgs/Pose',
        'from_odom': 'geometry_msgs/Pose',
        'label': 'string',
        'id': 'string',
        'pixel_bottom_right': 'behavior_tree_msgs/Pixel',
        'pixel_top_left': 'behavior_tree_msgs/Pixel',
        'pixel_center': 'behavior_tree_msgs/Pixel',
        'stand': 'boolean',
        'probability': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_tree_msgs', 'msg'], 'Pixel'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_tree_msgs', 'msg'], 'Pixel'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_tree_msgs', 'msg'], 'Pixel'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.from_camera = kwargs.get('from_camera', Pose())
        from geometry_msgs.msg import Pose
        self.from_base = kwargs.get('from_base', Pose())
        from geometry_msgs.msg import Pose
        self.from_odom = kwargs.get('from_odom', Pose())
        self.label = kwargs.get('label', str())
        self.id = kwargs.get('id', str())
        from behavior_tree_msgs.msg import Pixel
        self.pixel_bottom_right = kwargs.get('pixel_bottom_right', Pixel())
        from behavior_tree_msgs.msg import Pixel
        self.pixel_top_left = kwargs.get('pixel_top_left', Pixel())
        from behavior_tree_msgs.msg import Pixel
        self.pixel_center = kwargs.get('pixel_center', Pixel())
        self.stand = kwargs.get('stand', bool())
        self.probability = kwargs.get('probability', float())

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
        if self.from_camera != other.from_camera:
            return False
        if self.from_base != other.from_base:
            return False
        if self.from_odom != other.from_odom:
            return False
        if self.label != other.label:
            return False
        if self.id != other.id:
            return False
        if self.pixel_bottom_right != other.pixel_bottom_right:
            return False
        if self.pixel_top_left != other.pixel_top_left:
            return False
        if self.pixel_center != other.pixel_center:
            return False
        if self.stand != other.stand:
            return False
        if self.probability != other.probability:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def from_camera(self):
        """Message field 'from_camera'."""
        return self._from_camera

    @from_camera.setter
    def from_camera(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'from_camera' field must be a sub message of type 'Pose'"
        self._from_camera = value

    @builtins.property
    def from_base(self):
        """Message field 'from_base'."""
        return self._from_base

    @from_base.setter
    def from_base(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'from_base' field must be a sub message of type 'Pose'"
        self._from_base = value

    @builtins.property
    def from_odom(self):
        """Message field 'from_odom'."""
        return self._from_odom

    @from_odom.setter
    def from_odom(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'from_odom' field must be a sub message of type 'Pose'"
        self._from_odom = value

    @builtins.property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value

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
    def pixel_bottom_right(self):
        """Message field 'pixel_bottom_right'."""
        return self._pixel_bottom_right

    @pixel_bottom_right.setter
    def pixel_bottom_right(self, value):
        if __debug__:
            from behavior_tree_msgs.msg import Pixel
            assert \
                isinstance(value, Pixel), \
                "The 'pixel_bottom_right' field must be a sub message of type 'Pixel'"
        self._pixel_bottom_right = value

    @builtins.property
    def pixel_top_left(self):
        """Message field 'pixel_top_left'."""
        return self._pixel_top_left

    @pixel_top_left.setter
    def pixel_top_left(self, value):
        if __debug__:
            from behavior_tree_msgs.msg import Pixel
            assert \
                isinstance(value, Pixel), \
                "The 'pixel_top_left' field must be a sub message of type 'Pixel'"
        self._pixel_top_left = value

    @builtins.property
    def pixel_center(self):
        """Message field 'pixel_center'."""
        return self._pixel_center

    @pixel_center.setter
    def pixel_center(self, value):
        if __debug__:
            from behavior_tree_msgs.msg import Pixel
            assert \
                isinstance(value, Pixel), \
                "The 'pixel_center' field must be a sub message of type 'Pixel'"
        self._pixel_center = value

    @builtins.property
    def stand(self):
        """Message field 'stand'."""
        return self._stand

    @stand.setter
    def stand(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stand' field must be of type 'bool'"
        self._stand = value

    @builtins.property
    def probability(self):
        """Message field 'probability'."""
        return self._probability

    @probability.setter
    def probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._probability = value
