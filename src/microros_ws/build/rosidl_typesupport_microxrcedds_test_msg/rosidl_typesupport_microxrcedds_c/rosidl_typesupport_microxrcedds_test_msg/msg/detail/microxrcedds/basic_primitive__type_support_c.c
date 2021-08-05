// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/BasicPrimitive.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__functions.h"

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


// forward declare type support functions


typedef rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive _BasicPrimitive__ros_msg_type;

static bool _BasicPrimitive__cdr_serialize(
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

  _BasicPrimitive__ros_msg_type * ros_message = (_BasicPrimitive__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: a
  rv = ucdr_serialize_int8_t(cdr, ros_message->a);
  // Member: b
  rv = ucdr_serialize_int64_t(cdr, ros_message->b);
  // Member: c
  rv = ucdr_serialize_int32_t(cdr, ros_message->c);

  return rv;
}

static bool _BasicPrimitive__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BasicPrimitive__ros_msg_type * ros_message = (_BasicPrimitive__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: a
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->a);
  // Field name: b
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->b);
  // Field name: c
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->c);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _BasicPrimitive__ros_msg_type * ros_message = (const _BasicPrimitive__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: a
  {
    const size_t item_size = sizeof(ros_message->a);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: b
  {
    const size_t item_size = sizeof(ros_message->b);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: c
  {
    const size_t item_size = sizeof(ros_message->c);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BasicPrimitive__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: a
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: b
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: c
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);

  return current_alignment - initial_alignment;
}

static size_t _BasicPrimitive__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_BasicPrimitive = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "BasicPrimitive",
  _BasicPrimitive__cdr_serialize,
  _BasicPrimitive__cdr_deserialize,
  _BasicPrimitive__get_serialized_size,
  get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive,
  _BasicPrimitive__max_serialized_size
};

static rosidl_message_type_support_t _BasicPrimitive__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_BasicPrimitive,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive)() {
  return &_BasicPrimitive__type_support;
}

#if defined(__cplusplus)
}
#endif
