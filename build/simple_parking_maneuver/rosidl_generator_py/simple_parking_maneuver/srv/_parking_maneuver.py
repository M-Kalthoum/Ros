# generated from rosidl_generator_py/resource/_idl.py.em
# with input from simple_parking_maneuver:srv/ParkingManeuver.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParkingManeuver_Request(type):
    """Metaclass of message 'ParkingManeuver_Request'."""

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
            module = import_type_support('simple_parking_maneuver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'simple_parking_maneuver.srv.ParkingManeuver_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__parking_maneuver__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__parking_maneuver__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__parking_maneuver__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__parking_maneuver__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__parking_maneuver__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParkingManeuver_Request(metaclass=Metaclass_ParkingManeuver_Request):
    """Message class 'ParkingManeuver_Request'."""

    __slots__ = [
        '_direction',
    ]

    _fields_and_field_types = {
        'direction': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.direction = kwargs.get('direction', str())

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
        if self.direction != other.direction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'direction' field must be of type 'str'"
        self._direction = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ParkingManeuver_Response(type):
    """Metaclass of message 'ParkingManeuver_Response'."""

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
            module = import_type_support('simple_parking_maneuver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'simple_parking_maneuver.srv.ParkingManeuver_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__parking_maneuver__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__parking_maneuver__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__parking_maneuver__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__parking_maneuver__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__parking_maneuver__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParkingManeuver_Response(metaclass=Metaclass_ParkingManeuver_Response):
    """Message class 'ParkingManeuver_Response'."""

    __slots__ = [
        '_info',
    ]

    _fields_and_field_types = {
        'info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.info = kwargs.get('info', str())

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
        if self.info != other.info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'info' field must be of type 'str'"
        self._info = value


class Metaclass_ParkingManeuver(type):
    """Metaclass of service 'ParkingManeuver'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('simple_parking_maneuver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'simple_parking_maneuver.srv.ParkingManeuver')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__parking_maneuver

            from simple_parking_maneuver.srv import _parking_maneuver
            if _parking_maneuver.Metaclass_ParkingManeuver_Request._TYPE_SUPPORT is None:
                _parking_maneuver.Metaclass_ParkingManeuver_Request.__import_type_support__()
            if _parking_maneuver.Metaclass_ParkingManeuver_Response._TYPE_SUPPORT is None:
                _parking_maneuver.Metaclass_ParkingManeuver_Response.__import_type_support__()


class ParkingManeuver(metaclass=Metaclass_ParkingManeuver):
    from simple_parking_maneuver.srv._parking_maneuver import ParkingManeuver_Request as Request
    from simple_parking_maneuver.srv._parking_maneuver import ParkingManeuver_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
