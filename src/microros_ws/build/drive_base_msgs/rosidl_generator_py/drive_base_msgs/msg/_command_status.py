# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_base_msgs:msg/CommandStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CommandStatus(type):
    """Metaclass of message 'CommandStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 0,
        'CAPABILITIES_EXCEEDED': 1,
        'INVALID': 2,
        'POWER_INSUFFICIENT': 3,
        'TEMPORARY_FAILURE': 4,
        'SYSTEM_FAILURE': 5,
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
                'drive_base_msgs.msg.CommandStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__command_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__command_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__command_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__command_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__command_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from drive_base_msgs.msg import CommandHeader
            if CommandHeader.__class__._TYPE_SUPPORT is None:
                CommandHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'CAPABILITIES_EXCEEDED': cls.__constants['CAPABILITIES_EXCEEDED'],
            'INVALID': cls.__constants['INVALID'],
            'POWER_INSUFFICIENT': cls.__constants['POWER_INSUFFICIENT'],
            'TEMPORARY_FAILURE': cls.__constants['TEMPORARY_FAILURE'],
            'SYSTEM_FAILURE': cls.__constants['SYSTEM_FAILURE'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_CommandStatus.__constants['OK']

    @property
    def CAPABILITIES_EXCEEDED(self):
        """Message constant 'CAPABILITIES_EXCEEDED'."""
        return Metaclass_CommandStatus.__constants['CAPABILITIES_EXCEEDED']

    @property
    def INVALID(self):
        """Message constant 'INVALID'."""
        return Metaclass_CommandStatus.__constants['INVALID']

    @property
    def POWER_INSUFFICIENT(self):
        """Message constant 'POWER_INSUFFICIENT'."""
        return Metaclass_CommandStatus.__constants['POWER_INSUFFICIENT']

    @property
    def TEMPORARY_FAILURE(self):
        """Message constant 'TEMPORARY_FAILURE'."""
        return Metaclass_CommandStatus.__constants['TEMPORARY_FAILURE']

    @property
    def SYSTEM_FAILURE(self):
        """Message constant 'SYSTEM_FAILURE'."""
        return Metaclass_CommandStatus.__constants['SYSTEM_FAILURE']


class CommandStatus(metaclass=Metaclass_CommandStatus):
    """
    Message class 'CommandStatus'.

    Constants:
      OK
      CAPABILITIES_EXCEEDED
      INVALID
      POWER_INSUFFICIENT
      TEMPORARY_FAILURE
      SYSTEM_FAILURE
    """

    __slots__ = [
        '_stamp',
        '_cmd_header',
        '_status',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'cmd_header': 'drive_base_msgs/CommandHeader',
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['drive_base_msgs', 'msg'], 'CommandHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        from drive_base_msgs.msg import CommandHeader
        self.cmd_header = kwargs.get('cmd_header', CommandHeader())
        self.status = kwargs.get('status', int())

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
        if self.stamp != other.stamp:
            return False
        if self.cmd_header != other.cmd_header:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def cmd_header(self):
        """Message field 'cmd_header'."""
        return self._cmd_header

    @cmd_header.setter
    def cmd_header(self, value):
        if __debug__:
            from drive_base_msgs.msg import CommandHeader
            assert \
                isinstance(value, CommandHeader), \
                "The 'cmd_header' field must be a sub message of type 'CommandHeader'"
        self._cmd_header = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
