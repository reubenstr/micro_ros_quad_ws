# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Compound(type):
    """Metaclass of message 'Compound'."""

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
                'rosidl_typesupport_microxrcedds_test_msg.msg.Compound')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__compound
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__compound
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__compound
            cls._TYPE_SUPPORT = module.type_support_msg__msg__compound
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__compound

            from rosidl_typesupport_microxrcedds_test_msg.msg import BasicPrimitive
            if BasicPrimitive.__class__._TYPE_SUPPORT is None:
                BasicPrimitive.__class__.__import_type_support__()

            from rosidl_typesupport_microxrcedds_test_msg.msg import Primitive
            if Primitive.__class__._TYPE_SUPPORT is None:
                Primitive.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Compound(metaclass=Metaclass_Compound):
    """Message class 'Compound'."""

    __slots__ = [
        '_string_data',
        '_sequence_data',
        '_array_data',
    ]

    _fields_and_field_types = {
        'string_data': 'string',
        'sequence_data': 'sequence<rosidl_typesupport_microxrcedds_test_msg/Primitive>',
        'array_data': 'rosidl_typesupport_microxrcedds_test_msg/BasicPrimitive[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rosidl_typesupport_microxrcedds_test_msg', 'msg'], 'Primitive')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['rosidl_typesupport_microxrcedds_test_msg', 'msg'], 'BasicPrimitive'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.string_data = kwargs.get('string_data', str())
        self.sequence_data = kwargs.get('sequence_data', [])
        from rosidl_typesupport_microxrcedds_test_msg.msg import BasicPrimitive
        self.array_data = kwargs.get(
            'array_data',
            [BasicPrimitive() for x in range(3)]
        )

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
        if self.string_data != other.string_data:
            return False
        if self.sequence_data != other.sequence_data:
            return False
        if self.array_data != other.array_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def string_data(self):
        """Message field 'string_data'."""
        return self._string_data

    @string_data.setter
    def string_data(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_data' field must be of type 'str'"
        self._string_data = value

    @property
    def sequence_data(self):
        """Message field 'sequence_data'."""
        return self._sequence_data

    @sequence_data.setter
    def sequence_data(self, value):
        if __debug__:
            from rosidl_typesupport_microxrcedds_test_msg.msg import Primitive
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
                 all(isinstance(v, Primitive) for v in value) and
                 True), \
                "The 'sequence_data' field must be a set or sequence and each value of type 'Primitive'"
        self._sequence_data = value

    @property
    def array_data(self):
        """Message field 'array_data'."""
        return self._array_data

    @array_data.setter
    def array_data(self, value):
        if __debug__:
            from rosidl_typesupport_microxrcedds_test_msg.msg import BasicPrimitive
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
                 len(value) == 3 and
                 all(isinstance(v, BasicPrimitive) for v in value) and
                 True), \
                "The 'array_data' field must be a set or sequence with length 3 and each value of type 'BasicPrimitive'"
        self._array_data = value
