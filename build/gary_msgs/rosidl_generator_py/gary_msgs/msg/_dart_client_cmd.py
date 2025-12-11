# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gary_msgs:msg/DartClientCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DartClientCmd(type):
    """Metaclass of message 'DartClientCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LAUNCH_STATUS_OPENED': 0,
        'LAUNCH_STATUS_CLOSED': 1,
        'LAUNCH_STATUS_IN_ACTION': 2,
        'ATTACK_TARGET_OUTPOST': 0,
        'ATTACK_TARGET_BASE': 1,
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
                'gary_msgs.msg.DartClientCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dart_client_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dart_client_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dart_client_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dart_client_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dart_client_cmd

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LAUNCH_STATUS_OPENED': cls.__constants['LAUNCH_STATUS_OPENED'],
            'LAUNCH_STATUS_CLOSED': cls.__constants['LAUNCH_STATUS_CLOSED'],
            'LAUNCH_STATUS_IN_ACTION': cls.__constants['LAUNCH_STATUS_IN_ACTION'],
            'ATTACK_TARGET_OUTPOST': cls.__constants['ATTACK_TARGET_OUTPOST'],
            'ATTACK_TARGET_BASE': cls.__constants['ATTACK_TARGET_BASE'],
        }

    @property
    def LAUNCH_STATUS_OPENED(self):
        """Message constant 'LAUNCH_STATUS_OPENED'."""
        return Metaclass_DartClientCmd.__constants['LAUNCH_STATUS_OPENED']

    @property
    def LAUNCH_STATUS_CLOSED(self):
        """Message constant 'LAUNCH_STATUS_CLOSED'."""
        return Metaclass_DartClientCmd.__constants['LAUNCH_STATUS_CLOSED']

    @property
    def LAUNCH_STATUS_IN_ACTION(self):
        """Message constant 'LAUNCH_STATUS_IN_ACTION'."""
        return Metaclass_DartClientCmd.__constants['LAUNCH_STATUS_IN_ACTION']

    @property
    def ATTACK_TARGET_OUTPOST(self):
        """Message constant 'ATTACK_TARGET_OUTPOST'."""
        return Metaclass_DartClientCmd.__constants['ATTACK_TARGET_OUTPOST']

    @property
    def ATTACK_TARGET_BASE(self):
        """Message constant 'ATTACK_TARGET_BASE'."""
        return Metaclass_DartClientCmd.__constants['ATTACK_TARGET_BASE']


class DartClientCmd(metaclass=Metaclass_DartClientCmd):
    """
    Message class 'DartClientCmd'.

    Constants:
      LAUNCH_STATUS_OPENED
      LAUNCH_STATUS_CLOSED
      LAUNCH_STATUS_IN_ACTION
      ATTACK_TARGET_OUTPOST
      ATTACK_TARGET_BASE
    """

    __slots__ = [
        '_header',
        '_launch_status',
        '_attack_target',
        '_target_change_time',
        '_operate_launch_cmd_time',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'launch_status': 'uint8',
        'attack_target': 'uint8',
        'target_change_time': 'uint16',
        'operate_launch_cmd_time': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.launch_status = kwargs.get('launch_status', int())
        self.attack_target = kwargs.get('attack_target', int())
        self.target_change_time = kwargs.get('target_change_time', int())
        self.operate_launch_cmd_time = kwargs.get('operate_launch_cmd_time', int())

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
        if self.launch_status != other.launch_status:
            return False
        if self.attack_target != other.attack_target:
            return False
        if self.target_change_time != other.target_change_time:
            return False
        if self.operate_launch_cmd_time != other.operate_launch_cmd_time:
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
    def launch_status(self):
        """Message field 'launch_status'."""
        return self._launch_status

    @launch_status.setter
    def launch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'launch_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'launch_status' field must be an unsigned integer in [0, 255]"
        self._launch_status = value

    @builtins.property
    def attack_target(self):
        """Message field 'attack_target'."""
        return self._attack_target

    @attack_target.setter
    def attack_target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attack_target' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'attack_target' field must be an unsigned integer in [0, 255]"
        self._attack_target = value

    @builtins.property
    def target_change_time(self):
        """Message field 'target_change_time'."""
        return self._target_change_time

    @target_change_time.setter
    def target_change_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_change_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'target_change_time' field must be an unsigned integer in [0, 65535]"
        self._target_change_time = value

    @builtins.property
    def operate_launch_cmd_time(self):
        """Message field 'operate_launch_cmd_time'."""
        return self._operate_launch_cmd_time

    @operate_launch_cmd_time.setter
    def operate_launch_cmd_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operate_launch_cmd_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'operate_launch_cmd_time' field must be an unsigned integer in [0, 65535]"
        self._operate_launch_cmd_time = value
