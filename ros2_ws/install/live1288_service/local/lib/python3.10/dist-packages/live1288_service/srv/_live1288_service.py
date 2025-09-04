# generated from rosidl_generator_py/resource/_idl.py.em
# with input from live1288_service:srv/Live1288Service.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Live1288Service_Request(type):
    """Metaclass of message 'Live1288Service_Request'."""

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
            module = import_type_support('live1288_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'live1288_service.srv.Live1288Service_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__live1288_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__live1288_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__live1288_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__live1288_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__live1288_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Live1288Service_Request(metaclass=Metaclass_Live1288Service_Request):
    """Message class 'Live1288Service_Request'."""

    __slots__ = [
        '_input',
    ]

    _fields_and_field_types = {
        'input': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.input = kwargs.get('input', str())

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
        if self.input != other.input:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def input(self):  # noqa: A003
        """Message field 'input'."""
        return self._input

    @input.setter  # noqa: A003
    def input(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'input' field must be of type 'str'"
        self._input = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Live1288Service_Response(type):
    """Metaclass of message 'Live1288Service_Response'."""

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
            module = import_type_support('live1288_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'live1288_service.srv.Live1288Service_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__live1288_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__live1288_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__live1288_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__live1288_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__live1288_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Live1288Service_Response(metaclass=Metaclass_Live1288Service_Response):
    """Message class 'Live1288Service_Response'."""

    __slots__ = [
        '_output',
        '_number',
    ]

    _fields_and_field_types = {
        'output': 'string',
        'number': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.output = kwargs.get('output', str())
        self.number = kwargs.get('number', float())

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
        if self.output != other.output:
            return False
        if self.number != other.number:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def output(self):
        """Message field 'output'."""
        return self._output

    @output.setter
    def output(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'output' field must be of type 'str'"
        self._output = value

    @builtins.property
    def number(self):
        """Message field 'number'."""
        return self._number

    @number.setter
    def number(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'number' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'number' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._number = value


class Metaclass_Live1288Service(type):
    """Metaclass of service 'Live1288Service'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('live1288_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'live1288_service.srv.Live1288Service')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__live1288_service

            from live1288_service.srv import _live1288_service
            if _live1288_service.Metaclass_Live1288Service_Request._TYPE_SUPPORT is None:
                _live1288_service.Metaclass_Live1288Service_Request.__import_type_support__()
            if _live1288_service.Metaclass_Live1288Service_Response._TYPE_SUPPORT is None:
                _live1288_service.Metaclass_Live1288Service_Response.__import_type_support__()


class Live1288Service(metaclass=Metaclass_Live1288Service):
    from live1288_service.srv._live1288_service import Live1288Service_Request as Request
    from live1288_service.srv._live1288_service import Live1288Service_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
