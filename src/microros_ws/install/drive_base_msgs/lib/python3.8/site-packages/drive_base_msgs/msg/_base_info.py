# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_base_msgs:msg/BaseInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BaseInfo(type):
    """Metaclass of message 'BaseInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POWER_SUPPLY_STATUS_UNKNOWN': 0,
        'POWER_SUPPLY_STATUS_CHARGING': 1,
        'POWER_SUPPLY_STATUS_DISCHARGING': 2,
        'POWER_SUPPLY_STATUS_NOT_CHARGING': 3,
        'POWER_SUPPLY_STATUS_FULL': 4,
        'SAFETY_STATE_OPERATIONAL': 1,
        'SAFETY_STATE_LOW_SPEED': 2,
        'SAFETY_STATE_NO_FORWARD': 4,
        'SAFETY_STATE_NO_BACKWARD': 8,
        'SAFETY_STATE_NO_ROTATE': 16,
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
                'drive_base_msgs.msg.BaseInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__base_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__base_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__base_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__base_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__base_info

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POWER_SUPPLY_STATUS_UNKNOWN': cls.__constants['POWER_SUPPLY_STATUS_UNKNOWN'],
            'POWER_SUPPLY_STATUS_CHARGING': cls.__constants['POWER_SUPPLY_STATUS_CHARGING'],
            'POWER_SUPPLY_STATUS_DISCHARGING': cls.__constants['POWER_SUPPLY_STATUS_DISCHARGING'],
            'POWER_SUPPLY_STATUS_NOT_CHARGING': cls.__constants['POWER_SUPPLY_STATUS_NOT_CHARGING'],
            'POWER_SUPPLY_STATUS_FULL': cls.__constants['POWER_SUPPLY_STATUS_FULL'],
            'SAFETY_STATE_OPERATIONAL': cls.__constants['SAFETY_STATE_OPERATIONAL'],
            'SAFETY_STATE_LOW_SPEED': cls.__constants['SAFETY_STATE_LOW_SPEED'],
            'SAFETY_STATE_NO_FORWARD': cls.__constants['SAFETY_STATE_NO_FORWARD'],
            'SAFETY_STATE_NO_BACKWARD': cls.__constants['SAFETY_STATE_NO_BACKWARD'],
            'SAFETY_STATE_NO_ROTATE': cls.__constants['SAFETY_STATE_NO_ROTATE'],
        }

    @property
    def POWER_SUPPLY_STATUS_UNKNOWN(self):
        """Message constant 'POWER_SUPPLY_STATUS_UNKNOWN'."""
        return Metaclass_BaseInfo.__constants['POWER_SUPPLY_STATUS_UNKNOWN']

    @property
    def POWER_SUPPLY_STATUS_CHARGING(self):
        """Message constant 'POWER_SUPPLY_STATUS_CHARGING'."""
        return Metaclass_BaseInfo.__constants['POWER_SUPPLY_STATUS_CHARGING']

    @property
    def POWER_SUPPLY_STATUS_DISCHARGING(self):
        """Message constant 'POWER_SUPPLY_STATUS_DISCHARGING'."""
        return Metaclass_BaseInfo.__constants['POWER_SUPPLY_STATUS_DISCHARGING']

    @property
    def POWER_SUPPLY_STATUS_NOT_CHARGING(self):
        """Message constant 'POWER_SUPPLY_STATUS_NOT_CHARGING'."""
        return Metaclass_BaseInfo.__constants['POWER_SUPPLY_STATUS_NOT_CHARGING']

    @property
    def POWER_SUPPLY_STATUS_FULL(self):
        """Message constant 'POWER_SUPPLY_STATUS_FULL'."""
        return Metaclass_BaseInfo.__constants['POWER_SUPPLY_STATUS_FULL']

    @property
    def SAFETY_STATE_OPERATIONAL(self):
        """Message constant 'SAFETY_STATE_OPERATIONAL'."""
        return Metaclass_BaseInfo.__constants['SAFETY_STATE_OPERATIONAL']

    @property
    def SAFETY_STATE_LOW_SPEED(self):
        """Message constant 'SAFETY_STATE_LOW_SPEED'."""
        return Metaclass_BaseInfo.__constants['SAFETY_STATE_LOW_SPEED']

    @property
    def SAFETY_STATE_NO_FORWARD(self):
        """Message constant 'SAFETY_STATE_NO_FORWARD'."""
        return Metaclass_BaseInfo.__constants['SAFETY_STATE_NO_FORWARD']

    @property
    def SAFETY_STATE_NO_BACKWARD(self):
        """Message constant 'SAFETY_STATE_NO_BACKWARD'."""
        return Metaclass_BaseInfo.__constants['SAFETY_STATE_NO_BACKWARD']

    @property
    def SAFETY_STATE_NO_ROTATE(self):
        """Message constant 'SAFETY_STATE_NO_ROTATE'."""
        return Metaclass_BaseInfo.__constants['SAFETY_STATE_NO_ROTATE']


class BaseInfo(metaclass=Metaclass_BaseInfo):
    """
    Message class 'BaseInfo'.

    Constants:
      POWER_SUPPLY_STATUS_UNKNOWN
      POWER_SUPPLY_STATUS_CHARGING
      POWER_SUPPLY_STATUS_DISCHARGING
      POWER_SUPPLY_STATUS_NOT_CHARGING
      POWER_SUPPLY_STATUS_FULL
      SAFETY_STATE_OPERATIONAL
      SAFETY_STATE_LOW_SPEED
      SAFETY_STATE_NO_FORWARD
      SAFETY_STATE_NO_BACKWARD
      SAFETY_STATE_NO_ROTATE
    """

    __slots__ = [
        '_hw_id',
        '_hw_timestamp',
        '_stamp',
        '_x',
        '_y',
        '_orientation',
        '_forward_velocity',
        '_rotational_velocity',
        '_battery_voltage_pct',
        '_power_supply',
        '_overcurrent',
        '_blocked',
        '_in_collision',
        '_at_cliff',
        '_safety_state',
    ]

    _fields_and_field_types = {
        'hw_id': 'uint32',
        'hw_timestamp': 'uint32',
        'stamp': 'builtin_interfaces/Time',
        'x': 'float',
        'y': 'float',
        'orientation': 'float',
        'forward_velocity': 'float',
        'rotational_velocity': 'float',
        'battery_voltage_pct': 'uint8',
        'power_supply': 'uint8',
        'overcurrent': 'boolean',
        'blocked': 'boolean',
        'in_collision': 'boolean',
        'at_cliff': 'boolean',
        'safety_state': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hw_id = kwargs.get('hw_id', int())
        self.hw_timestamp = kwargs.get('hw_timestamp', int())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.orientation = kwargs.get('orientation', float())
        self.forward_velocity = kwargs.get('forward_velocity', float())
        self.rotational_velocity = kwargs.get('rotational_velocity', float())
        self.battery_voltage_pct = kwargs.get('battery_voltage_pct', int())
        self.power_supply = kwargs.get('power_supply', int())
        self.overcurrent = kwargs.get('overcurrent', bool())
        self.blocked = kwargs.get('blocked', bool())
        self.in_collision = kwargs.get('in_collision', bool())
        self.at_cliff = kwargs.get('at_cliff', bool())
        self.safety_state = kwargs.get('safety_state', int())

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
        if self.hw_id != other.hw_id:
            return False
        if self.hw_timestamp != other.hw_timestamp:
            return False
        if self.stamp != other.stamp:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.orientation != other.orientation:
            return False
        if self.forward_velocity != other.forward_velocity:
            return False
        if self.rotational_velocity != other.rotational_velocity:
            return False
        if self.battery_voltage_pct != other.battery_voltage_pct:
            return False
        if self.power_supply != other.power_supply:
            return False
        if self.overcurrent != other.overcurrent:
            return False
        if self.blocked != other.blocked:
            return False
        if self.in_collision != other.in_collision:
            return False
        if self.at_cliff != other.at_cliff:
            return False
        if self.safety_state != other.safety_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def hw_id(self):
        """Message field 'hw_id'."""
        return self._hw_id

    @hw_id.setter
    def hw_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hw_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'hw_id' field must be an unsigned integer in [0, 4294967295]"
        self._hw_id = value

    @property
    def hw_timestamp(self):
        """Message field 'hw_timestamp'."""
        return self._hw_timestamp

    @hw_timestamp.setter
    def hw_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hw_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'hw_timestamp' field must be an unsigned integer in [0, 4294967295]"
        self._hw_timestamp = value

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
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation' field must be of type 'float'"
        self._orientation = value

    @property
    def forward_velocity(self):
        """Message field 'forward_velocity'."""
        return self._forward_velocity

    @forward_velocity.setter
    def forward_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forward_velocity' field must be of type 'float'"
        self._forward_velocity = value

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

    @property
    def battery_voltage_pct(self):
        """Message field 'battery_voltage_pct'."""
        return self._battery_voltage_pct

    @battery_voltage_pct.setter
    def battery_voltage_pct(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_voltage_pct' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'battery_voltage_pct' field must be an unsigned integer in [0, 255]"
        self._battery_voltage_pct = value

    @property
    def power_supply(self):
        """Message field 'power_supply'."""
        return self._power_supply

    @power_supply.setter
    def power_supply(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_supply' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_supply' field must be an unsigned integer in [0, 255]"
        self._power_supply = value

    @property
    def overcurrent(self):
        """Message field 'overcurrent'."""
        return self._overcurrent

    @overcurrent.setter
    def overcurrent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'overcurrent' field must be of type 'bool'"
        self._overcurrent = value

    @property
    def blocked(self):
        """Message field 'blocked'."""
        return self._blocked

    @blocked.setter
    def blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'blocked' field must be of type 'bool'"
        self._blocked = value

    @property
    def in_collision(self):
        """Message field 'in_collision'."""
        return self._in_collision

    @in_collision.setter
    def in_collision(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_collision' field must be of type 'bool'"
        self._in_collision = value

    @property
    def at_cliff(self):
        """Message field 'at_cliff'."""
        return self._at_cliff

    @at_cliff.setter
    def at_cliff(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'at_cliff' field must be of type 'bool'"
        self._at_cliff = value

    @property
    def safety_state(self):
        """Message field 'safety_state'."""
        return self._safety_state

    @safety_state.setter
    def safety_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'safety_state' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'safety_state' field must be an unsigned integer in [0, 65535]"
        self._safety_state = value
