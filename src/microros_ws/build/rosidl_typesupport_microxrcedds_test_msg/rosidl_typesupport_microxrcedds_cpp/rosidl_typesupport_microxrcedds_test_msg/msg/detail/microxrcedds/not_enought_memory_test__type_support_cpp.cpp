// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_serialize(
  const rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: initial_byte
  rv = ucdr_serialize_int8_t(cdr, ros_message.initial_byte);
  // Member: string
  rv = ucdr_serialize_string(cdr, ros_message.string.c_str());
  // Member: int64_sequence
  {
    size_t size = ros_message.int64_sequence.size();
    rv = ucdr_serialize_sequence_int64_t(cdr, &ros_message.int64_sequence[0], size);
  }
  // Member: int16_array
  {
    size_t size = ros_message.int16_array.size();
    rv = ucdr_serialize_array_int16_t(cdr, ros_message.int16_array.data(), size);
  }
  // Member: end_byte
  rv = ucdr_serialize_int8_t(cdr, ros_message.end_byte);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_deserialize(
  ucdrBuffer * cdr,
  rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: initial_byte
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.initial_byte);
  // Member: string
  ros_message.string.resize(ros_message.string.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.string[0], ros_message.string.capacity());
  if (rv) {
    ros_message.string.resize(std::strlen(&ros_message.string[0]));
  }
  // Member: int64_sequence
  {
    uint32_t size;
    const size_t capacity = ros_message.int64_sequence.capacity();
    ros_message.int64_sequence.resize(capacity);
    rv = ucdr_deserialize_sequence_int64_t(cdr, &ros_message.int64_sequence[0], capacity, &size);
    if (rv) {
      ros_message.int64_sequence.resize(size);
    }
  }
  // Member: int16_array
  {
    const size_t size = ros_message.int16_array.size();
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message.int16_array.data(), size);
  }
  // Member: end_byte
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.end_byte);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: initial_byte
  {
    const size_t item_size = sizeof(ros_message.initial_byte);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: string
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.string.size() + 1;
  // Member: int64_sequence
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.int64_sequence.size();
    size_t item_size = sizeof(ros_message.int64_sequence[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: int16_array
  {
    const size_t array_size = 10;
    const size_t item_size = sizeof(ros_message.int16_array[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: end_byte
  {
    const size_t item_size = sizeof(ros_message.end_byte);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
max_serialized_size_NotEnoughtMemoryTest(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: initial_byte
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: string
  *full_bounded = false;
  // Member: int64_sequence
  {
    *full_bounded = false;
  }
  // Member: int16_array
  {
    const size_t array_size = 10;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: end_byte
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);

  return current_alignment - initial_alignment;
}

static bool _NotEnoughtMemoryTest__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NotEnoughtMemoryTest__cdr_deserialize(
  ucdrBuffer * cdr,
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

static size_t _NotEnoughtMemoryTest__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _NotEnoughtMemoryTest__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_NotEnoughtMemoryTest(&full_bounded, 0);
}

static message_type_support_callbacks_t _NotEnoughtMemoryTest__callbacks = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "NotEnoughtMemoryTest",
  _NotEnoughtMemoryTest__cdr_serialize,
  _NotEnoughtMemoryTest__cdr_deserialize,
  _NotEnoughtMemoryTest__get_serialized_size,
  _NotEnoughtMemoryTest__get_serialized_size_with_initial_alignment,
  _NotEnoughtMemoryTest__max_serialized_size
};

static rosidl_message_type_support_t _NotEnoughtMemoryTest__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_NotEnoughtMemoryTest__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rosidl_typesupport_microxrcedds_test_msg

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rosidl_typesupport_microxrcedds_test_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest>()
{
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_NotEnoughtMemoryTest__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, NotEnoughtMemoryTest)() {
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_NotEnoughtMemoryTest__handle;
}

#ifdef __cplusplus
}
#endif
