# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gary_msgs:msg/PID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PID(type):
    """Metaclass of message 'PID'."""

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
                'gary_msgs.msg.PID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pid

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


class PID(metaclass=Metaclass_PID):
    """Message class 'PID'."""

    __slots__ = [
        '_header',
        '_kp',
        '_ki',
        '_kd',
        '_max_out',
        '_max_iout',
        '_set',
        '_feedback',
        '_error',
        '_error_sum',
        '_last_error',
        '_pout',
        '_iout',
        '_dout',
        '_out',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'kp': 'double',
        'ki': 'double',
        'kd': 'double',
        'max_out': 'double',
        'max_iout': 'double',
        'set': 'double',
        'feedback': 'double',
        'error': 'double',
        'error_sum': 'double',
        'last_error': 'double',
        'pout': 'double',
        'iout': 'double',
        'dout': 'double',
        'out': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.kp = kwargs.get('kp', float())
        self.ki = kwargs.get('ki', float())
        self.kd = kwargs.get('kd', float())
        self.max_out = kwargs.get('max_out', float())
        self.max_iout = kwargs.get('max_iout', float())
        self.set = kwargs.get('set', float())
        self.feedback = kwargs.get('feedback', float())
        self.error = kwargs.get('error', float())
        self.error_sum = kwargs.get('error_sum', float())
        self.last_error = kwargs.get('last_error', float())
        self.pout = kwargs.get('pout', float())
        self.iout = kwargs.get('iout', float())
        self.dout = kwargs.get('dout', float())
        self.out = kwargs.get('out', float())

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
        if self.kp != other.kp:
            return False
        if self.ki != other.ki:
            return False
        if self.kd != other.kd:
            return False
        if self.max_out != other.max_out:
            return False
        if self.max_iout != other.max_iout:
            return False
        if self.set != other.set:
            return False
        if self.feedback != other.feedback:
            return False
        if self.error != other.error:
            return False
        if self.error_sum != other.error_sum:
            return False
        if self.last_error != other.last_error:
            return False
        if self.pout != other.pout:
            return False
        if self.iout != other.iout:
            return False
        if self.dout != other.dout:
            return False
        if self.out != other.out:
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
    def kp(self):
        """Message field 'kp'."""
        return self._kp

    @kp.setter
    def kp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kp = value

    @builtins.property
    def ki(self):
        """Message field 'ki'."""
        return self._ki

    @ki.setter
    def ki(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ki' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ki' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ki = value

    @builtins.property
    def kd(self):
        """Message field 'kd'."""
        return self._kd

    @kd.setter
    def kd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kd = value

    @builtins.property
    def max_out(self):
        """Message field 'max_out'."""
        return self._max_out

    @max_out.setter
    def max_out(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_out' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_out' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_out = value

    @builtins.property
    def max_iout(self):
        """Message field 'max_iout'."""
        return self._max_iout

    @max_iout.setter
    def max_iout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_iout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_iout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_iout = value

    @builtins.property  # noqa: A003
    def set(self):  # noqa: A003
        """Message field 'set'."""
        return self._set

    @set.setter  # noqa: A003
    def set(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._set = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'feedback' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'feedback' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._feedback = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._error = value

    @builtins.property
    def error_sum(self):
        """Message field 'error_sum'."""
        return self._error_sum

    @error_sum.setter
    def error_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error_sum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'error_sum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._error_sum = value

    @builtins.property
    def last_error(self):
        """Message field 'last_error'."""
        return self._last_error

    @last_error.setter
    def last_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'last_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._last_error = value

    @builtins.property
    def pout(self):
        """Message field 'pout'."""
        return self._pout

    @pout.setter
    def pout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pout = value

    @builtins.property
    def iout(self):
        """Message field 'iout'."""
        return self._iout

    @iout.setter
    def iout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'iout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'iout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._iout = value

    @builtins.property
    def dout(self):
        """Message field 'dout'."""
        return self._dout

    @dout.setter
    def dout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dout = value

    @builtins.property
    def out(self):
        """Message field 'out'."""
        return self._out

    @out.setter
    def out(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'out' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'out' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._out = value
