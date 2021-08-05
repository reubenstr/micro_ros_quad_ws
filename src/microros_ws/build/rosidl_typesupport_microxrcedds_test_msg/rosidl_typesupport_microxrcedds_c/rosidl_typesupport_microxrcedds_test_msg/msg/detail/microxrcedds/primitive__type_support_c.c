// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__functions.h"  // nested_test

// forward declare type support functions
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString)();


typedef rosidl_typesupport_microxrcedds_test_msg__msg__Primitive _Primitive__ros_msg_type;

static bool _Primitive__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }

  _Primitive__ros_msg_type * ros_message = (_Primitive__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: bool_test
  rv = ucdr_serialize_bool(cdr, ros_message->bool_test);
  // Member: bool_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_bool(cdr, ros_message->bool_array_test, size);
  }
  // Member: byte_test
  rv = ucdr_serialize_uint8_t(cdr, ros_message->byte_test);
  // Member: byte_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->byte_array_test, size);
  }
  // Member: char_test
  rv = ucdr_serialize_uint8_t(cdr, ros_message->char_test);
  // Member: char_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->char_array_test, size);
  }
  // Member: float32_test
  rv = ucdr_serialize_float(cdr, ros_message->float32_test);
  // Member: float32_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_float(cdr, ros_message->float32_array_test, size);
  }
  // Member: double_test
  rv = ucdr_serialize_double(cdr, ros_message->double_test);
  // Member: float64_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_double(cdr, ros_message->float64_array_test, size);
  }
  // Member: int8_test
  rv = ucdr_serialize_int8_t(cdr, ros_message->int8_test);
  // Member: int8_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_int8_t(cdr, ros_message->int8_array_test, size);
  }
  // Member: uint8_test
  rv = ucdr_serialize_uint8_t(cdr, ros_message->uint8_test);
  // Member: uint8_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->uint8_array_test, size);
  }
  // Member: int16_test
  rv = ucdr_serialize_int16_t(cdr, ros_message->int16_test);
  // Member: int16_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_int16_t(cdr, ros_message->int16_array_test, size);
  }
  // Member: uint16_test
  rv = ucdr_serialize_uint16_t(cdr, ros_message->uint16_test);
  // Member: uint16_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_uint16_t(cdr, ros_message->uint16_array_test, size);
  }
  // Member: int32_test
  rv = ucdr_serialize_int32_t(cdr, ros_message->int32_test);
  // Member: int32_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_int32_t(cdr, ros_message->int32_array_test, size);
  }
  // Member: uint32_test
  rv = ucdr_serialize_uint32_t(cdr, ros_message->uint32_test);
  // Member: uint32_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_uint32_t(cdr, ros_message->uint32_array_test, size);
  }
  // Member: int64_test
  rv = ucdr_serialize_int64_t(cdr, ros_message->int64_test);
  // Member: int64_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_int64_t(cdr, ros_message->int64_array_test, size);
  }
  // Member: uint64_test
  rv = ucdr_serialize_uint64_t(cdr, ros_message->uint64_test);
  // Member: uint64_array_test
  {
    const size_t size = 11;
    rv = ucdr_serialize_array_uint64_t(cdr, ros_message->uint64_array_test, size);
  }
  // Member: nested_test
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString
      )()->data))->cdr_serialize(&ros_message->nested_test, cdr);

  return rv;
}

static bool _Primitive__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Primitive__ros_msg_type * ros_message = (_Primitive__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: bool_test
  rv = ucdr_deserialize_bool(cdr, &ros_message->bool_test);
  // Field name: bool_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_bool(cdr, ros_message->bool_array_test, size);
  }
  // Field name: byte_test
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->byte_test);
  // Field name: byte_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->byte_array_test, size);
  }
  // Field name: char_test
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->char_test);
  // Field name: char_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->char_array_test, size);
  }
  // Field name: float32_test
  rv = ucdr_deserialize_float(cdr, &ros_message->float32_test);
  // Field name: float32_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_float(cdr, ros_message->float32_array_test, size);
  }
  // Field name: double_test
  rv = ucdr_deserialize_double(cdr, &ros_message->double_test);
  // Field name: float64_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_double(cdr, ros_message->float64_array_test, size);
  }
  // Field name: int8_test
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->int8_test);
  // Field name: int8_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_int8_t(cdr, ros_message->int8_array_test, size);
  }
  // Field name: uint8_test
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->uint8_test);
  // Field name: uint8_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->uint8_array_test, size);
  }
  // Field name: int16_test
  rv = ucdr_deserialize_int16_t(cdr, &ros_message->int16_test);
  // Field name: int16_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message->int16_array_test, size);
  }
  // Field name: uint16_test
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message->uint16_test);
  // Field name: uint16_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_uint16_t(cdr, ros_message->uint16_array_test, size);
  }
  // Field name: int32_test
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->int32_test);
  // Field name: int32_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_int32_t(cdr, ros_message->int32_array_test, size);
  }
  // Field name: uint32_test
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->uint32_test);
  // Field name: uint32_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_uint32_t(cdr, ros_message->uint32_array_test, size);
  }
  // Field name: int64_test
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->int64_test);
  // Field name: int64_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_int64_t(cdr, ros_message->int64_array_test, size);
  }
  // Field name: uint64_test
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->uint64_test);
  // Field name: uint64_array_test
  {
    const size_t size = 11;
    rv = ucdr_deserialize_array_uint64_t(cdr, ros_message->uint64_array_test, size);
  }
  // Field name: nested_test
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_test);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _Primitive__ros_msg_type * ros_message = (const _Primitive__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_test
  {
    const size_t item_size = sizeof(ros_message->bool_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: bool_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->bool_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: byte_test
  {
    const size_t item_size = sizeof(ros_message->byte_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: byte_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->byte_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: char_test
  {
    const size_t item_size = sizeof(ros_message->char_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: char_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->char_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float32_test
  {
    const size_t item_size = sizeof(ros_message->float32_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float32_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->float32_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: double_test
  {
    const size_t item_size = sizeof(ros_message->double_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float64_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->float64_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int8_test
  {
    const size_t item_size = sizeof(ros_message->int8_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int8_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->int8_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint8_test
  {
    const size_t item_size = sizeof(ros_message->uint8_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint8_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->uint8_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int16_test
  {
    const size_t item_size = sizeof(ros_message->int16_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int16_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->int16_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint16_test
  {
    const size_t item_size = sizeof(ros_message->uint16_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint16_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->uint16_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int32_test
  {
    const size_t item_size = sizeof(ros_message->int32_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int32_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->int32_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint32_test
  {
    const size_t item_size = sizeof(ros_message->uint32_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint32_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->uint32_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int64_test
  {
    const size_t item_size = sizeof(ros_message->int64_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int64_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->int64_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint64_test
  {
    const size_t item_size = sizeof(ros_message->uint64_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint64_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message->uint64_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: nested_test
  current_alignment +=
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(&ros_message->nested_test, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Primitive__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: bool_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (array_size * sizeof(bool));
  }
  // Member: byte_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: byte_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: char_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: char_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: float32_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: float32_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: double_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: float64_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: int8_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: int8_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (array_size * sizeof(int8_t));
  }
  // Member: uint8_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: uint8_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: int16_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);
  // Member: int16_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: uint16_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: uint16_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (array_size * sizeof(uint16_t));
  }
  // Member: int32_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: int32_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (array_size * sizeof(int32_t));
  }
  // Member: uint32_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: uint32_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (array_size * sizeof(uint32_t));
  }
  // Member: int64_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: int64_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (array_size * sizeof(int64_t));
  }
  // Member: uint64_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: uint64_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (array_size * sizeof(uint64_t));
  }
  // Member: nested_test
  current_alignment +=
    max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Primitive__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Primitive = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Primitive",
  _Primitive__cdr_serialize,
  _Primitive__cdr_deserialize,
  _Primitive__get_serialized_size,
  get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive,
  _Primitive__max_serialized_size
};

static rosidl_message_type_support_t _Primitive__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Primitive,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive)() {
  return &_Primitive__type_support;
}

#if defined(__cplusplus)
}
#endif
