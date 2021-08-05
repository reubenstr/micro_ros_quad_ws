// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/UnboundedString.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__functions.h"
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

#include "rosidl_runtime_c/string.h"  // unbounded_string1, unbounded_string2, unbounded_string3, unbounded_string4
#include "rosidl_runtime_c/string_functions.h"  // unbounded_string1, unbounded_string2, unbounded_string3, unbounded_string4

// forward declare type support functions


using _UnboundedString__ros_msg_type = rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString;

static bool _UnboundedString__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UnboundedString__ros_msg_type * ros_message = static_cast<const _UnboundedString__ros_msg_type *>(untyped_ros_message);
  // Field name: unbounded_string1
  {
    const rosidl_runtime_c__String * str = &ros_message->unbounded_string1;
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

  // Field name: unbounded_string2
  {
    const rosidl_runtime_c__String * str = &ros_message->unbounded_string2;
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

  // Field name: unbounded_string3
  {
    const rosidl_runtime_c__String * str = &ros_message->unbounded_string3;
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

  // Field name: unbounded_string4
  {
    const rosidl_runtime_c__String * str = &ros_message->unbounded_string4;
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

  return true;
}

static bool _UnboundedString__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UnboundedString__ros_msg_type * ros_message = static_cast<_UnboundedString__ros_msg_type *>(untyped_ros_message);
  // Field name: unbounded_string1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->unbounded_string1.data) {
      rosidl_runtime_c__String__init(&ros_message->unbounded_string1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->unbounded_string1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'unbounded_string1'\n");
      return false;
    }
  }

  // Field name: unbounded_string2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->unbounded_string2.data) {
      rosidl_runtime_c__String__init(&ros_message->unbounded_string2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->unbounded_string2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'unbounded_string2'\n");
      return false;
    }
  }

  // Field name: unbounded_string3
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->unbounded_string3.data) {
      rosidl_runtime_c__String__init(&ros_message->unbounded_string3);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->unbounded_string3,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'unbounded_string3'\n");
      return false;
    }
  }

  // Field name: unbounded_string4
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->unbounded_string4.data) {
      rosidl_runtime_c__String__init(&ros_message->unbounded_string4);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->unbounded_string4,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'unbounded_string4'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UnboundedString__ros_msg_type * ros_message = static_cast<const _UnboundedString__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name unbounded_string1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->unbounded_string1.size + 1);
  // field.name unbounded_string2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->unbounded_string2.size + 1);
  // field.name unbounded_string3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->unbounded_string3.size + 1);
  // field.name unbounded_string4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->unbounded_string4.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _UnboundedString__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: unbounded_string1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: unbounded_string2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: unbounded_string3
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: unbounded_string4
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _UnboundedString__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UnboundedString = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "UnboundedString",
  _UnboundedString__cdr_serialize,
  _UnboundedString__cdr_deserialize,
  _UnboundedString__get_serialized_size,
  _UnboundedString__max_serialized_size
};

static rosidl_message_type_support_t _UnboundedString__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UnboundedString,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString)() {
  return &_UnboundedString__type_support;
}

#if defined(__cplusplus)
}
#endif
