// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/UnboundedString.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__rosidl_typesupport_introspection_c.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__functions.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__struct.h"


// Include directives for member types
// Member `unbounded_string1`
// Member `unbounded_string2`
// Member `unbounded_string3`
// Member `unbounded_string4`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__init(message_memory);
}

void UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_fini_function(void * message_memory)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_message_member_array[4] = {
  {
    "unbounded_string1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString, unbounded_string1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unbounded_string2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString, unbounded_string2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unbounded_string3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString, unbounded_string3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unbounded_string4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString, unbounded_string4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_message_members = {
  "rosidl_typesupport_microxrcedds_test_msg__msg",  // message namespace
  "UnboundedString",  // message name
  4,  // number of fields
  sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString),
  UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_message_member_array,  // message members
  UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_init_function,  // function to initialize message memory (memory has to be allocated)
  UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_message_type_support_handle = {
  0,
  &UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosidl_typesupport_microxrcedds_test_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString)() {
  if (!UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_message_type_support_handle.typesupport_identifier) {
    UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnboundedString__rosidl_typesupport_introspection_c__UnboundedString_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
