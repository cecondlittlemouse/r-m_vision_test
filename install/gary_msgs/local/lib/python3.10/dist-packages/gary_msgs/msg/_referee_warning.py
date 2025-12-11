# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gary_msgs:msg/RefereeWarning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RefereeWarning(type):
    """Metaclass of message 'RefereeWarning'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LEVEL_YELLOW': 0,
        'LEVEL_RED': 0,
        'LEVEL_LOSE_GAME': 0,
        'FOUL_ROBOT_ID_ALL': 0,
        'FOUL_ROBOT_ID_RED1_HERO': 1,
        'FOUL_ROBOT_ID_RED2_ENGINEER': 2,
        'FOUL_ROBOT_ID_RED3_INFANTRY': 3,
        'FOUL_ROBOT_ID_RED4_INFANTRY': 4,
        'FOUL_ROBOT_ID_RED5_INFANTRY': 5,
        'FOUL_ROBOT_ID_RED6_AERIAL': 6,
        'FOUL_ROBOT_ID_RED7_SENTRY': 7,
        'FOUL_ROBOT_ID_BLUE1_HERO': 101,
        'FOUL_ROBOT_ID_BLUE2_ENGINEER': 102,
        'FOUL_ROBOT_ID_BLUE3_INFANTRY': 103,
        'FOUL_ROBOT_ID_BLUE4_INFANTRY': 104,
        'FOUL_ROBOT_ID_BLUE5_INFANTRY': 105,
        'FOUL_ROBOT_ID_BLUE6_AERIAL': 106,
        'FOUL_ROBOT_ID_BLUE7_SENTRY': 107,
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
                'gary_msgs.msg.RefereeWarning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__referee_warning
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__referee_warning
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__referee_warning
            cls._TYPE_SUPPORT = module.type_support_msg__msg__referee_warning
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__referee_warning

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LEVEL_YELLOW': cls.__constants['LEVEL_YELLOW'],
            'LEVEL_RED': cls.__constants['LEVEL_RED'],
            'LEVEL_LOSE_GAME': cls.__constants['LEVEL_LOSE_GAME'],
            'FOUL_ROBOT_ID_ALL': cls.__constants['FOUL_ROBOT_ID_ALL'],
            'FOUL_ROBOT_ID_RED1_HERO': cls.__constants['FOUL_ROBOT_ID_RED1_HERO'],
            'FOUL_ROBOT_ID_RED2_ENGINEER': cls.__constants['FOUL_ROBOT_ID_RED2_ENGINEER'],
            'FOUL_ROBOT_ID_RED3_INFANTRY': cls.__constants['FOUL_ROBOT_ID_RED3_INFANTRY'],
            'FOUL_ROBOT_ID_RED4_INFANTRY': cls.__constants['FOUL_ROBOT_ID_RED4_INFANTRY'],
            'FOUL_ROBOT_ID_RED5_INFANTRY': cls.__constants['FOUL_ROBOT_ID_RED5_INFANTRY'],
            'FOUL_ROBOT_ID_RED6_AERIAL': cls.__constants['FOUL_ROBOT_ID_RED6_AERIAL'],
            'FOUL_ROBOT_ID_RED7_SENTRY': cls.__constants['FOUL_ROBOT_ID_RED7_SENTRY'],
            'FOUL_ROBOT_ID_BLUE1_HERO': cls.__constants['FOUL_ROBOT_ID_BLUE1_HERO'],
            'FOUL_ROBOT_ID_BLUE2_ENGINEER': cls.__constants['FOUL_ROBOT_ID_BLUE2_ENGINEER'],
            'FOUL_ROBOT_ID_BLUE3_INFANTRY': cls.__constants['FOUL_ROBOT_ID_BLUE3_INFANTRY'],
            'FOUL_ROBOT_ID_BLUE4_INFANTRY': cls.__constants['FOUL_ROBOT_ID_BLUE4_INFANTRY'],
            'FOUL_ROBOT_ID_BLUE5_INFANTRY': cls.__constants['FOUL_ROBOT_ID_BLUE5_INFANTRY'],
            'FOUL_ROBOT_ID_BLUE6_AERIAL': cls.__constants['FOUL_ROBOT_ID_BLUE6_AERIAL'],
            'FOUL_ROBOT_ID_BLUE7_SENTRY': cls.__constants['FOUL_ROBOT_ID_BLUE7_SENTRY'],
        }

    @property
    def LEVEL_YELLOW(self):
        """Message constant 'LEVEL_YELLOW'."""
        return Metaclass_RefereeWarning.__constants['LEVEL_YELLOW']

    @property
    def LEVEL_RED(self):
        """Message constant 'LEVEL_RED'."""
        return Metaclass_RefereeWarning.__constants['LEVEL_RED']

    @property
    def LEVEL_LOSE_GAME(self):
        """Message constant 'LEVEL_LOSE_GAME'."""
        return Metaclass_RefereeWarning.__constants['LEVEL_LOSE_GAME']

    @property
    def FOUL_ROBOT_ID_ALL(self):
        """Message constant 'FOUL_ROBOT_ID_ALL'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_ALL']

    @property
    def FOUL_ROBOT_ID_RED1_HERO(self):
        """Message constant 'FOUL_ROBOT_ID_RED1_HERO'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_RED1_HERO']

    @property
    def FOUL_ROBOT_ID_RED2_ENGINEER(self):
        """Message constant 'FOUL_ROBOT_ID_RED2_ENGINEER'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_RED2_ENGINEER']

    @property
    def FOUL_ROBOT_ID_RED3_INFANTRY(self):
        """Message constant 'FOUL_ROBOT_ID_RED3_INFANTRY'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_RED3_INFANTRY']

    @property
    def FOUL_ROBOT_ID_RED4_INFANTRY(self):
        """Message constant 'FOUL_ROBOT_ID_RED4_INFANTRY'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_RED4_INFANTRY']

    @property
    def FOUL_ROBOT_ID_RED5_INFANTRY(self):
        """Message constant 'FOUL_ROBOT_ID_RED5_INFANTRY'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_RED5_INFANTRY']

    @property
    def FOUL_ROBOT_ID_RED6_AERIAL(self):
        """Message constant 'FOUL_ROBOT_ID_RED6_AERIAL'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_RED6_AERIAL']

    @property
    def FOUL_ROBOT_ID_RED7_SENTRY(self):
        """Message constant 'FOUL_ROBOT_ID_RED7_SENTRY'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_RED7_SENTRY']

    @property
    def FOUL_ROBOT_ID_BLUE1_HERO(self):
        """Message constant 'FOUL_ROBOT_ID_BLUE1_HERO'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_BLUE1_HERO']

    @property
    def FOUL_ROBOT_ID_BLUE2_ENGINEER(self):
        """Message constant 'FOUL_ROBOT_ID_BLUE2_ENGINEER'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_BLUE2_ENGINEER']

    @property
    def FOUL_ROBOT_ID_BLUE3_INFANTRY(self):
        """Message constant 'FOUL_ROBOT_ID_BLUE3_INFANTRY'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_BLUE3_INFANTRY']

    @property
    def FOUL_ROBOT_ID_BLUE4_INFANTRY(self):
        """Message constant 'FOUL_ROBOT_ID_BLUE4_INFANTRY'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_BLUE4_INFANTRY']

    @property
    def FOUL_ROBOT_ID_BLUE5_INFANTRY(self):
        """Message constant 'FOUL_ROBOT_ID_BLUE5_INFANTRY'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_BLUE5_INFANTRY']

    @property
    def FOUL_ROBOT_ID_BLUE6_AERIAL(self):
        """Message constant 'FOUL_ROBOT_ID_BLUE6_AERIAL'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_BLUE6_AERIAL']

    @property
    def FOUL_ROBOT_ID_BLUE7_SENTRY(self):
        """Message constant 'FOUL_ROBOT_ID_BLUE7_SENTRY'."""
        return Metaclass_RefereeWarning.__constants['FOUL_ROBOT_ID_BLUE7_SENTRY']


class RefereeWarning(metaclass=Metaclass_RefereeWarning):
    """
    Message class 'RefereeWarning'.

    Constants:
      LEVEL_YELLOW
      LEVEL_RED
      LEVEL_LOSE_GAME
      FOUL_ROBOT_ID_ALL
      FOUL_ROBOT_ID_RED1_HERO
      FOUL_ROBOT_ID_RED2_ENGINEER
      FOUL_ROBOT_ID_RED3_INFANTRY
      FOUL_ROBOT_ID_RED4_INFANTRY
      FOUL_ROBOT_ID_RED5_INFANTRY
      FOUL_ROBOT_ID_RED6_AERIAL
      FOUL_ROBOT_ID_RED7_SENTRY
      FOUL_ROBOT_ID_BLUE1_HERO
      FOUL_ROBOT_ID_BLUE2_ENGINEER
      FOUL_ROBOT_ID_BLUE3_INFANTRY
      FOUL_ROBOT_ID_BLUE4_INFANTRY
      FOUL_ROBOT_ID_BLUE5_INFANTRY
      FOUL_ROBOT_ID_BLUE6_AERIAL
      FOUL_ROBOT_ID_BLUE7_SENTRY
    """

    __slots__ = [
        '_header',
        '_level',
        '_foul_robot_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'level': 'uint8',
        'foul_robot_id': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.level = kwargs.get('level', int())
        self.foul_robot_id = kwargs.get('foul_robot_id', int())

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
        if self.level != other.level:
            return False
        if self.foul_robot_id != other.foul_robot_id:
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
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'level' field must be an unsigned integer in [0, 255]"
        self._level = value

    @builtins.property
    def foul_robot_id(self):
        """Message field 'foul_robot_id'."""
        return self._foul_robot_id

    @foul_robot_id.setter
    def foul_robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'foul_robot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'foul_robot_id' field must be an unsigned integer in [0, 255]"
        self._foul_robot_id = value
