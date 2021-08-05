// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/UnboundedString.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__struct.hpp"

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
  const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: unbounded_string1
  rv = ucdr_serialize_string(cdr, ros_message.unbounded_string1.c_str());
  // Member: unbounded_string2
  rv = ucdr_serialize_string(cdr, ros_message.unbounded_string2.c_str());
  // Member: unbounded_string3
  rv = ucdr_serialize_string(cdr, ros_message.unbounded_string3.c_str());
  // Member: unbounded_string4
  rv = ucdr_serialize_string(cdr, ros_message.unbounded_string4.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_deserialize(
  ucdrBuffer * cdr,
  rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: unbounded_string1
  ros_message.unbounded_string1.resize(ros_message.unbounded_string1.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.unbounded_string1[0], ros_message.unbounded_string1.capacity());
  if (rv) {
    ros_message.unbounded_string1.resize(std::strlen(&ros_message.unbounded_string1[0]));
  }
  // Member: unbounded_string2
  ros_message.unbounded_string2.resize(ros_message.unbounded_string2.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.unbounded_string2[0], ros_message.unbounded_string2.capacity());
  if (rv) {
    ros_message.unbounded_string2.resize(std::strlen(&ros_message.unbounded_string2[0]));
  }
  // Member: unbounded_string3
  ros_message.unbounded_string3.resize(ros_message.unbounded_string3.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.unbounded_string3[0], ros_message.unbounded_string3.capacity());
  if (rv) {
    ros_message.unbounded_string3.resize(std::strlen(&ros_message.unbounded_string3[0]));
  }
  // Member: unbounded_string4
  ros_message.unbounded_string4.resize(ros_message.unbounded_string4.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.unbounded_string4[0], ros_message.unbounded_string4.capacity());
  if (rv) {
    ros_message.unbounded_string4.resize(std::strlen(&ros_message.unbounded_string4[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: unbounded_string1
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.unbounded_string1.size() + 1;
  // Member: unbounded_string2
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.unbounded_string2.size() + 1;
  // Member: unbounded_string3
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.unbounded_string3.size() + 1;
  // Member: unbounded_string4
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.unbounded_string4.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
max_serialized_size_UnboundedString(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: unbounded_string1
  *full_bounded = false;
  // Member: unbounded_string2
  *full_bounded = false;
  // Member: unbounded_string3
  *full_bounded = false;
  // Member: unbounded_string4
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _UnboundedString__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UnboundedString__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UnboundedString__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UnboundedString__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _UnboundedString__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_UnboundedString(&full_bounded, 0);
}

static message_type_support_callbacks_t _UnboundedString__callbacks = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "UnboundedString",
  _UnboundedString__cdr_serialize,
  _UnboundedString__cdr_deserialize,
  _UnboundedString__get_serialized_size,
  _UnboundedString__get_serialized_size_with_initial_alignment,
  _UnboundedString__max_serialized_size
};

static rosidl_message_type_support_t _UnboundedString__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_UnboundedString__callbacks,
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
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString>()
{
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_UnboundedString__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString)() {
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_UnboundedString__handle;
}

#ifdef __cplusplus
}
#endif
