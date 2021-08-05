// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__struct.hpp"

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

namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_serialize(
  const rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: initial_byte
  cdr << ros_message.initial_byte;
  // Member: string
  cdr << ros_message.string;
  // Member: int64_sequence
  {
    cdr << ros_message.int64_sequence;
  }
  // Member: int16_array
  {
    cdr << ros_message.int16_array;
  }
  // Member: end_byte
  cdr << ros_message.end_byte;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & ros_message)
{
  // Member: initial_byte
  cdr >> ros_message.initial_byte;

  // Member: string
  cdr >> ros_message.string;

  // Member: int64_sequence
  {
    cdr >> ros_message.int64_sequence;
  }

  // Member: int16_array
  {
    cdr >> ros_message.int16_array;
  }

  // Member: end_byte
  cdr >> ros_message.end_byte;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: initial_byte
  {
    size_t item_size = sizeof(ros_message.initial_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string.size() + 1);
  // Member: int64_sequence
  {
    size_t array_size = ros_message.int64_sequence.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.int64_sequence[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int16_array
  {
    size_t array_size = 10;
    size_t item_size = sizeof(ros_message.int16_array[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_byte
  {
    size_t item_size = sizeof(ros_message.end_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
max_serialized_size_NotEnoughtMemoryTest(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: initial_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: string
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: int64_sequence
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: int16_array
  {
    size_t array_size = 10;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: end_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _NotEnoughtMemoryTest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NotEnoughtMemoryTest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NotEnoughtMemoryTest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NotEnoughtMemoryTest__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NotEnoughtMemoryTest(full_bounded, 0);
}

static message_type_support_callbacks_t _NotEnoughtMemoryTest__callbacks = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "NotEnoughtMemoryTest",
  _NotEnoughtMemoryTest__cdr_serialize,
  _NotEnoughtMemoryTest__cdr_deserialize,
  _NotEnoughtMemoryTest__get_serialized_size,
  _NotEnoughtMemoryTest__max_serialized_size
};

static rosidl_message_type_support_t _NotEnoughtMemoryTest__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NotEnoughtMemoryTest__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosidl_typesupport_microxrcedds_test_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosidl_typesupport_microxrcedds_test_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest>()
{
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::_NotEnoughtMemoryTest__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, NotEnoughtMemoryTest)() {
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::_NotEnoughtMemoryTest__handle;
}

#ifdef __cplusplus
}
#endif
