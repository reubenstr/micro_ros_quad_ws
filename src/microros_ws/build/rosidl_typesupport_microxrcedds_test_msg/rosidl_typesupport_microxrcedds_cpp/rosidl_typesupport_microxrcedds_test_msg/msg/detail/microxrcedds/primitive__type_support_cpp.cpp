// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.hpp"

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
bool cdr_serialize(
  const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString &);

size_t get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString &,
  size_t current_alignment);

size_t
max_serialized_size_UnboundedString(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace rosidl_typesupport_microxrcedds_test_msg


namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_serialize(
  const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: bool_test
  rv = ucdr_serialize_bool(cdr, ros_message.bool_test);
  // Member: bool_array_test
  {
    size_t size = ros_message.bool_array_test.size();
    rv = ucdr_serialize_array_bool(cdr, ros_message.bool_array_test.data(), size);
  }
  // Member: byte_test
  rv = ucdr_serialize_uint8_t(cdr, ros_message.byte_test);
  // Member: byte_array_test
  {
    size_t size = ros_message.byte_array_test.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.byte_array_test.data(), size);
  }
  // Member: char_test
  rv = ucdr_serialize_uint8_t(cdr, ros_message.char_test);
  // Member: char_array_test
  {
    size_t size = ros_message.char_array_test.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.char_array_test.data(), size);
  }
  // Member: float32_test
  rv = ucdr_serialize_float(cdr, ros_message.float32_test);
  // Member: float32_array_test
  {
    size_t size = ros_message.float32_array_test.size();
    rv = ucdr_serialize_array_float(cdr, ros_message.float32_array_test.data(), size);
  }
  // Member: double_test
  rv = ucdr_serialize_double(cdr, ros_message.double_test);
  // Member: float64_array_test
  {
    size_t size = ros_message.float64_array_test.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.float64_array_test.data(), size);
  }
  // Member: int8_test
  rv = ucdr_serialize_int8_t(cdr, ros_message.int8_test);
  // Member: int8_array_test
  {
    size_t size = ros_message.int8_array_test.size();
    rv = ucdr_serialize_array_int8_t(cdr, ros_message.int8_array_test.data(), size);
  }
  // Member: uint8_test
  rv = ucdr_serialize_uint8_t(cdr, ros_message.uint8_test);
  // Member: uint8_array_test
  {
    size_t size = ros_message.uint8_array_test.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.uint8_array_test.data(), size);
  }
  // Member: int16_test
  rv = ucdr_serialize_int16_t(cdr, ros_message.int16_test);
  // Member: int16_array_test
  {
    size_t size = ros_message.int16_array_test.size();
    rv = ucdr_serialize_array_int16_t(cdr, ros_message.int16_array_test.data(), size);
  }
  // Member: uint16_test
  rv = ucdr_serialize_uint16_t(cdr, ros_message.uint16_test);
  // Member: uint16_array_test
  {
    size_t size = ros_message.uint16_array_test.size();
    rv = ucdr_serialize_array_uint16_t(cdr, ros_message.uint16_array_test.data(), size);
  }
  // Member: int32_test
  rv = ucdr_serialize_int32_t(cdr, ros_message.int32_test);
  // Member: int32_array_test
  {
    size_t size = ros_message.int32_array_test.size();
    rv = ucdr_serialize_array_int32_t(cdr, ros_message.int32_array_test.data(), size);
  }
  // Member: uint32_test
  rv = ucdr_serialize_uint32_t(cdr, ros_message.uint32_test);
  // Member: uint32_array_test
  {
    size_t size = ros_message.uint32_array_test.size();
    rv = ucdr_serialize_array_uint32_t(cdr, ros_message.uint32_array_test.data(), size);
  }
  // Member: int64_test
  rv = ucdr_serialize_int64_t(cdr, ros_message.int64_test);
  // Member: int64_array_test
  {
    size_t size = ros_message.int64_array_test.size();
    rv = ucdr_serialize_array_int64_t(cdr, ros_message.int64_array_test.data(), size);
  }
  // Member: uint64_test
  rv = ucdr_serialize_uint64_t(cdr, ros_message.uint64_test);
  // Member: uint64_array_test
  {
    size_t size = ros_message.uint64_array_test.size();
    rv = ucdr_serialize_array_uint64_t(cdr, ros_message.uint64_array_test.data(), size);
  }
  // Member: nested_test
  rv = rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.nested_test,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_deserialize(
  ucdrBuffer * cdr,
  rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: bool_test
  rv = ucdr_deserialize_bool(cdr, &ros_message.bool_test);
  // Member: bool_array_test
  {
    const size_t size = ros_message.bool_array_test.size();
    rv = ucdr_deserialize_array_bool(cdr, ros_message.bool_array_test.data(), size);
  }
  // Member: byte_test
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.byte_test);
  // Member: byte_array_test
  {
    const size_t size = ros_message.byte_array_test.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.byte_array_test.data(), size);
  }
  // Member: char_test
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.char_test);
  // Member: char_array_test
  {
    const size_t size = ros_message.char_array_test.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.char_array_test.data(), size);
  }
  // Member: float32_test
  rv = ucdr_deserialize_float(cdr, &ros_message.float32_test);
  // Member: float32_array_test
  {
    const size_t size = ros_message.float32_array_test.size();
    rv = ucdr_deserialize_array_float(cdr, ros_message.float32_array_test.data(), size);
  }
  // Member: double_test
  rv = ucdr_deserialize_double(cdr, &ros_message.double_test);
  // Member: float64_array_test
  {
    const size_t size = ros_message.float64_array_test.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.float64_array_test.data(), size);
  }
  // Member: int8_test
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.int8_test);
  // Member: int8_array_test
  {
    const size_t size = ros_message.int8_array_test.size();
    rv = ucdr_deserialize_array_int8_t(cdr, ros_message.int8_array_test.data(), size);
  }
  // Member: uint8_test
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.uint8_test);
  // Member: uint8_array_test
  {
    const size_t size = ros_message.uint8_array_test.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.uint8_array_test.data(), size);
  }
  // Member: int16_test
  rv = ucdr_deserialize_int16_t(cdr, &ros_message.int16_test);
  // Member: int16_array_test
  {
    const size_t size = ros_message.int16_array_test.size();
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message.int16_array_test.data(), size);
  }
  // Member: uint16_test
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.uint16_test);
  // Member: uint16_array_test
  {
    const size_t size = ros_message.uint16_array_test.size();
    rv = ucdr_deserialize_array_uint16_t(cdr, ros_message.uint16_array_test.data(), size);
  }
  // Member: int32_test
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.int32_test);
  // Member: int32_array_test
  {
    const size_t size = ros_message.int32_array_test.size();
    rv = ucdr_deserialize_array_int32_t(cdr, ros_message.int32_array_test.data(), size);
  }
  // Member: uint32_test
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.uint32_test);
  // Member: uint32_array_test
  {
    const size_t size = ros_message.uint32_array_test.size();
    rv = ucdr_deserialize_array_uint32_t(cdr, ros_message.uint32_array_test.data(), size);
  }
  // Member: int64_test
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.int64_test);
  // Member: int64_array_test
  {
    const size_t size = ros_message.int64_array_test.size();
    rv = ucdr_deserialize_array_int64_t(cdr, ros_message.int64_array_test.data(), size);
  }
  // Member: uint64_test
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message.uint64_test);
  // Member: uint64_array_test
  {
    const size_t size = ros_message.uint64_array_test.size();
    rv = ucdr_deserialize_array_uint64_t(cdr, ros_message.uint64_array_test.data(), size);
  }
  // Member: nested_test
  rv = rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.nested_test);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_test
  {
    const size_t item_size = sizeof(ros_message.bool_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: bool_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.bool_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: byte_test
  {
    const size_t item_size = sizeof(ros_message.byte_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: byte_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.byte_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: char_test
  {
    const size_t item_size = sizeof(ros_message.char_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: char_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.char_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float32_test
  {
    const size_t item_size = sizeof(ros_message.float32_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float32_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.float32_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: double_test
  {
    const size_t item_size = sizeof(ros_message.double_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float64_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.float64_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int8_test
  {
    const size_t item_size = sizeof(ros_message.int8_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int8_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.int8_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint8_test
  {
    const size_t item_size = sizeof(ros_message.uint8_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint8_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.uint8_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int16_test
  {
    const size_t item_size = sizeof(ros_message.int16_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int16_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.int16_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint16_test
  {
    const size_t item_size = sizeof(ros_message.uint16_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint16_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.uint16_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int32_test
  {
    const size_t item_size = sizeof(ros_message.int32_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int32_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.int32_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint32_test
  {
    const size_t item_size = sizeof(ros_message.uint32_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint32_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.uint32_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int64_test
  {
    const size_t item_size = sizeof(ros_message.int64_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int64_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.int64_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint64_test
  {
    const size_t item_size = sizeof(ros_message.uint64_test);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint64_array_test
  {
    const size_t array_size = 11;
    const size_t item_size = sizeof(ros_message.uint64_array_test[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: nested_test
  current_alignment += rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.nested_test,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
max_serialized_size_Primitive(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: bool_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (array_size * sizeof(bool));
  }
  // Member: byte_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: byte_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: char_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: char_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: float32_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: float32_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: double_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: float64_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: int8_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: int8_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (array_size * sizeof(int8_t));
  }
  // Member: uint8_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: uint8_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: int16_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);
  // Member: int16_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: uint16_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: uint16_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (array_size * sizeof(uint16_t));
  }
  // Member: int32_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: int32_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (array_size * sizeof(int32_t));
  }
  // Member: uint32_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: uint32_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (array_size * sizeof(uint32_t));
  }
  // Member: int64_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: int64_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (array_size * sizeof(int64_t));
  }
  // Member: uint64_test
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: uint64_array_test
  {
    const size_t array_size = 11;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (array_size * sizeof(uint64_t));
  }
  // Member: nested_test
  current_alignment += rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::max_serialized_size_UnboundedString(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _Primitive__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Primitive__cdr_deserialize(
  ucdrBuffer * cdr,
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

static size_t _Primitive__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Primitive__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Primitive(&full_bounded, 0);
}

static message_type_support_callbacks_t _Primitive__callbacks = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Primitive",
  _Primitive__cdr_serialize,
  _Primitive__cdr_deserialize,
  _Primitive__get_serialized_size,
  _Primitive__get_serialized_size_with_initial_alignment,
  _Primitive__max_serialized_size
};

static rosidl_message_type_support_t _Primitive__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Primitive__callbacks,
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
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive>()
{
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_Primitive__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive)() {
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_Primitive__handle;
}

#ifdef __cplusplus
}
#endif
