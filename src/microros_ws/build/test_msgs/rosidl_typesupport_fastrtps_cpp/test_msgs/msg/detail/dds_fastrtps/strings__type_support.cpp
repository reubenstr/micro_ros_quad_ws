// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/Strings.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/strings__rosidl_typesupport_fastrtps_cpp.hpp"
#include "test_msgs/msg/detail/strings__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace test_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::msg::Strings & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: string_value
  cdr << ros_message.string_value;
  // Member: string_value_default1
  cdr << ros_message.string_value_default1;
  // Member: string_value_default2
  cdr << ros_message.string_value_default2;
  // Member: string_value_default3
  cdr << ros_message.string_value_default3;
  // Member: string_value_default4
  cdr << ros_message.string_value_default4;
  // Member: string_value_default5
  cdr << ros_message.string_value_default5;
  // Member: bounded_string_value
  cdr << ros_message.bounded_string_value;
  // Member: bounded_string_value_default1
  cdr << ros_message.bounded_string_value_default1;
  // Member: bounded_string_value_default2
  cdr << ros_message.bounded_string_value_default2;
  // Member: bounded_string_value_default3
  cdr << ros_message.bounded_string_value_default3;
  // Member: bounded_string_value_default4
  cdr << ros_message.bounded_string_value_default4;
  // Member: bounded_string_value_default5
  cdr << ros_message.bounded_string_value_default5;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs::msg::Strings & ros_message)
{
  // Member: string_value
  cdr >> ros_message.string_value;

  // Member: string_value_default1
  cdr >> ros_message.string_value_default1;

  // Member: string_value_default2
  cdr >> ros_message.string_value_default2;

  // Member: string_value_default3
  cdr >> ros_message.string_value_default3;

  // Member: string_value_default4
  cdr >> ros_message.string_value_default4;

  // Member: string_value_default5
  cdr >> ros_message.string_value_default5;

  // Member: bounded_string_value
  cdr >> ros_message.bounded_string_value;

  // Member: bounded_string_value_default1
  cdr >> ros_message.bounded_string_value_default1;

  // Member: bounded_string_value_default2
  cdr >> ros_message.bounded_string_value_default2;

  // Member: bounded_string_value_default3
  cdr >> ros_message.bounded_string_value_default3;

  // Member: bounded_string_value_default4
  cdr >> ros_message.bounded_string_value_default4;

  // Member: bounded_string_value_default5
  cdr >> ros_message.bounded_string_value_default5;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::msg::Strings & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_value.size() + 1);
  // Member: string_value_default1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_value_default1.size() + 1);
  // Member: string_value_default2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_value_default2.size() + 1);
  // Member: string_value_default3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_value_default3.size() + 1);
  // Member: string_value_default4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_value_default4.size() + 1);
  // Member: string_value_default5
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_value_default5.size() + 1);
  // Member: bounded_string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_string_value.size() + 1);
  // Member: bounded_string_value_default1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_string_value_default1.size() + 1);
  // Member: bounded_string_value_default2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_string_value_default2.size() + 1);
  // Member: bounded_string_value_default3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_string_value_default3.size() + 1);
  // Member: bounded_string_value_default4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_string_value_default4.size() + 1);
  // Member: bounded_string_value_default5
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_string_value_default5.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
max_serialized_size_Strings(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: string_value
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: string_value_default1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: string_value_default2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: string_value_default3
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: string_value_default4
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: string_value_default5
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bounded_string_value
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }

  // Member: bounded_string_value_default1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }

  // Member: bounded_string_value_default2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }

  // Member: bounded_string_value_default3
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }

  // Member: bounded_string_value_default4
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }

  // Member: bounded_string_value_default5
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Strings__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Strings *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Strings__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::msg::Strings *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Strings__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Strings *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Strings__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Strings(full_bounded, 0);
}

static message_type_support_callbacks_t _Strings__callbacks = {
  "test_msgs::msg",
  "Strings",
  _Strings__cdr_serialize,
  _Strings__cdr_deserialize,
  _Strings__get_serialized_size,
  _Strings__max_serialized_size
};

static rosidl_message_type_support_t _Strings__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Strings__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace test_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::msg::Strings>()
{
  return &test_msgs::msg::typesupport_fastrtps_cpp::_Strings__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, msg, Strings)() {
  return &test_msgs::msg::typesupport_fastrtps_cpp::_Strings__handle;
}

#ifdef __cplusplus
}
#endif
