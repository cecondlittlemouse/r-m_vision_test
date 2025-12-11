# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gary_msgs:msg/RFIDStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RFIDStatus(type):
    """Metaclass of message 'RFIDStatus'."""

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
                'gary_msgs.msg.RFIDStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rfid_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rfid_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rfid_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rfid_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rfid_status

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


class RFIDStatus(metaclass=Metaclass_RFIDStatus):
    """Message class 'RFIDStatus'."""

    __slots__ = [
        '_header',
        '_base_buff_point',
        '_elevated_ground_buff_point',
        '_power_rune_buff_point',
        '_launch_ramp_buff_point',
        '_outpost_buff_point',
        '_hp_recovery_buff_point',
        '_engineer_robot_revival_card',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'base_buff_point': 'boolean',
        'elevated_ground_buff_point': 'boolean',
        'power_rune_buff_point': 'boolean',
        'launch_ramp_buff_point': 'boolean',
        'outpost_buff_point': 'boolean',
        'hp_recovery_buff_point': 'boolean',
        'engineer_robot_revival_card': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.base_buff_point = kwargs.get('base_buff_point', bool())
        self.elevated_ground_buff_point = kwargs.get('elevated_ground_buff_point', bool())
        self.power_rune_buff_point = kwargs.get('power_rune_buff_point', bool())
        self.launch_ramp_buff_point = kwargs.get('launch_ramp_buff_point', bool())
        self.outpost_buff_point = kwargs.get('outpost_buff_point', bool())
        self.hp_recovery_buff_point = kwargs.get('hp_recovery_buff_point', bool())
        self.engineer_robot_revival_card = kwargs.get('engineer_robot_revival_card', bool())

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
        if self.base_buff_point != other.base_buff_point:
            return False
        if self.elevated_ground_buff_point != other.elevated_ground_buff_point:
            return False
        if self.power_rune_buff_point != other.power_rune_buff_point:
            return False
        if self.launch_ramp_buff_point != other.launch_ramp_buff_point:
            return False
        if self.outpost_buff_point != other.outpost_buff_point:
            return False
        if self.hp_recovery_buff_point != other.hp_recovery_buff_point:
            return False
        if self.engineer_robot_revival_card != other.engineer_robot_revival_card:
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
    def base_buff_point(self):
        """Message field 'base_buff_point'."""
        return self._base_buff_point

    @base_buff_point.setter
    def base_buff_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'base_buff_point' field must be of type 'bool'"
        self._base_buff_point = value

    @builtins.property
    def elevated_ground_buff_point(self):
        """Message field 'elevated_ground_buff_point'."""
        return self._elevated_ground_buff_point

    @elevated_ground_buff_point.setter
    def elevated_ground_buff_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'elevated_ground_buff_point' field must be of type 'bool'"
        self._elevated_ground_buff_point = value

    @builtins.property
    def power_rune_buff_point(self):
        """Message field 'power_rune_buff_point'."""
        return self._power_rune_buff_point

    @power_rune_buff_point.setter
    def power_rune_buff_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_rune_buff_point' field must be of type 'bool'"
        self._power_rune_buff_point = value

    @builtins.property
    def launch_ramp_buff_point(self):
        """Message field 'launch_ramp_buff_point'."""
        return self._launch_ramp_buff_point

    @launch_ramp_buff_point.setter
    def launch_ramp_buff_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'launch_ramp_buff_point' field must be of type 'bool'"
        self._launch_ramp_buff_point = value

    @builtins.property
    def outpost_buff_point(self):
        """Message field 'outpost_buff_point'."""
        return self._outpost_buff_point

    @outpost_buff_point.setter
    def outpost_buff_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'outpost_buff_point' field must be of type 'bool'"
        self._outpost_buff_point = value

    @builtins.property
    def hp_recovery_buff_point(self):
        """Message field 'hp_recovery_buff_point'."""
        return self._hp_recovery_buff_point

    @hp_recovery_buff_point.setter
    def hp_recovery_buff_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hp_recovery_buff_point' field must be of type 'bool'"
        self._hp_recovery_buff_point = value

    @builtins.property
    def engineer_robot_revival_card(self):
        """Message field 'engineer_robot_revival_card'."""
        return self._engineer_robot_revival_card

    @engineer_robot_revival_card.setter
    def engineer_robot_revival_card(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'engineer_robot_revival_card' field must be of type 'bool'"
        self._engineer_robot_revival_card = value
