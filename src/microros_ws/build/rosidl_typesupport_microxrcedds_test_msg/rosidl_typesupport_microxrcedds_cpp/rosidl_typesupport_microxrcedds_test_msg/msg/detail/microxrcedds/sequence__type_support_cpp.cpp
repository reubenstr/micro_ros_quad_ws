// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Sequence.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__struct.hpp"

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
  const rosidl_typesupport_microxrcedds_test_msg::msg::Sequence & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: sequence_string_test
  {
    size_t size = ros_message.sequence_string_test.size();
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      rv = ucdr_serialize_string(cdr, ros_message.sequence_string_test[i].c_str());
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_deserialize(
  ucdrBuffer * cdr,
  rosidl_typesupport_microxrcedds_test_msg::msg::Sequence & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: sequence_string_test
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if (size > ros_message.sequence_string_test.capacity()) {
      ros_message.sequence_string_test.resize(size);
    } else {
      ros_message.sequence_string_test.resize(ros_message.sequence_string_test.capacity());
    }

    for (size_t i = 0; rv && i < size; i++) {
      uint32_t capacity = ros_message.sequence_string_test[i].capacity();
      char * temp = static_cast<char *>(malloc(capacity * sizeof(char)));
      rv = ucdr_deserialize_string(cdr, temp, capacity);
      if (rv) {
        std::string stemp(temp);
        stemp.shrink_to_fit();
        ros_message.sequence_string_test[i] = std::move(stemp);
      }
      free(temp);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::Sequence & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sequence_string_test
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.sequence_string_test.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = ros_message.sequence_string_test[i].size() + 1;
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
max_serialized_size_Sequence(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: sequence_string_test
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _Sequence__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Sequence *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Sequence__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Sequence__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Sequence *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Sequence__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Sequence *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Sequence__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Sequence(&full_bounded, 0);
}

static message_type_support_callbacks_t _Sequence__callbacks = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Sequence",
  _Sequence__cdr_serialize,
  _Sequence__cdr_deserialize,
  _Sequence__get_serialized_size,
  _Sequence__get_serialized_size_with_initial_alignment,
  _Sequence__max_serialized_size
};

static rosidl_message_type_support_t _Sequence__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Sequence__callbacks,
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
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence>()
{
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_Sequence__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, Sequence)() {
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_microxrcedds_cpp::_Sequence__handle;
}

#ifdef __cplusplus
}
#endif
