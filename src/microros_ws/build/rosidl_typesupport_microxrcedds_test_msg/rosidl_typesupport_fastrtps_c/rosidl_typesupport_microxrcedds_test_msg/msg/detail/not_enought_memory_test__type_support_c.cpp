// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // int64_sequence
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // int64_sequence
#include "rosidl_runtime_c/string.h"  // string
#include "rosidl_runtime_c/string_functions.h"  // string

// forward declare type support functions


using _NotEnoughtMemoryTest__ros_msg_type = rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest;

static bool _NotEnoughtMemoryTest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NotEnoughtMemoryTest__ros_msg_type * ros_message = static_cast<const _NotEnoughtMemoryTest__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_byte
  {
    cdr << ros_message->initial_byte;
  }

  // Field name: string
  {
    const rosidl_runtime_c__String * str = &ros_message->string;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: int64_sequence
  {
    size_t size = ros_message->int64_sequence.size;
    auto array_ptr = ros_message->int64_sequence.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int16_array
  {
    size_t size = 10;
    auto array_ptr = ros_message->int16_array;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: end_byte
  {
    cdr << ros_message->end_byte;
  }

  return true;
}

static bool _NotEnoughtMemoryTest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NotEnoughtMemoryTest__ros_msg_type * ros_message = static_cast<_NotEnoughtMemoryTest__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_byte
  {
    cdr >> ros_message->initial_byte;
  }

  // Field name: string
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string.data) {
      rosidl_runtime_c__String__init(&ros_message->string);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->string,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string'\n");
      return false;
    }
  }

  // Field name: int64_sequence
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int64_sequence.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->int64_sequence);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->int64_sequence, size)) {
      return "failed to create array for field 'int64_sequence'";
    }
    auto array_ptr = ros_message->int64_sequence.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int16_array
  {
    size_t size = 10;
    auto array_ptr = ros_message->int16_array;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: end_byte
  {
    cdr >> ros_message->end_byte;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NotEnoughtMemoryTest__ros_msg_type * ros_message = static_cast<const _NotEnoughtMemoryTest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name initial_byte
  {
    size_t item_size = sizeof(ros_message->initial_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string.size + 1);
  // field.name int64_sequence
  {
    size_t array_size = ros_message->int64_sequence.size;
    auto array_ptr = ros_message->int64_sequence.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_array
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->int16_array;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_byte
  {
    size_t item_size = sizeof(ros_message->end_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NotEnoughtMemoryTest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: initial_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: string
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: int64_sequence
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int16_array
  {
    size_t array_size = 10;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: end_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NotEnoughtMemoryTest__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NotEnoughtMemoryTest = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "NotEnoughtMemoryTest",
  _NotEnoughtMemoryTest__cdr_serialize,
  _NotEnoughtMemoryTest__cdr_deserialize,
  _NotEnoughtMemoryTest__get_serialized_size,
  _NotEnoughtMemoryTest__max_serialized_size
};

static rosidl_message_type_support_t _NotEnoughtMemoryTest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NotEnoughtMemoryTest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, NotEnoughtMemoryTest)() {
  return &_NotEnoughtMemoryTest__type_support;
}

#if defined(__cplusplus)
}
#endif
