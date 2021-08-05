// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // int64_sequence
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // int64_sequence
#include "rosidl_runtime_c/string.h"  // string
#include "rosidl_runtime_c/string_functions.h"  // string

// forward declare type support functions


typedef rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest _NotEnoughtMemoryTest__ros_msg_type;

static bool _NotEnoughtMemoryTest__cdr_serialize(
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

  _NotEnoughtMemoryTest__ros_msg_type * ros_message = (_NotEnoughtMemoryTest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: initial_byte
  rv = ucdr_serialize_int8_t(cdr, ros_message->initial_byte);
  // Member: string
 {
    uint32_t string_len = (ros_message->string.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string.data) + 1;
    ros_message->string.size = (ros_message->string.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string.data, string_len);
  }
  // Member: int64_sequence
  {
    const size_t size = ros_message->int64_sequence.size;
    rv = ucdr_serialize_sequence_int64_t(cdr, ros_message->int64_sequence.data, size);
  }
  // Member: int16_array
  {
    const size_t size = 10;
    rv = ucdr_serialize_array_int16_t(cdr, ros_message->int16_array, size);
  }
  // Member: end_byte
  rv = ucdr_serialize_int8_t(cdr, ros_message->end_byte);

  return rv;
}

static bool _NotEnoughtMemoryTest__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NotEnoughtMemoryTest__ros_msg_type * ros_message = (_NotEnoughtMemoryTest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: initial_byte
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->initial_byte);
  // Field name: string
  {
    size_t capacity = ros_message->string.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string.data, capacity, &string_size);
    if (rv) {
      ros_message->string.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      ros_message->string.size = 0;
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: int64_sequence
  {
    uint32_t size;
    const size_t capacity = ros_message->int64_sequence.capacity;
    rv = ucdr_deserialize_sequence_int64_t(cdr, ros_message->int64_sequence.data, capacity, &size);
    if (rv) {
      ros_message->int64_sequence.size = size;
    } else if(size > capacity){
      cdr->error = false;
      ros_message->int64_sequence.size = 0;
      ucdr_advance_buffer(cdr, size * sizeof(int64_t));
    }
  }
  // Field name: int16_array
  {
    const size_t size = 10;
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message->int16_array, size);
  }
  // Field name: end_byte
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->end_byte);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _NotEnoughtMemoryTest__ros_msg_type * ros_message = (const _NotEnoughtMemoryTest__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: initial_byte
  {
    const size_t item_size = sizeof(ros_message->initial_byte);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: string
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string.size + 1;
  // Member: int64_sequence
  {
    size_t sequence_size = ros_message->int64_sequence.size;
    size_t item_size = sizeof(ros_message->int64_sequence.data[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int16_array
  {
    const size_t array_size = 10;
    const size_t item_size = sizeof(ros_message->int16_array[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: end_byte
  {
    const size_t item_size = sizeof(ros_message->end_byte);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NotEnoughtMemoryTest__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: initial_byte
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: string
  *full_bounded = false;
  // Member: int64_sequence
  {
    *full_bounded = false;
  }
  // Member: int16_array
  {
    const size_t array_size = 10;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: end_byte
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);

  return current_alignment - initial_alignment;
}

static size_t _NotEnoughtMemoryTest__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NotEnoughtMemoryTest = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "NotEnoughtMemoryTest",
  _NotEnoughtMemoryTest__cdr_serialize,
  _NotEnoughtMemoryTest__cdr_deserialize,
  _NotEnoughtMemoryTest__get_serialized_size,
  get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest,
  _NotEnoughtMemoryTest__max_serialized_size
};

static rosidl_message_type_support_t _NotEnoughtMemoryTest__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NotEnoughtMemoryTest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, NotEnoughtMemoryTest)() {
  return &_NotEnoughtMemoryTest__type_support;
}

#if defined(__cplusplus)
}
#endif
