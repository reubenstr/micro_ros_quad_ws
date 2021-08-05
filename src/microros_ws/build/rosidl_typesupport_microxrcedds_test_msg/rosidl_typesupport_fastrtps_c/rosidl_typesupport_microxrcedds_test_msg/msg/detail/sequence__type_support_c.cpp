// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Sequence.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__functions.h"
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

#include "rosidl_runtime_c/string.h"  // sequence_string_test
#include "rosidl_runtime_c/string_functions.h"  // sequence_string_test

// forward declare type support functions


using _Sequence__ros_msg_type = rosidl_typesupport_microxrcedds_test_msg__msg__Sequence;

static bool _Sequence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Sequence__ros_msg_type * ros_message = static_cast<const _Sequence__ros_msg_type *>(untyped_ros_message);
  // Field name: sequence_string_test
  {
    size_t size = ros_message->sequence_string_test.size;
    auto array_ptr = ros_message->sequence_string_test.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _Sequence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Sequence__ros_msg_type * ros_message = static_cast<_Sequence__ros_msg_type *>(untyped_ros_message);
  // Field name: sequence_string_test
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sequence_string_test.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->sequence_string_test);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->sequence_string_test, size)) {
      return "failed to create array for field 'sequence_string_test'";
    }
    auto array_ptr = ros_message->sequence_string_test.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'sequence_string_test'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Sequence(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Sequence__ros_msg_type * ros_message = static_cast<const _Sequence__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sequence_string_test
  {
    size_t array_size = ros_message->sequence_string_test.size;
    auto array_ptr = ros_message->sequence_string_test.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Sequence__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Sequence(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Sequence(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sequence_string_test
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Sequence__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Sequence(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Sequence = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Sequence",
  _Sequence__cdr_serialize,
  _Sequence__cdr_deserialize,
  _Sequence__get_serialized_size,
  _Sequence__max_serialized_size
};

static rosidl_message_type_support_t _Sequence__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Sequence,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, Sequence)() {
  return &_Sequence__type_support;
}

#if defined(__cplusplus)
}
#endif
