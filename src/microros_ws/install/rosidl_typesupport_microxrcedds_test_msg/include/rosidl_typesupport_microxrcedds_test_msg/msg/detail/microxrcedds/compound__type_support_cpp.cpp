// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__struct.hpp"

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
  const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rosidl_typesupport_microxrcedds_test_msg::msg::Primitive &);

size_t get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive &,
  size_t current_alignment);

size_t
max_serialized_size_Primitive(
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
bool cdr_serialize(
  const rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive &);

size_t get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive &,
  size_t current_alignment);

size_t
max_serialized_size_BasicPrimitive(
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
  const rosidl_typesupport_microxrcedds_test_msg::msg::Compound & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: string_data
  rv = ucdr_serialize_string(cdr, ros_message.string_data.c_str());
  // Member: sequence_data
  {
    size_t size = ros_message.sequence_data.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.sequence_data[i],
        cdr);
      i++;
    }
  }
  // Member: array_data
  {
    // Micro CDR only support arrays of basic types.
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_deserialize(
  ucdrBuffer * cdr,
  rosidl_typesupport_microxrcedds_test_msg::msg::Compound & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: string_data
  ros_message.string_data.resize(ros_message.string_data.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.string_data[0], ros_message.string_data.capacity());
  if (rv) {
    ros_message.string_data.resize(std::strlen(&ros_message.string_data[0]));
  }
  // Member: sequence_data
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.sequence_data.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.sequence_data[i]);
      i++;
    }
  }
  // Member: array_data
  {
    // Micro CDR only support arrays of basic types.
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::Compound & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: string_data
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.string_data.size() + 1;
  // Member: sequence_data
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.sequence_data.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.sequence_data[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: array_data
  {
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
max_serialized_size_Compound(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: string_data
  *full_bounded = false;
  // Member: sequence_data
  {
    *full_bounded = false;
  }
  // Member: array_data
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _Compound__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Compound *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Compound__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosidl_typesupport_microxrcedds_test_msg::msg::Compound *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Compound__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Compound *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Compound__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Compound *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Compound__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Compound(&full_bounded, 0);
}

static message_type_support_callbacks_t _Compound__callbacks = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Compound",
  _Compound__cdr_serialize,
  _Compound__cdr_deserialize,
  _Compound__get_serialized_size,
  _Compound__get_serialized_size_with_initial_alignment,
  _Compound__max_serialized_size
};

static rosidl_message_type_support_t _Compound__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Compound__callbacks,
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
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::Compound>()
{
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_Compound__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, Compound)() {
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_Compound__handle;
}

#ifdef __cplusplus
}
#endif
