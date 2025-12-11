# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gary_msgs:msg/InteractiveDataRecv.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InteractiveDataRecv(type):
    """Metaclass of message 'InteractiveDataRecv'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN': 512,
        'DATA_CMD_ID_ROBOT_INTERACTIVE_END': 767,
        'DATA_CMD_ID_CLIENT_DELETE_GRAPHICS': 256,
        'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1': 257,
        'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3': 258,
        'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5': 259,
        'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7': 260,
        'DATA_CMD_ID_CLIENT_DRAW_CHARACTER': 272,
        'ROBOT_ID_RED1_HERO': 1,
        'ROBOT_ID_RED2_ENGINEER': 2,
        'ROBOT_ID_RED3_INFANTRY': 3,
        'ROBOT_ID_RED4_INFANTRY': 4,
        'ROBOT_ID_RED5_INFANTRY': 5,
        'ROBOT_ID_RED6_AERIAL': 6,
        'ROBOT_ID_RED7_SENTRY': 7,
        'ROBOT_ID_RED9_RADAR': 9,
        'ROBOT_ID_BLUE1_HERO': 101,
        'ROBOT_ID_BLUE2_ENGINEER': 102,
        'ROBOT_ID_BLUE3_INFANTRY': 103,
        'ROBOT_ID_BLUE4_INFANTRY': 104,
        'ROBOT_ID_BLUE5_INFANTRY': 105,
        'ROBOT_ID_BLUE6_AERIAL': 106,
        'ROBOT_ID_BLUE7_SENTRY': 107,
        'ROBOT_ID_BLUE9_RADAR': 109,
        'CLIENT_ID_RED1_HERO': 257,
        'CLIENT_ID_RED2_ENGINEER': 258,
        'CLIENT_ID_RED3_INFANTRY': 259,
        'CLIENT_ID_RED4_INFANTRY': 260,
        'CLIENT_ID_RED5_INFANTRY': 261,
        'CLIENT_ID_RED6_AERIAL': 262,
        'CLIENT_ID_BLUE1_HERO': 357,
        'CLIENT_ID_BLUE2_ENGINEER': 358,
        'CLIENT_ID_BLUE3_INFANTRY': 359,
        'CLIENT_ID_BLUE4_INFANTRY': 360,
        'CLIENT_ID_BLUE5_INFANTRY': 361,
        'CLIENT_ID_BLUE6_AERIAL': 362,
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
                'gary_msgs.msg.InteractiveDataRecv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__interactive_data_recv
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__interactive_data_recv
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__interactive_data_recv
            cls._TYPE_SUPPORT = module.type_support_msg__msg__interactive_data_recv
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__interactive_data_recv

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN': cls.__constants['DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN'],
            'DATA_CMD_ID_ROBOT_INTERACTIVE_END': cls.__constants['DATA_CMD_ID_ROBOT_INTERACTIVE_END'],
            'DATA_CMD_ID_CLIENT_DELETE_GRAPHICS': cls.__constants['DATA_CMD_ID_CLIENT_DELETE_GRAPHICS'],
            'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1': cls.__constants['DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1'],
            'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3': cls.__constants['DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3'],
            'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5': cls.__constants['DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5'],
            'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7': cls.__constants['DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7'],
            'DATA_CMD_ID_CLIENT_DRAW_CHARACTER': cls.__constants['DATA_CMD_ID_CLIENT_DRAW_CHARACTER'],
            'ROBOT_ID_RED1_HERO': cls.__constants['ROBOT_ID_RED1_HERO'],
            'ROBOT_ID_RED2_ENGINEER': cls.__constants['ROBOT_ID_RED2_ENGINEER'],
            'ROBOT_ID_RED3_INFANTRY': cls.__constants['ROBOT_ID_RED3_INFANTRY'],
            'ROBOT_ID_RED4_INFANTRY': cls.__constants['ROBOT_ID_RED4_INFANTRY'],
            'ROBOT_ID_RED5_INFANTRY': cls.__constants['ROBOT_ID_RED5_INFANTRY'],
            'ROBOT_ID_RED6_AERIAL': cls.__constants['ROBOT_ID_RED6_AERIAL'],
            'ROBOT_ID_RED7_SENTRY': cls.__constants['ROBOT_ID_RED7_SENTRY'],
            'ROBOT_ID_RED9_RADAR': cls.__constants['ROBOT_ID_RED9_RADAR'],
            'ROBOT_ID_BLUE1_HERO': cls.__constants['ROBOT_ID_BLUE1_HERO'],
            'ROBOT_ID_BLUE2_ENGINEER': cls.__constants['ROBOT_ID_BLUE2_ENGINEER'],
            'ROBOT_ID_BLUE3_INFANTRY': cls.__constants['ROBOT_ID_BLUE3_INFANTRY'],
            'ROBOT_ID_BLUE4_INFANTRY': cls.__constants['ROBOT_ID_BLUE4_INFANTRY'],
            'ROBOT_ID_BLUE5_INFANTRY': cls.__constants['ROBOT_ID_BLUE5_INFANTRY'],
            'ROBOT_ID_BLUE6_AERIAL': cls.__constants['ROBOT_ID_BLUE6_AERIAL'],
            'ROBOT_ID_BLUE7_SENTRY': cls.__constants['ROBOT_ID_BLUE7_SENTRY'],
            'ROBOT_ID_BLUE9_RADAR': cls.__constants['ROBOT_ID_BLUE9_RADAR'],
            'CLIENT_ID_RED1_HERO': cls.__constants['CLIENT_ID_RED1_HERO'],
            'CLIENT_ID_RED2_ENGINEER': cls.__constants['CLIENT_ID_RED2_ENGINEER'],
            'CLIENT_ID_RED3_INFANTRY': cls.__constants['CLIENT_ID_RED3_INFANTRY'],
            'CLIENT_ID_RED4_INFANTRY': cls.__constants['CLIENT_ID_RED4_INFANTRY'],
            'CLIENT_ID_RED5_INFANTRY': cls.__constants['CLIENT_ID_RED5_INFANTRY'],
            'CLIENT_ID_RED6_AERIAL': cls.__constants['CLIENT_ID_RED6_AERIAL'],
            'CLIENT_ID_BLUE1_HERO': cls.__constants['CLIENT_ID_BLUE1_HERO'],
            'CLIENT_ID_BLUE2_ENGINEER': cls.__constants['CLIENT_ID_BLUE2_ENGINEER'],
            'CLIENT_ID_BLUE3_INFANTRY': cls.__constants['CLIENT_ID_BLUE3_INFANTRY'],
            'CLIENT_ID_BLUE4_INFANTRY': cls.__constants['CLIENT_ID_BLUE4_INFANTRY'],
            'CLIENT_ID_BLUE5_INFANTRY': cls.__constants['CLIENT_ID_BLUE5_INFANTRY'],
            'CLIENT_ID_BLUE6_AERIAL': cls.__constants['CLIENT_ID_BLUE6_AERIAL'],
        }

    @property
    def DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN(self):
        """Message constant 'DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN'."""
        return Metaclass_InteractiveDataRecv.__constants['DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN']

    @property
    def DATA_CMD_ID_ROBOT_INTERACTIVE_END(self):
        """Message constant 'DATA_CMD_ID_ROBOT_INTERACTIVE_END'."""
        return Metaclass_InteractiveDataRecv.__constants['DATA_CMD_ID_ROBOT_INTERACTIVE_END']

    @property
    def DATA_CMD_ID_CLIENT_DELETE_GRAPHICS(self):
        """Message constant 'DATA_CMD_ID_CLIENT_DELETE_GRAPHICS'."""
        return Metaclass_InteractiveDataRecv.__constants['DATA_CMD_ID_CLIENT_DELETE_GRAPHICS']

    @property
    def DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1(self):
        """Message constant 'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1'."""
        return Metaclass_InteractiveDataRecv.__constants['DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1']

    @property
    def DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3(self):
        """Message constant 'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3'."""
        return Metaclass_InteractiveDataRecv.__constants['DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3']

    @property
    def DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5(self):
        """Message constant 'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5'."""
        return Metaclass_InteractiveDataRecv.__constants['DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5']

    @property
    def DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7(self):
        """Message constant 'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7'."""
        return Metaclass_InteractiveDataRecv.__constants['DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7']

    @property
    def DATA_CMD_ID_CLIENT_DRAW_CHARACTER(self):
        """Message constant 'DATA_CMD_ID_CLIENT_DRAW_CHARACTER'."""
        return Metaclass_InteractiveDataRecv.__constants['DATA_CMD_ID_CLIENT_DRAW_CHARACTER']

    @property
    def ROBOT_ID_RED1_HERO(self):
        """Message constant 'ROBOT_ID_RED1_HERO'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_RED1_HERO']

    @property
    def ROBOT_ID_RED2_ENGINEER(self):
        """Message constant 'ROBOT_ID_RED2_ENGINEER'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_RED2_ENGINEER']

    @property
    def ROBOT_ID_RED3_INFANTRY(self):
        """Message constant 'ROBOT_ID_RED3_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_RED3_INFANTRY']

    @property
    def ROBOT_ID_RED4_INFANTRY(self):
        """Message constant 'ROBOT_ID_RED4_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_RED4_INFANTRY']

    @property
    def ROBOT_ID_RED5_INFANTRY(self):
        """Message constant 'ROBOT_ID_RED5_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_RED5_INFANTRY']

    @property
    def ROBOT_ID_RED6_AERIAL(self):
        """Message constant 'ROBOT_ID_RED6_AERIAL'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_RED6_AERIAL']

    @property
    def ROBOT_ID_RED7_SENTRY(self):
        """Message constant 'ROBOT_ID_RED7_SENTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_RED7_SENTRY']

    @property
    def ROBOT_ID_RED9_RADAR(self):
        """Message constant 'ROBOT_ID_RED9_RADAR'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_RED9_RADAR']

    @property
    def ROBOT_ID_BLUE1_HERO(self):
        """Message constant 'ROBOT_ID_BLUE1_HERO'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_BLUE1_HERO']

    @property
    def ROBOT_ID_BLUE2_ENGINEER(self):
        """Message constant 'ROBOT_ID_BLUE2_ENGINEER'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_BLUE2_ENGINEER']

    @property
    def ROBOT_ID_BLUE3_INFANTRY(self):
        """Message constant 'ROBOT_ID_BLUE3_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_BLUE3_INFANTRY']

    @property
    def ROBOT_ID_BLUE4_INFANTRY(self):
        """Message constant 'ROBOT_ID_BLUE4_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_BLUE4_INFANTRY']

    @property
    def ROBOT_ID_BLUE5_INFANTRY(self):
        """Message constant 'ROBOT_ID_BLUE5_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_BLUE5_INFANTRY']

    @property
    def ROBOT_ID_BLUE6_AERIAL(self):
        """Message constant 'ROBOT_ID_BLUE6_AERIAL'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_BLUE6_AERIAL']

    @property
    def ROBOT_ID_BLUE7_SENTRY(self):
        """Message constant 'ROBOT_ID_BLUE7_SENTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_BLUE7_SENTRY']

    @property
    def ROBOT_ID_BLUE9_RADAR(self):
        """Message constant 'ROBOT_ID_BLUE9_RADAR'."""
        return Metaclass_InteractiveDataRecv.__constants['ROBOT_ID_BLUE9_RADAR']

    @property
    def CLIENT_ID_RED1_HERO(self):
        """Message constant 'CLIENT_ID_RED1_HERO'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_RED1_HERO']

    @property
    def CLIENT_ID_RED2_ENGINEER(self):
        """Message constant 'CLIENT_ID_RED2_ENGINEER'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_RED2_ENGINEER']

    @property
    def CLIENT_ID_RED3_INFANTRY(self):
        """Message constant 'CLIENT_ID_RED3_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_RED3_INFANTRY']

    @property
    def CLIENT_ID_RED4_INFANTRY(self):
        """Message constant 'CLIENT_ID_RED4_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_RED4_INFANTRY']

    @property
    def CLIENT_ID_RED5_INFANTRY(self):
        """Message constant 'CLIENT_ID_RED5_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_RED5_INFANTRY']

    @property
    def CLIENT_ID_RED6_AERIAL(self):
        """Message constant 'CLIENT_ID_RED6_AERIAL'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_RED6_AERIAL']

    @property
    def CLIENT_ID_BLUE1_HERO(self):
        """Message constant 'CLIENT_ID_BLUE1_HERO'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_BLUE1_HERO']

    @property
    def CLIENT_ID_BLUE2_ENGINEER(self):
        """Message constant 'CLIENT_ID_BLUE2_ENGINEER'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_BLUE2_ENGINEER']

    @property
    def CLIENT_ID_BLUE3_INFANTRY(self):
        """Message constant 'CLIENT_ID_BLUE3_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_BLUE3_INFANTRY']

    @property
    def CLIENT_ID_BLUE4_INFANTRY(self):
        """Message constant 'CLIENT_ID_BLUE4_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_BLUE4_INFANTRY']

    @property
    def CLIENT_ID_BLUE5_INFANTRY(self):
        """Message constant 'CLIENT_ID_BLUE5_INFANTRY'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_BLUE5_INFANTRY']

    @property
    def CLIENT_ID_BLUE6_AERIAL(self):
        """Message constant 'CLIENT_ID_BLUE6_AERIAL'."""
        return Metaclass_InteractiveDataRecv.__constants['CLIENT_ID_BLUE6_AERIAL']


class InteractiveDataRecv(metaclass=Metaclass_InteractiveDataRecv):
    """
    Message class 'InteractiveDataRecv'.

    Constants:
      DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN
      DATA_CMD_ID_ROBOT_INTERACTIVE_END
      DATA_CMD_ID_CLIENT_DELETE_GRAPHICS
      DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1
      DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3
      DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5
      DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7
      DATA_CMD_ID_CLIENT_DRAW_CHARACTER
      ROBOT_ID_RED1_HERO
      ROBOT_ID_RED2_ENGINEER
      ROBOT_ID_RED3_INFANTRY
      ROBOT_ID_RED4_INFANTRY
      ROBOT_ID_RED5_INFANTRY
      ROBOT_ID_RED6_AERIAL
      ROBOT_ID_RED7_SENTRY
      ROBOT_ID_RED9_RADAR
      ROBOT_ID_BLUE1_HERO
      ROBOT_ID_BLUE2_ENGINEER
      ROBOT_ID_BLUE3_INFANTRY
      ROBOT_ID_BLUE4_INFANTRY
      ROBOT_ID_BLUE5_INFANTRY
      ROBOT_ID_BLUE6_AERIAL
      ROBOT_ID_BLUE7_SENTRY
      ROBOT_ID_BLUE9_RADAR
      CLIENT_ID_RED1_HERO
      CLIENT_ID_RED2_ENGINEER
      CLIENT_ID_RED3_INFANTRY
      CLIENT_ID_RED4_INFANTRY
      CLIENT_ID_RED5_INFANTRY
      CLIENT_ID_RED6_AERIAL
      CLIENT_ID_BLUE1_HERO
      CLIENT_ID_BLUE2_ENGINEER
      CLIENT_ID_BLUE3_INFANTRY
      CLIENT_ID_BLUE4_INFANTRY
      CLIENT_ID_BLUE5_INFANTRY
      CLIENT_ID_BLUE6_AERIAL
    """

    __slots__ = [
        '_header',
        '_data_cmd_id',
        '_sender_id',
        '_receiver_id',
        '_data_length',
        '_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'data_cmd_id': 'uint16',
        'sender_id': 'uint16',
        'receiver_id': 'uint16',
        'data_length': 'uint8',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.data_cmd_id = kwargs.get('data_cmd_id', int())
        self.sender_id = kwargs.get('sender_id', int())
        self.receiver_id = kwargs.get('receiver_id', int())
        self.data_length = kwargs.get('data_length', int())
        self.data = array.array('B', kwargs.get('data', []))

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
        if self.data_cmd_id != other.data_cmd_id:
            return False
        if self.sender_id != other.sender_id:
            return False
        if self.receiver_id != other.receiver_id:
            return False
        if self.data_length != other.data_length:
            return False
        if self.data != other.data:
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
    def data_cmd_id(self):
        """Message field 'data_cmd_id'."""
        return self._data_cmd_id

    @data_cmd_id.setter
    def data_cmd_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data_cmd_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'data_cmd_id' field must be an unsigned integer in [0, 65535]"
        self._data_cmd_id = value

    @builtins.property
    def sender_id(self):
        """Message field 'sender_id'."""
        return self._sender_id

    @sender_id.setter
    def sender_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sender_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sender_id' field must be an unsigned integer in [0, 65535]"
        self._sender_id = value

    @builtins.property
    def receiver_id(self):
        """Message field 'receiver_id'."""
        return self._receiver_id

    @receiver_id.setter
    def receiver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'receiver_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'receiver_id' field must be an unsigned integer in [0, 65535]"
        self._receiver_id = value

    @builtins.property
    def data_length(self):
        """Message field 'data_length'."""
        return self._data_length

    @data_length.setter
    def data_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data_length' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'data_length' field must be an unsigned integer in [0, 255]"
        self._data_length = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)
