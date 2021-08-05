// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"
#include "fastcdr/Cdr.h"

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
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString)();


using _Primitive__ros_msg_type = rosidl_typesupport_microxrcedds_test_msg__msg__Primitive;

static bool _Primitive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Primitive__ros_msg_type * ros_message = static_cast<const _Primitive__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_test
  {
    cdr << (ros_message->bool_test ? true : false);
  }

  // Field name: bool_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->bool_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: byte_test
  {
    cdr << ros_message->byte_test;
  }

  // Field name: byte_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->byte_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: char_test
  {
    cdr << ros_message->char_test;
  }

  // Field name: char_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->char_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float32_test
  {
    cdr << ros_message->float32_test;
  }

  // Field name: float32_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->float32_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: double_test
  {
    cdr << ros_message->double_test;
  }

  // Field name: float64_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->float64_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int8_test
  {
    cdr << ros_message->int8_test;
  }

  // Field name: int8_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->int8_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint8_test
  {
    cdr << ros_message->uint8_test;
  }

  // Field name: uint8_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->uint8_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int16_test
  {
    cdr << ros_message->int16_test;
  }

  // Field name: int16_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->int16_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint16_test
  {
    cdr << ros_message->uint16_test;
  }

  // Field name: uint16_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->uint16_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int32_test
  {
    cdr << ros_message->int32_test;
  }

  // Field name: int32_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->int32_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint32_test
  {
    cdr << ros_message->uint32_test;
  }

  // Field name: uint32_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->uint32_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int64_test
  {
    cdr << ros_message->int64_test;
  }

  // Field name: int64_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->int64_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint64_test
  {
    cdr << ros_message->uint64_test;
  }

  // Field name: uint64_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->uint64_array_test;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: nested_test
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nested_test, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Primitive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Primitive__ros_msg_type * ros_message = static_cast<_Primitive__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_test
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_test = tmp ? true : false;
  }

  // Field name: bool_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->bool_array_test;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: byte_test
  {
    cdr >> ros_message->byte_test;
  }

  // Field name: byte_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->byte_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: char_test
  {
    cdr >> ros_message->char_test;
  }

  // Field name: char_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->char_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float32_test
  {
    cdr >> ros_message->float32_test;
  }

  // Field name: float32_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->float32_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: double_test
  {
    cdr >> ros_message->double_test;
  }

  // Field name: float64_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->float64_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int8_test
  {
    cdr >> ros_message->int8_test;
  }

  // Field name: int8_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->int8_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint8_test
  {
    cdr >> ros_message->uint8_test;
  }

  // Field name: uint8_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->uint8_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int16_test
  {
    cdr >> ros_message->int16_test;
  }

  // Field name: int16_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->int16_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint16_test
  {
    cdr >> ros_message->uint16_test;
  }

  // Field name: uint16_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->uint16_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int32_test
  {
    cdr >> ros_message->int32_test;
  }

  // Field name: int32_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->int32_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint32_test
  {
    cdr >> ros_message->uint32_test;
  }

  // Field name: uint32_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->uint32_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int64_test
  {
    cdr >> ros_message->int64_test;
  }

  // Field name: int64_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->int64_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint64_test
  {
    cdr >> ros_message->uint64_test;
  }

  // Field name: uint64_array_test
  {
    size_t size = 11;
    auto array_ptr = ros_message->uint64_array_test;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: nested_test
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nested_test))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Primitive__ros_msg_type * ros_message = static_cast<const _Primitive__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_test
  {
    size_t item_size = sizeof(ros_message->bool_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bool_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->bool_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_test
  {
    size_t item_size = sizeof(ros_message->byte_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->byte_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_test
  {
    size_t item_size = sizeof(ros_message->char_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->char_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_test
  {
    size_t item_size = sizeof(ros_message->float32_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->float32_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name double_test
  {
    size_t item_size = sizeof(ros_message->double_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float64_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->float64_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_test
  {
    size_t item_size = sizeof(ros_message->int8_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->int8_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_test
  {
    size_t item_size = sizeof(ros_message->uint8_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->uint8_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_test
  {
    size_t item_size = sizeof(ros_message->int16_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->int16_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_test
  {
    size_t item_size = sizeof(ros_message->uint16_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->uint16_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_test
  {
    size_t item_size = sizeof(ros_message->int32_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->int32_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_test
  {
    size_t item_size = sizeof(ros_message->uint32_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->uint32_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_test
  {
    size_t item_size = sizeof(ros_message->int64_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->int64_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_test
  {
    size_t item_size = sizeof(ros_message->uint64_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_array_test
  {
    size_t array_size = 11;
    auto array_ptr = ros_message->uint64_array_test;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nested_test

  current_alignment += get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
    &(ros_message->nested_test), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Primitive__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: bool_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bool_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float32_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: double_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: float64_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int8_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int16_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int32_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int64_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: nested_test
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Primitive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Primitive = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Primitive",
  _Primitive__cdr_serialize,
  _Primitive__cdr_deserialize,
  _Primitive__get_serialized_size,
  _Primitive__max_serialized_size
};

static rosidl_message_type_support_t _Primitive__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Primitive,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive)() {
  return &_Primitive__type_support;
}

#if defined(__cplusplus)
}
#endif
