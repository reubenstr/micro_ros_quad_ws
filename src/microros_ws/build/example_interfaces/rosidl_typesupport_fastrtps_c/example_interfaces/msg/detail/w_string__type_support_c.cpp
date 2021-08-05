// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from example_interfaces:msg/WString.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/w_string__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "example_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "example_interfaces/msg/detail/w_string__struct.h"
#include "example_interfaces/msg/detail/w_string__functions.h"
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

#include "rosidl_runtime_c/u16string.h"  // data
#include "rosidl_runtime_c/u16string_functions.h"  // data

// forward declare type support functions


using _WString__ros_msg_type = example_interfaces__msg__WString;

static bool _WString__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WString__ros_msg_type * ros_message = static_cast<const _WString__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_c::u16string_to_wstring(ros_message->data, wstr);
    cdr << wstr;
  }

  return true;
}

static bool _WString__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WString__ros_msg_type * ros_message = static_cast<_WString__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    if (!ros_message->data.data) {
      rosidl_runtime_c__U16String__init(&ros_message->data);
    }
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_message->data);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      rosidl_runtime_c__U16String__fini(&ros_message->data);
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_example_interfaces
size_t get_serialized_size_example_interfaces__msg__WString(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WString__ros_msg_type * ros_message = static_cast<const _WString__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message->data.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WString__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_example_interfaces__msg__WString(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_example_interfaces
size_t max_serialized_size_example_interfaces__msg__WString(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WString__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_example_interfaces__msg__WString(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WString = {
  "example_interfaces::msg",
  "WString",
  _WString__cdr_serialize,
  _WString__cdr_deserialize,
  _WString__get_serialized_size,
  _WString__max_serialized_size
};

static rosidl_message_type_support_t _WString__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WString,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, msg, WString)() {
  return &_WString__type_support;
}

#if defined(__cplusplus)
}
#endif
