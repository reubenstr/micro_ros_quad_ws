// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__rosidl_typesupport_introspection_c.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.h"


// Include directives for member types
// Member `nested_test`
#include "rosidl_typesupport_microxrcedds_test_msg/msg/unbounded_string.h"
// Member `nested_test`
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Primitive__rosidl_typesupport_introspection_c__Primitive_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__init(message_memory);
}

void Primitive__rosidl_typesupport_introspection_c__Primitive_fini_function(void * message_memory)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Primitive__rosidl_typesupport_introspection_c__Primitive_message_member_array[27] = {
  {
    "bool_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, bool_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bool_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, bool_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, byte_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, byte_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, char_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, char_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float32_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, float32_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float32_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, float32_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "double_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, double_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float64_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, float64_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int8_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, int8_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int8_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, int8_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint8_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, uint8_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint8_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, uint8_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int16_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, int16_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int16_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, int16_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint16_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, uint16_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint16_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, uint16_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int32_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, int32_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int32_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, int32_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint32_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, uint32_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint32_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, uint32_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int64_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, int64_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int64_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, int64_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint64_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, uint64_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint64_array_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, uint64_array_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nested_test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive, nested_test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Primitive__rosidl_typesupport_introspection_c__Primitive_message_members = {
  "rosidl_typesupport_microxrcedds_test_msg__msg",  // message namespace
  "Primitive",  // message name
  27,  // number of fields
  sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive),
  Primitive__rosidl_typesupport_introspection_c__Primitive_message_member_array,  // message members
  Primitive__rosidl_typesupport_introspection_c__Primitive_init_function,  // function to initialize message memory (memory has to be allocated)
  Primitive__rosidl_typesupport_introspection_c__Primitive_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Primitive__rosidl_typesupport_introspection_c__Primitive_message_type_support_handle = {
  0,
  &Primitive__rosidl_typesupport_introspection_c__Primitive_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosidl_typesupport_microxrcedds_test_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive)() {
  Primitive__rosidl_typesupport_introspection_c__Primitive_message_member_array[26].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString)();
  if (!Primitive__rosidl_typesupport_introspection_c__Primitive_message_type_support_handle.typesupport_identifier) {
    Primitive__rosidl_typesupport_introspection_c__Primitive_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Primitive__rosidl_typesupport_introspection_c__Primitive_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
