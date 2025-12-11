# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gary_msgs:msg/AutoAimDebug.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutoAimDebug(type):
    """Metaclass of message 'AutoAimDebug'."""

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
            module = import_type_support('gary_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gary_msgs.msg.AutoAimDebug')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__auto_aim_debug
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__auto_aim_debug
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__auto_aim_debug
            cls._TYPE_SUPPORT = module.type_support_msg__msg__auto_aim_debug
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__auto_aim_debug

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AutoAimDebug(metaclass=Metaclass_AutoAimDebug):
    """Message class 'AutoAimDebug'."""

    __slots__ = [
        '_header',
        '_plan_yaw',
        '_plan_pitch',
        '_yaw_diff',
        '_yaw_limit_1',
        '_yaw_limit_2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'plan_yaw': 'float',
        'plan_pitch': 'float',
        'yaw_diff': 'float',
        'yaw_limit_1': 'float',
        'yaw_limit_2': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.plan_yaw = kwargs.get('plan_yaw', float())
        self.plan_pitch = kwargs.get('plan_pitch', float())
        self.yaw_diff = kwargs.get('yaw_diff', float())
        self.yaw_limit_1 = kwargs.get('yaw_limit_1', float())
        self.yaw_limit_2 = kwargs.get('yaw_limit_2', float())

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
        if self.plan_yaw != other.plan_yaw:
            return False
        if self.plan_pitch != other.plan_pitch:
            return False
        if self.yaw_diff != other.yaw_diff:
            return False
        if self.yaw_limit_1 != other.yaw_limit_1:
            return False
        if self.yaw_limit_2 != other.yaw_limit_2:
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
    def plan_yaw(self):
        """Message field 'plan_yaw'."""
        return self._plan_yaw

    @plan_yaw.setter
    def plan_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'plan_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'plan_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._plan_yaw = value

    @builtins.property
    def plan_pitch(self):
        """Message field 'plan_pitch'."""
        return self._plan_pitch

    @plan_pitch.setter
    def plan_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'plan_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'plan_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._plan_pitch = value

    @builtins.property
    def yaw_diff(self):
        """Message field 'yaw_diff'."""
        return self._yaw_diff

    @yaw_diff.setter
    def yaw_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_diff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_diff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_diff = value

    @builtins.property
    def yaw_limit_1(self):
        """Message field 'yaw_limit_1'."""
        return self._yaw_limit_1

    @yaw_limit_1.setter
    def yaw_limit_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_limit_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_limit_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_limit_1 = value

    @builtins.property
    def yaw_limit_2(self):
        """Message field 'yaw_limit_2'."""
        return self._yaw_limit_2

    @yaw_limit_2.setter
    def yaw_limit_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_limit_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_limit_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_limit_2 = value
