// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__functions.h"

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

#include "rosidl_runtime_c/string.h"  // string_data
#include "rosidl_runtime_c/string_functions.h"  // string_data
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__functions.h"  // array_data
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"  // sequence_data

// forward declare type support functions
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive)();
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive)();


typedef rosidl_typesupport_microxrcedds_test_msg__msg__Compound _Compound__ros_msg_type;

static bool _Compound__cdr_serialize(
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

  _Compound__ros_msg_type * ros_message = (_Compound__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: string_data
 {
    uint32_t string_len = (ros_message->string_data.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_data.data) + 1;
    ros_message->string_data.size = (ros_message->string_data.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_data.data, string_len);
  }
  // Member: sequence_data
  {
    const size_t size = ros_message->sequence_data.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive
          )()->data))->cdr_serialize(&ros_message->sequence_data.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: array_data
  {
    const size_t array_size = sizeof(ros_message->array_data)/sizeof(ros_message->array_data[0]);
    ucdr_align_to(cdr, MICROXRCEDDS_PADDING);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive
          )()->data))->cdr_serialize(&ros_message->array_data[i], cdr);
        if(rv == false){
          break;
        }
    }
  }

  return rv;
}

static bool _Compound__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Compound__ros_msg_type * ros_message = (_Compound__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: string_data
  {
    size_t capacity = ros_message->string_data.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_data.data, capacity, &string_size);
    if (rv) {
      ros_message->string_data.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      ros_message->string_data.size = 0;
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: sequence_data
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->sequence_data.capacity){
      fprintf(stderr, "cannot allocate received sequence in ros_message\n");
      return 0;
    }

    ros_message->sequence_data.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive
        )()->data))->cdr_deserialize(cdr, &ros_message->sequence_data.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: array_data
  {
    const size_t array_size = sizeof(ros_message->array_data)/sizeof(ros_message->array_data[0]);
    ucdr_align_to(cdr, MICROXRCEDDS_PADDING);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive
        )()->data))->cdr_deserialize(cdr, &ros_message->array_data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Compound(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _Compound__ros_msg_type * ros_message = (const _Compound__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: string_data
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_data.size + 1;
  // Member: sequence_data
  {
    const size_t sequence_size = ros_message->sequence_data.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->sequence_data.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: array_data
  {
    const size_t array_size = sizeof(ros_message->array_data)/sizeof(ros_message->array_data[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);  
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->array_data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Compound__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Compound(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Compound(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: string_data
  *full_bounded = false;
  // Member: sequence_data
  {
    *full_bounded = false;
  }
  // Member: array_data
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Compound__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Compound(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Compound = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Compound",
  _Compound__cdr_serialize,
  _Compound__cdr_deserialize,
  _Compound__get_serialized_size,
  get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Compound,
  _Compound__max_serialized_size
};

static rosidl_message_type_support_t _Compound__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Compound,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rosidl_typesupport_microxrcedds_test_msg, msg, Compound)() {
  return &_Compound__type_support;
}

#if defined(__cplusplus)
}
#endif
