// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/UnboundedString.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__functions.h"

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

#include "rosidl_runtime_c/string.h"  // unbounded_string1, unbounded_string2, unbounded_string3, unbounded_string4
#include "rosidl_runtime_c/string_functions.h"  // unbounded_string1, unbounded_string2, unbounded_string3, unbounded_string4

// forward declare type support functions


typedef rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString _UnboundedString__ros_msg_type;

static bool _UnboundedString__cdr_serialize(
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

  _UnboundedString__ros_msg_type * ros_message = (_UnboundedString__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: unbounded_string1
 {
    uint32_t string_len = (ros_message->unbounded_string1.data == NULL) ? 0 : (uint32_t)strlen(ros_message->unbounded_string1.data) + 1;
    ros_message->unbounded_string1.size = (ros_message->unbounded_string1.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->unbounded_string1.data, string_len);
  }
  // Member: unbounded_string2
 {
    uint32_t string_len = (ros_message->unbounded_string2.data == NULL) ? 0 : (uint32_t)strlen(ros_message->unbounded_string2.data) + 1;
    ros_message->unbounded_string2.size = (ros_message->unbounded_string2.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->unbounded_string2.data, string_len);
  }
  // Member: unbounded_string3
 {
    uint32_t string_len = (ros_message->unbounded_string3.data == NULL) ? 0 : (uint32_t)strlen(ros_message->unbounded_string3.data) + 1;
    ros_message->unbounded_string3.size = (ros_message->unbounded_string3.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->unbounded_string3.data, string_len);
  }
  // Member: unbounded_string4
 {
    uint32_t string_len = (ros_message->unbounded_string4.data == NULL) ? 0 : (uint32_t)strlen(ros_message->unbounded_string4.data) + 1;
    ros_message->unbounded_string4.size = (ros_message->unbounded_string4.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->unbounded_string4.data, string_len);
  }

  return rv;
}

static bool _UnboundedString__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UnboundedString__ros_msg_type * ros_message = (_UnboundedString__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: unbounded_string1
  {
    size_t capacity = ros_message->unbounded_string1.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->unbounded_string1.data, capacity, &string_size);
    if (rv) {
      ros_message->unbounded_string1.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      ros_message->unbounded_string1.size = 0;
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: unbounded_string2
  {
    size_t capacity = ros_message->unbounded_string2.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->unbounded_string2.data, capacity, &string_size);
    if (rv) {
      ros_message->unbounded_string2.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      ros_message->unbounded_string2.size = 0;
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: unbounded_string3
  {
    size_t capacity = ros_message->unbounded_string3.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->unbounded_string3.data, capacity, &string_size);
    if (rv) {
      ros_message->unbounded_string3.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      ros_message->unbounded_string3.size = 0;
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: unbounded_string4
  {
    size_t capacity = ros_message->unbounded_string4.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->unbounded_string4.data, capacity, &string_size);
    if (rv) {
      ros_message->unbounded_string4.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      ros_message->unbounded_string4.size = 0;
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _UnboundedString__ros_msg_type * ros_message = (const _UnboundedString__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: unbounded_string1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->unbounded_string1.size + 1;
  // Member: unbounded_string2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->unbounded_string2.size + 1;
  // Member: unbounded_string3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->unbounded_string3.size + 1;
  // Member: unbounded_string4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->unbounded_string4.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _UnboundedString__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: unbounded_string1
  *full_bounded = false;
  // Member: unbounded_string2
  *full_bounded = false;
  // Member: unbounded_string3
  *full_bounded = false;
  // Member: unbounded_string4
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _UnboundedString__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_UnboundedString = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "UnboundedString",
  _UnboundedString__cdr_serialize,
  _UnboundedString__cdr_deserialize,
  _UnboundedString__get_serialized_size,
  get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString,
  _UnboundedString__max_serialized_size
};

static rosidl_message_type_support_t _UnboundedString__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_UnboundedString,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString)() {
  return &_UnboundedString__type_support;
}

#if defined(__cplusplus)
}
#endif
