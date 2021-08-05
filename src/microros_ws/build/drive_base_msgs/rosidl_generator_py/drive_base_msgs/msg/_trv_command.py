# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_base_msgs:msg/TRVCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TRVCommand(type):
    """Metaclass of message 'TRVCommand'."""

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
            module = import_type_support('drive_base_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drive_base_msgs.msg.TRVCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trv_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trv_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trv_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trv_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trv_command

            from drive_base_msgs.msg import CommandHeader
            if CommandHeader.__class__._TYPE_SUPPORT is None:
                CommandHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TRVCommand(metaclass=Metaclass_TRVCommand):
    """Message class 'TRVCommand'."""

    __slots__ = [
        '_header',
        '_translational_velocity',
        '_rotational_velocity',
    ]

    _fields_and_field_types = {
        'header': 'drive_base_msgs/CommandHeader',
        'translational_velocity': 'float',
        'rotational_velocity': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['drive_base_msgs', 'msg'], 'CommandHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from drive_base_msgs.msg import CommandHeader
        self.header = kwargs.get('header', CommandHeader())
        self.translational_velocity = kwargs.get('translational_velocity', float())
        self.rotational_velocity = kwargs.get('rotational_velocity', float())

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
        if self.translational_velocity != other.translational_velocity:
            return False
        if self.rotational_velocity != other.rotational_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from drive_base_msgs.msg import CommandHeader
            assert \
                isinstance(value, CommandHeader), \
                "The 'header' field must be a sub message of type 'CommandHeader'"
        self._header = value

    @property
    def translational_velocity(self):
        """Message field 'translational_velocity'."""
        return self._translational_velocity

    @translational_velocity.setter
    def translational_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'translational_velocity' field must be of type 'float'"
        self._translational_velocity = value

    @property
    def rotational_velocity(self):
        """Message field 'rotational_velocity'."""
        return self._rotational_velocity

    @rotational_velocity.setter
    def rotational_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotational_velocity' field must be of type 'float'"
        self._rotational_velocity = value
