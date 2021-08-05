# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'int64_sequence'
import array  # noqa: E402, I100

# Member 'int16_array'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NotEnoughtMemoryTest(type):
    """Metaclass of message 'NotEnoughtMemoryTest'."""

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
            module = import_type_support('rosidl_typesupport_microxrcedds_test_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosidl_typesupport_microxrcedds_test_msg.msg.NotEnoughtMemoryTest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__not_enought_memory_test
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__not_enought_memory_test
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__not_enought_memory_test
            cls._TYPE_SUPPORT = module.type_support_msg__msg__not_enought_memory_test
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__not_enought_memory_test

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NotEnoughtMemoryTest(metaclass=Metaclass_NotEnoughtMemoryTest):
    """Message class 'NotEnoughtMemoryTest'."""

    __slots__ = [
        '_initial_byte',
        '_string',
        '_int64_sequence',
        '_int16_array',
        '_end_byte',
    ]

    _fields_and_field_types = {
        'initial_byte': 'int8',
        'string': 'string',
        'int64_sequence': 'sequence<int64>',
        'int16_array': 'int16[10]',
        'end_byte': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 10),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.initial_byte = kwargs.get('initial_byte', int())
        self.string = kwargs.get('string', str())
        self.int64_sequence = array.array('q', kwargs.get('int64_sequence', []))
        if 'int16_array' not in kwargs:
            self.int16_array = numpy.zeros(10, dtype=numpy.int16)
        else:
            self.int16_array = numpy.array(kwargs.get('int16_array'), dtype=numpy.int16)
            assert self.int16_array.shape == (10, )
        self.end_byte = kwargs.get('end_byte', int())

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
        if self.initial_byte != other.initial_byte:
            return False
        if self.string != other.string:
            return False
        if self.int64_sequence != other.int64_sequence:
            return False
        if all(self.int16_array != other.int16_array):
            return False
        if self.end_byte != other.end_byte:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def initial_byte(self):
        """Message field 'initial_byte'."""
        return self._initial_byte

    @initial_byte.setter
    def initial_byte(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'initial_byte' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'initial_byte' field must be an integer in [-128, 127]"
        self._initial_byte = value

    @property
    def string(self):
        """Message field 'string'."""
        return self._string

    @string.setter
    def string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string' field must be of type 'str'"
        self._string = value

    @property
    def int64_sequence(self):
        """Message field 'int64_sequence'."""
        return self._int64_sequence

    @int64_sequence.setter
    def int64_sequence(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'int64_sequence' array.array() must have the type code of 'q'"
            self._int64_sequence = value
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
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'int64_sequence' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._int64_sequence = array.array('q', value)

    @property
    def int16_array(self):
        """Message field 'int16_array'."""
        return self._int16_array

    @int16_array.setter
    def int16_array(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'int16_array' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 10, \
                "The 'int16_array' numpy.ndarray() must have a size of 10"
            self._int16_array = value
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
                 len(value) == 10 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'int16_array' field must be a set or sequence with length 10 and each value of type 'int' and each integer in [-32768, 32767]"
        self._int16_array = numpy.array(value, dtype=numpy.int16)

    @property
    def end_byte(self):
        """Message field 'end_byte'."""
        return self._end_byte

    @end_byte.setter
    def end_byte(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_byte' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'end_byte' field must be an integer in [-128, 127]"
        self._end_byte = value
