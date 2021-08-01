# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quad_interfaces:msg/MotionServosParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'pin'
# Member 'min_angle'
# Member 'max_angle'
# Member 'calibration_angle_offset'
# Member 'ms_per_degree'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionServosParameters(type):
    """Metaclass of message 'MotionServosParameters'."""

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
            module = import_type_support('quad_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'quad_interfaces.msg.MotionServosParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_servos_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_servos_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_servos_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_servos_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_servos_parameters

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionServosParameters(metaclass=Metaclass_MotionServosParameters):
    """Message class 'MotionServosParameters'."""

    __slots__ = [
        '_pin',
        '_min_angle',
        '_max_angle',
        '_calibration_angle_offset',
        '_ms_per_degree',
    ]

    _fields_and_field_types = {
        'pin': 'int32[12]',
        'min_angle': 'float[12]',
        'max_angle': 'float[12]',
        'calibration_angle_offset': 'float[12]',
        'ms_per_degree': 'float[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'pin' not in kwargs:
            self.pin = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.pin = numpy.array(kwargs.get('pin'), dtype=numpy.int32)
            assert self.pin.shape == (12, )
        if 'min_angle' not in kwargs:
            self.min_angle = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.min_angle = numpy.array(kwargs.get('min_angle'), dtype=numpy.float32)
            assert self.min_angle.shape == (12, )
        if 'max_angle' not in kwargs:
            self.max_angle = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.max_angle = numpy.array(kwargs.get('max_angle'), dtype=numpy.float32)
            assert self.max_angle.shape == (12, )
        if 'calibration_angle_offset' not in kwargs:
            self.calibration_angle_offset = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.calibration_angle_offset = numpy.array(kwargs.get('calibration_angle_offset'), dtype=numpy.float32)
            assert self.calibration_angle_offset.shape == (12, )
        if 'ms_per_degree' not in kwargs:
            self.ms_per_degree = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.ms_per_degree = numpy.array(kwargs.get('ms_per_degree'), dtype=numpy.float32)
            assert self.ms_per_degree.shape == (12, )

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
        if all(self.pin != other.pin):
            return False
        if all(self.min_angle != other.min_angle):
            return False
        if all(self.max_angle != other.max_angle):
            return False
        if all(self.calibration_angle_offset != other.calibration_angle_offset):
            return False
        if all(self.ms_per_degree != other.ms_per_degree):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pin(self):
        """Message field 'pin'."""
        return self._pin

    @pin.setter
    def pin(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'pin' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'pin' numpy.ndarray() must have a size of 12"
            self._pin = value
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
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'pin' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._pin = numpy.array(value, dtype=numpy.int32)

    @property
    def min_angle(self):
        """Message field 'min_angle'."""
        return self._min_angle

    @min_angle.setter
    def min_angle(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'min_angle' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'min_angle' numpy.ndarray() must have a size of 12"
            self._min_angle = value
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
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'min_angle' field must be a set or sequence with length 12 and each value of type 'float'"
        self._min_angle = numpy.array(value, dtype=numpy.float32)

    @property
    def max_angle(self):
        """Message field 'max_angle'."""
        return self._max_angle

    @max_angle.setter
    def max_angle(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'max_angle' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'max_angle' numpy.ndarray() must have a size of 12"
            self._max_angle = value
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
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'max_angle' field must be a set or sequence with length 12 and each value of type 'float'"
        self._max_angle = numpy.array(value, dtype=numpy.float32)

    @property
    def calibration_angle_offset(self):
        """Message field 'calibration_angle_offset'."""
        return self._calibration_angle_offset

    @calibration_angle_offset.setter
    def calibration_angle_offset(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'calibration_angle_offset' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'calibration_angle_offset' numpy.ndarray() must have a size of 12"
            self._calibration_angle_offset = value
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
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'calibration_angle_offset' field must be a set or sequence with length 12 and each value of type 'float'"
        self._calibration_angle_offset = numpy.array(value, dtype=numpy.float32)

    @property
    def ms_per_degree(self):
        """Message field 'ms_per_degree'."""
        return self._ms_per_degree

    @ms_per_degree.setter
    def ms_per_degree(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'ms_per_degree' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'ms_per_degree' numpy.ndarray() must have a size of 12"
            self._ms_per_degree = value
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
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'ms_per_degree' field must be a set or sequence with length 12 and each value of type 'float'"
        self._ms_per_degree = numpy.array(value, dtype=numpy.float32)
