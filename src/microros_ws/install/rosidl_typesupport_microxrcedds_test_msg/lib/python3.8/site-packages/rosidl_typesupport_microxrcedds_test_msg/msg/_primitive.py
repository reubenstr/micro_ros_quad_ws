# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'char_array_test'
# Member 'float32_array_test'
# Member 'float64_array_test'
# Member 'int8_array_test'
# Member 'uint8_array_test'
# Member 'int16_array_test'
# Member 'uint16_array_test'
# Member 'int32_array_test'
# Member 'uint32_array_test'
# Member 'int64_array_test'
# Member 'uint64_array_test'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Primitive(type):
    """Metaclass of message 'Primitive'."""

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
                'rosidl_typesupport_microxrcedds_test_msg.msg.Primitive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__primitive
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__primitive
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__primitive
            cls._TYPE_SUPPORT = module.type_support_msg__msg__primitive
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__primitive

            from rosidl_typesupport_microxrcedds_test_msg.msg import UnboundedString
            if UnboundedString.__class__._TYPE_SUPPORT is None:
                UnboundedString.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Primitive(metaclass=Metaclass_Primitive):
    """Message class 'Primitive'."""

    __slots__ = [
        '_bool_test',
        '_bool_array_test',
        '_byte_test',
        '_byte_array_test',
        '_char_test',
        '_char_array_test',
        '_float32_test',
        '_float32_array_test',
        '_double_test',
        '_float64_array_test',
        '_int8_test',
        '_int8_array_test',
        '_uint8_test',
        '_uint8_array_test',
        '_int16_test',
        '_int16_array_test',
        '_uint16_test',
        '_uint16_array_test',
        '_int32_test',
        '_int32_array_test',
        '_uint32_test',
        '_uint32_array_test',
        '_int64_test',
        '_int64_array_test',
        '_uint64_test',
        '_uint64_array_test',
        '_nested_test',
    ]

    _fields_and_field_types = {
        'bool_test': 'boolean',
        'bool_array_test': 'boolean[11]',
        'byte_test': 'octet',
        'byte_array_test': 'octet[11]',
        'char_test': 'uint8',
        'char_array_test': 'uint8[11]',
        'float32_test': 'float',
        'float32_array_test': 'float[11]',
        'double_test': 'double',
        'float64_array_test': 'double[11]',
        'int8_test': 'int8',
        'int8_array_test': 'int8[11]',
        'uint8_test': 'uint8',
        'uint8_array_test': 'uint8[11]',
        'int16_test': 'int16',
        'int16_array_test': 'int16[11]',
        'uint16_test': 'uint16',
        'uint16_array_test': 'uint16[11]',
        'int32_test': 'int32',
        'int32_array_test': 'int32[11]',
        'uint32_test': 'uint32',
        'uint32_array_test': 'uint32[11]',
        'int64_test': 'int64',
        'int64_array_test': 'int64[11]',
        'uint64_test': 'uint64',
        'uint64_array_test': 'uint64[11]',
        'nested_test': 'rosidl_typesupport_microxrcedds_test_msg/UnboundedString',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('octet'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int64'), 11),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint64'), 11),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rosidl_typesupport_microxrcedds_test_msg', 'msg'], 'UnboundedString'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bool_test = kwargs.get('bool_test', bool())
        self.bool_array_test = kwargs.get(
            'bool_array_test',
            [bool() for x in range(11)]
        )
        self.byte_test = kwargs.get('byte_test', bytes([0]))
        self.byte_array_test = kwargs.get(
            'byte_array_test',
            [bytes([0]) for x in range(11)]
        )
        self.char_test = kwargs.get('char_test', int())
        if 'char_array_test' not in kwargs:
            self.char_array_test = numpy.zeros(11, dtype=numpy.uint8)
        else:
            self.char_array_test = numpy.array(kwargs.get('char_array_test'), dtype=numpy.uint8)
            assert self.char_array_test.shape == (11, )
        self.float32_test = kwargs.get('float32_test', float())
        if 'float32_array_test' not in kwargs:
            self.float32_array_test = numpy.zeros(11, dtype=numpy.float32)
        else:
            self.float32_array_test = numpy.array(kwargs.get('float32_array_test'), dtype=numpy.float32)
            assert self.float32_array_test.shape == (11, )
        self.double_test = kwargs.get('double_test', float())
        if 'float64_array_test' not in kwargs:
            self.float64_array_test = numpy.zeros(11, dtype=numpy.float64)
        else:
            self.float64_array_test = numpy.array(kwargs.get('float64_array_test'), dtype=numpy.float64)
            assert self.float64_array_test.shape == (11, )
        self.int8_test = kwargs.get('int8_test', int())
        if 'int8_array_test' not in kwargs:
            self.int8_array_test = numpy.zeros(11, dtype=numpy.int8)
        else:
            self.int8_array_test = numpy.array(kwargs.get('int8_array_test'), dtype=numpy.int8)
            assert self.int8_array_test.shape == (11, )
        self.uint8_test = kwargs.get('uint8_test', int())
        if 'uint8_array_test' not in kwargs:
            self.uint8_array_test = numpy.zeros(11, dtype=numpy.uint8)
        else:
            self.uint8_array_test = numpy.array(kwargs.get('uint8_array_test'), dtype=numpy.uint8)
            assert self.uint8_array_test.shape == (11, )
        self.int16_test = kwargs.get('int16_test', int())
        if 'int16_array_test' not in kwargs:
            self.int16_array_test = numpy.zeros(11, dtype=numpy.int16)
        else:
            self.int16_array_test = numpy.array(kwargs.get('int16_array_test'), dtype=numpy.int16)
            assert self.int16_array_test.shape == (11, )
        self.uint16_test = kwargs.get('uint16_test', int())
        if 'uint16_array_test' not in kwargs:
            self.uint16_array_test = numpy.zeros(11, dtype=numpy.uint16)
        else:
            self.uint16_array_test = numpy.array(kwargs.get('uint16_array_test'), dtype=numpy.uint16)
            assert self.uint16_array_test.shape == (11, )
        self.int32_test = kwargs.get('int32_test', int())
        if 'int32_array_test' not in kwargs:
            self.int32_array_test = numpy.zeros(11, dtype=numpy.int32)
        else:
            self.int32_array_test = numpy.array(kwargs.get('int32_array_test'), dtype=numpy.int32)
            assert self.int32_array_test.shape == (11, )
        self.uint32_test = kwargs.get('uint32_test', int())
        if 'uint32_array_test' not in kwargs:
            self.uint32_array_test = numpy.zeros(11, dtype=numpy.uint32)
        else:
            self.uint32_array_test = numpy.array(kwargs.get('uint32_array_test'), dtype=numpy.uint32)
            assert self.uint32_array_test.shape == (11, )
        self.int64_test = kwargs.get('int64_test', int())
        if 'int64_array_test' not in kwargs:
            self.int64_array_test = numpy.zeros(11, dtype=numpy.int64)
        else:
            self.int64_array_test = numpy.array(kwargs.get('int64_array_test'), dtype=numpy.int64)
            assert self.int64_array_test.shape == (11, )
        self.uint64_test = kwargs.get('uint64_test', int())
        if 'uint64_array_test' not in kwargs:
            self.uint64_array_test = numpy.zeros(11, dtype=numpy.uint64)
        else:
            self.uint64_array_test = numpy.array(kwargs.get('uint64_array_test'), dtype=numpy.uint64)
            assert self.uint64_array_test.shape == (11, )
        from rosidl_typesupport_microxrcedds_test_msg.msg import UnboundedString
        self.nested_test = kwargs.get('nested_test', UnboundedString())

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
        if self.bool_test != other.bool_test:
            return False
        if self.bool_array_test != other.bool_array_test:
            return False
        if self.byte_test != other.byte_test:
            return False
        if self.byte_array_test != other.byte_array_test:
            return False
        if self.char_test != other.char_test:
            return False
        if all(self.char_array_test != other.char_array_test):
            return False
        if self.float32_test != other.float32_test:
            return False
        if all(self.float32_array_test != other.float32_array_test):
            return False
        if self.double_test != other.double_test:
            return False
        if all(self.float64_array_test != other.float64_array_test):
            return False
        if self.int8_test != other.int8_test:
            return False
        if all(self.int8_array_test != other.int8_array_test):
            return False
        if self.uint8_test != other.uint8_test:
            return False
        if all(self.uint8_array_test != other.uint8_array_test):
            return False
        if self.int16_test != other.int16_test:
            return False
        if all(self.int16_array_test != other.int16_array_test):
            return False
        if self.uint16_test != other.uint16_test:
            return False
        if all(self.uint16_array_test != other.uint16_array_test):
            return False
        if self.int32_test != other.int32_test:
            return False
        if all(self.int32_array_test != other.int32_array_test):
            return False
        if self.uint32_test != other.uint32_test:
            return False
        if all(self.uint32_array_test != other.uint32_array_test):
            return False
        if self.int64_test != other.int64_test:
            return False
        if all(self.int64_array_test != other.int64_array_test):
            return False
        if self.uint64_test != other.uint64_test:
            return False
        if all(self.uint64_array_test != other.uint64_array_test):
            return False
        if self.nested_test != other.nested_test:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def bool_test(self):
        """Message field 'bool_test'."""
        return self._bool_test

    @bool_test.setter
    def bool_test(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bool_test' field must be of type 'bool'"
        self._bool_test = value

    @property
    def bool_array_test(self):
        """Message field 'bool_array_test'."""
        return self._bool_array_test

    @bool_array_test.setter
    def bool_array_test(self, value):
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
                 len(value) == 11 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'bool_array_test' field must be a set or sequence with length 11 and each value of type 'bool'"
        self._bool_array_test = value

    @property
    def byte_test(self):
        """Message field 'byte_test'."""
        return self._byte_test

    @byte_test.setter
    def byte_test(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'byte_test' field must be of type 'bytes' or 'ByteString' with length 1"
        self._byte_test = value

    @property
    def byte_array_test(self):
        """Message field 'byte_array_test'."""
        return self._byte_array_test

    @byte_array_test.setter
    def byte_array_test(self, value):
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
                 len(value) == 11 and
                 all(isinstance(v, bytes) for v in value) and
                 True), \
                "The 'byte_array_test' field must be a set or sequence with length 11 and each value of type 'bytes'"
        self._byte_array_test = value

    @property
    def char_test(self):
        """Message field 'char_test'."""
        return self._char_test

    @char_test.setter
    def char_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'char_test' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'char_test' field must be an unsigned integer in [0, 255]"
        self._char_test = value

    @property
    def char_array_test(self):
        """Message field 'char_array_test'."""
        return self._char_array_test

    @char_array_test.setter
    def char_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'char_array_test' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 11, \
                "The 'char_array_test' numpy.ndarray() must have a size of 11"
            self._char_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'char_array_test' field must be a set or sequence with length 11 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._char_array_test = numpy.array(value, dtype=numpy.uint8)

    @property
    def float32_test(self):
        """Message field 'float32_test'."""
        return self._float32_test

    @float32_test.setter
    def float32_test(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'float32_test' field must be of type 'float'"
        self._float32_test = value

    @property
    def float32_array_test(self):
        """Message field 'float32_array_test'."""
        return self._float32_array_test

    @float32_array_test.setter
    def float32_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'float32_array_test' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 11, \
                "The 'float32_array_test' numpy.ndarray() must have a size of 11"
            self._float32_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'float32_array_test' field must be a set or sequence with length 11 and each value of type 'float'"
        self._float32_array_test = numpy.array(value, dtype=numpy.float32)

    @property
    def double_test(self):
        """Message field 'double_test'."""
        return self._double_test

    @double_test.setter
    def double_test(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'double_test' field must be of type 'float'"
        self._double_test = value

    @property
    def float64_array_test(self):
        """Message field 'float64_array_test'."""
        return self._float64_array_test

    @float64_array_test.setter
    def float64_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'float64_array_test' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 11, \
                "The 'float64_array_test' numpy.ndarray() must have a size of 11"
            self._float64_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'float64_array_test' field must be a set or sequence with length 11 and each value of type 'float'"
        self._float64_array_test = numpy.array(value, dtype=numpy.float64)

    @property
    def int8_test(self):
        """Message field 'int8_test'."""
        return self._int8_test

    @int8_test.setter
    def int8_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int8_test' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'int8_test' field must be an integer in [-128, 127]"
        self._int8_test = value

    @property
    def int8_array_test(self):
        """Message field 'int8_array_test'."""
        return self._int8_array_test

    @int8_array_test.setter
    def int8_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int8, \
                "The 'int8_array_test' numpy.ndarray() must have the dtype of 'numpy.int8'"
            assert value.size == 11, \
                "The 'int8_array_test' numpy.ndarray() must have a size of 11"
            self._int8_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'int8_array_test' field must be a set or sequence with length 11 and each value of type 'int' and each integer in [-128, 127]"
        self._int8_array_test = numpy.array(value, dtype=numpy.int8)

    @property
    def uint8_test(self):
        """Message field 'uint8_test'."""
        return self._uint8_test

    @uint8_test.setter
    def uint8_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint8_test' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'uint8_test' field must be an unsigned integer in [0, 255]"
        self._uint8_test = value

    @property
    def uint8_array_test(self):
        """Message field 'uint8_array_test'."""
        return self._uint8_array_test

    @uint8_array_test.setter
    def uint8_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'uint8_array_test' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 11, \
                "The 'uint8_array_test' numpy.ndarray() must have a size of 11"
            self._uint8_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'uint8_array_test' field must be a set or sequence with length 11 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._uint8_array_test = numpy.array(value, dtype=numpy.uint8)

    @property
    def int16_test(self):
        """Message field 'int16_test'."""
        return self._int16_test

    @int16_test.setter
    def int16_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int16_test' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'int16_test' field must be an integer in [-32768, 32767]"
        self._int16_test = value

    @property
    def int16_array_test(self):
        """Message field 'int16_array_test'."""
        return self._int16_array_test

    @int16_array_test.setter
    def int16_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'int16_array_test' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 11, \
                "The 'int16_array_test' numpy.ndarray() must have a size of 11"
            self._int16_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'int16_array_test' field must be a set or sequence with length 11 and each value of type 'int' and each integer in [-32768, 32767]"
        self._int16_array_test = numpy.array(value, dtype=numpy.int16)

    @property
    def uint16_test(self):
        """Message field 'uint16_test'."""
        return self._uint16_test

    @uint16_test.setter
    def uint16_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint16_test' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'uint16_test' field must be an unsigned integer in [0, 65535]"
        self._uint16_test = value

    @property
    def uint16_array_test(self):
        """Message field 'uint16_array_test'."""
        return self._uint16_array_test

    @uint16_array_test.setter
    def uint16_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'uint16_array_test' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 11, \
                "The 'uint16_array_test' numpy.ndarray() must have a size of 11"
            self._uint16_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'uint16_array_test' field must be a set or sequence with length 11 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._uint16_array_test = numpy.array(value, dtype=numpy.uint16)

    @property
    def int32_test(self):
        """Message field 'int32_test'."""
        return self._int32_test

    @int32_test.setter
    def int32_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int32_test' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'int32_test' field must be an integer in [-2147483648, 2147483647]"
        self._int32_test = value

    @property
    def int32_array_test(self):
        """Message field 'int32_array_test'."""
        return self._int32_array_test

    @int32_array_test.setter
    def int32_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'int32_array_test' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 11, \
                "The 'int32_array_test' numpy.ndarray() must have a size of 11"
            self._int32_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'int32_array_test' field must be a set or sequence with length 11 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._int32_array_test = numpy.array(value, dtype=numpy.int32)

    @property
    def uint32_test(self):
        """Message field 'uint32_test'."""
        return self._uint32_test

    @uint32_test.setter
    def uint32_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint32_test' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uint32_test' field must be an unsigned integer in [0, 4294967295]"
        self._uint32_test = value

    @property
    def uint32_array_test(self):
        """Message field 'uint32_array_test'."""
        return self._uint32_array_test

    @uint32_array_test.setter
    def uint32_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'uint32_array_test' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 11, \
                "The 'uint32_array_test' numpy.ndarray() must have a size of 11"
            self._uint32_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'uint32_array_test' field must be a set or sequence with length 11 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._uint32_array_test = numpy.array(value, dtype=numpy.uint32)

    @property
    def int64_test(self):
        """Message field 'int64_test'."""
        return self._int64_test

    @int64_test.setter
    def int64_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int64_test' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'int64_test' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._int64_test = value

    @property
    def int64_array_test(self):
        """Message field 'int64_array_test'."""
        return self._int64_array_test

    @int64_array_test.setter
    def int64_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int64, \
                "The 'int64_array_test' numpy.ndarray() must have the dtype of 'numpy.int64'"
            assert value.size == 11, \
                "The 'int64_array_test' numpy.ndarray() must have a size of 11"
            self._int64_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'int64_array_test' field must be a set or sequence with length 11 and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._int64_array_test = numpy.array(value, dtype=numpy.int64)

    @property
    def uint64_test(self):
        """Message field 'uint64_test'."""
        return self._uint64_test

    @uint64_test.setter
    def uint64_test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint64_test' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'uint64_test' field must be an unsigned integer in [0, 18446744073709551615]"
        self._uint64_test = value

    @property
    def uint64_array_test(self):
        """Message field 'uint64_array_test'."""
        return self._uint64_array_test

    @uint64_array_test.setter
    def uint64_array_test(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint64, \
                "The 'uint64_array_test' numpy.ndarray() must have the dtype of 'numpy.uint64'"
            assert value.size == 11, \
                "The 'uint64_array_test' numpy.ndarray() must have a size of 11"
            self._uint64_array_test = value
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
                 len(value) == 11 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'uint64_array_test' field must be a set or sequence with length 11 and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._uint64_array_test = numpy.array(value, dtype=numpy.uint64)

    @property
    def nested_test(self):
        """Message field 'nested_test'."""
        return self._nested_test

    @nested_test.setter
    def nested_test(self, value):
        if __debug__:
            from rosidl_typesupport_microxrcedds_test_msg.msg import UnboundedString
            assert \
                isinstance(value, UnboundedString), \
                "The 'nested_test' field must be a sub message of type 'UnboundedString'"
        self._nested_test = value
