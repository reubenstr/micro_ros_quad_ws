// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.hpp"

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
bool cdr_serialize(
  const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString &);
size_t get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString &,
  size_t current_alignment);
size_t
max_serialized_size_UnboundedString(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rosidl_typesupport_microxrcedds_test_msg


namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_serialize(
  const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bool_test
  cdr << (ros_message.bool_test ? true : false);
  // Member: bool_array_test
  {
    cdr << ros_message.bool_array_test;
  }
  // Member: byte_test
  cdr << ros_message.byte_test;
  // Member: byte_array_test
  {
    cdr << ros_message.byte_array_test;
  }
  // Member: char_test
  cdr << ros_message.char_test;
  // Member: char_array_test
  {
    cdr << ros_message.char_array_test;
  }
  // Member: float32_test
  cdr << ros_message.float32_test;
  // Member: float32_array_test
  {
    cdr << ros_message.float32_array_test;
  }
  // Member: double_test
  cdr << ros_message.double_test;
  // Member: float64_array_test
  {
    cdr << ros_message.float64_array_test;
  }
  // Member: int8_test
  cdr << ros_message.int8_test;
  // Member: int8_array_test
  {
    cdr << ros_message.int8_array_test;
  }
  // Member: uint8_test
  cdr << ros_message.uint8_test;
  // Member: uint8_array_test
  {
    cdr << ros_message.uint8_array_test;
  }
  // Member: int16_test
  cdr << ros_message.int16_test;
  // Member: int16_array_test
  {
    cdr << ros_message.int16_array_test;
  }
  // Member: uint16_test
  cdr << ros_message.uint16_test;
  // Member: uint16_array_test
  {
    cdr << ros_message.uint16_array_test;
  }
  // Member: int32_test
  cdr << ros_message.int32_test;
  // Member: int32_array_test
  {
    cdr << ros_message.int32_array_test;
  }
  // Member: uint32_test
  cdr << ros_message.uint32_test;
  // Member: uint32_array_test
  {
    cdr << ros_message.uint32_array_test;
  }
  // Member: int64_test
  cdr << ros_message.int64_test;
  // Member: int64_array_test
  {
    cdr << ros_message.int64_array_test;
  }
  // Member: uint64_test
  cdr << ros_message.uint64_test;
  // Member: uint64_array_test
  {
    cdr << ros_message.uint64_array_test;
  }
  // Member: nested_test
  rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nested_test,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & ros_message)
{
  // Member: bool_test
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bool_test = tmp ? true : false;
  }

  // Member: bool_array_test
  {
    cdr >> ros_message.bool_array_test;
  }

  // Member: byte_test
  cdr >> ros_message.byte_test;

  // Member: byte_array_test
  {
    cdr >> ros_message.byte_array_test;
  }

  // Member: char_test
  cdr >> ros_message.char_test;

  // Member: char_array_test
  {
    cdr >> ros_message.char_array_test;
  }

  // Member: float32_test
  cdr >> ros_message.float32_test;

  // Member: float32_array_test
  {
    cdr >> ros_message.float32_array_test;
  }

  // Member: double_test
  cdr >> ros_message.double_test;

  // Member: float64_array_test
  {
    cdr >> ros_message.float64_array_test;
  }

  // Member: int8_test
  cdr >> ros_message.int8_test;

  // Member: int8_array_test
  {
    cdr >> ros_message.int8_array_test;
  }

  // Member: uint8_test
  cdr >> ros_message.uint8_test;

  // Member: uint8_array_test
  {
    cdr >> ros_message.uint8_array_test;
  }

  // Member: int16_test
  cdr >> ros_message.int16_test;

  // Member: int16_array_test
  {
    cdr >> ros_message.int16_array_test;
  }

  // Member: uint16_test
  cdr >> ros_message.uint16_test;

  // Member: uint16_array_test
  {
    cdr >> ros_message.uint16_array_test;
  }

  // Member: int32_test
  cdr >> ros_message.int32_test;

  // Member: int32_array_test
  {
    cdr >> ros_message.int32_array_test;
  }

  // Member: uint32_test
  cdr >> ros_message.uint32_test;

  // Member: uint32_array_test
  {
    cdr >> ros_message.uint32_array_test;
  }

  // Member: int64_test
  cdr >> ros_message.int64_test;

  // Member: int64_array_test
  {
    cdr >> ros_message.int64_array_test;
  }

  // Member: uint64_test
  cdr >> ros_message.uint64_test;

  // Member: uint64_array_test
  {
    cdr >> ros_message.uint64_array_test;
  }

  // Member: nested_test
  rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nested_test);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bool_test
  {
    size_t item_size = sizeof(ros_message.bool_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bool_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.bool_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: byte_test
  {
    size_t item_size = sizeof(ros_message.byte_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: byte_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.byte_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: char_test
  {
    size_t item_size = sizeof(ros_message.char_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: char_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.char_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float32_test
  {
    size_t item_size = sizeof(ros_message.float32_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float32_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.float32_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: double_test
  {
    size_t item_size = sizeof(ros_message.double_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float64_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.float64_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int8_test
  {
    size_t item_size = sizeof(ros_message.int8_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int8_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.int8_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint8_test
  {
    size_t item_size = sizeof(ros_message.uint8_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint8_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.uint8_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int16_test
  {
    size_t item_size = sizeof(ros_message.int16_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int16_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.int16_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint16_test
  {
    size_t item_size = sizeof(ros_message.uint16_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint16_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.uint16_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int32_test
  {
    size_t item_size = sizeof(ros_message.int32_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int32_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.int32_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint32_test
  {
    size_t item_size = sizeof(ros_message.uint32_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint32_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.uint32_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int64_test
  {
    size_t item_size = sizeof(ros_message.int64_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int64_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.int64_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint64_test
  {
    size_t item_size = sizeof(ros_message.uint64_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint64_array_test
  {
    size_t array_size = 11;
    size_t item_size = sizeof(ros_message.uint64_array_test[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nested_test

  current_alignment +=
    rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nested_test, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
max_serialized_size_Primitive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: bool_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bool_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: byte_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: byte_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: char_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: char_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: float32_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: float32_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: double_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: float64_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: int8_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: int8_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: uint8_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: uint8_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: int16_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: int16_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: uint16_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: uint16_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: int32_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: int32_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uint32_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uint32_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: int64_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: int64_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uint64_test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uint64_array_test
  {
    size_t array_size = 11;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: nested_test
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_UnboundedString(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Primitive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Primitive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Primitive__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Primitive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Primitive(full_bounded, 0);
}

static message_type_support_callbacks_t _Primitive__callbacks = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Primitive",
  _Primitive__cdr_serialize,
  _Primitive__cdr_deserialize,
  _Primitive__get_serialized_size,
  _Primitive__max_serialized_size
};

static rosidl_message_type_support_t _Primitive__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Primitive__callbacks,
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
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive>()
{
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::_Primitive__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive)() {
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::_Primitive__handle;
}

#ifdef __cplusplus
}
#endif
