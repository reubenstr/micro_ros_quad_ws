// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Sequence.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__functions.h"

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

#include "rosidl_runtime_c/string.h"  // sequence_string_test
#include "rosidl_runtime_c/string_functions.h"  // sequence_string_test

// forward declare type support functions


typedef rosidl_typesupport_microxrcedds_test_msg__msg__Sequence _Sequence__ros_msg_type;

static bool _Sequence__cdr_serialize(
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

  _Sequence__ros_msg_type * ros_message = (_Sequence__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: sequence_string_test
  {
    const size_t size = ros_message->sequence_string_test.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->sequence_string_test.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->sequence_string_test.data[i].data) + 1;
      ros_message->sequence_string_test.data[i].size = (ros_message->sequence_string_test.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->sequence_string_test.data[i].data, string_len);
    }
  }

  return rv;
}

static bool _Sequence__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Sequence__ros_msg_type * ros_message = (_Sequence__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: sequence_string_test
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->sequence_string_test.capacity){
      fprintf(stderr, "cannot allocate received sequence in ros_message\n");
      return 0;
    }
    ros_message->sequence_string_test.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->sequence_string_test.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->sequence_string_test.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->sequence_string_test.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        ros_message->sequence_string_test.data[i].size = 0;
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Sequence(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _Sequence__ros_msg_type * ros_message = (const _Sequence__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sequence_string_test
  {
    const size_t sequence_size = ros_message->sequence_string_test.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->sequence_string_test.data[i].size + 1;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Sequence__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Sequence(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Sequence(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: sequence_string_test
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Sequence__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Sequence(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Sequence = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Sequence",
  _Sequence__cdr_serialize,
  _Sequence__cdr_deserialize,
  _Sequence__get_serialized_size,
  get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Sequence,
  _Sequence__max_serialized_size
};

static rosidl_message_type_support_t _Sequence__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Sequence,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, Sequence)() {
  return &_Sequence__type_support;
}

#if defined(__cplusplus)
}
#endif
