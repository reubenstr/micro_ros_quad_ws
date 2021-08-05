// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__struct.hpp"

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
  const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rosidl_typesupport_microxrcedds_test_msg::msg::Primitive &);
size_t get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive &,
  size_t current_alignment);
size_t
max_serialized_size_Primitive(
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
bool cdr_serialize(
  const rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive &);
size_t get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive &,
  size_t current_alignment);
size_t
max_serialized_size_BasicPrimitive(
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
  const rosidl_typesupport_microxrcedds_test_msg::msg::Compound & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: string_data
  cdr << ros_message.string_data;
  // Member: sequence_data
  {
    size_t size = ros_message.sequence_data.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.sequence_data[i],
        cdr);
    }
  }
  // Member: array_data
  {
    for (size_t i = 0; i < 3; i++) {
      rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.array_data[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosidl_typesupport_microxrcedds_test_msg::msg::Compound & ros_message)
{
  // Member: string_data
  cdr >> ros_message.string_data;

  // Member: sequence_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.sequence_data.resize(size);
    for (size_t i = 0; i < size; i++) {
      rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.sequence_data[i]);
    }
  }

  // Member: array_data
  {
    for (size_t i = 0; i < 3; i++) {
      rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.array_data[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
get_serialized_size(
  const rosidl_typesupport_microxrcedds_test_msg::msg::Compound & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: string_data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_data.size() + 1);
  // Member: sequence_data
  {
    size_t array_size = ros_message.sequence_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.sequence_data[index], current_alignment);
    }
  }
  // Member: array_data
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.array_data[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
max_serialized_size_Compound(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: string_data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sequence_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_Primitive(
        full_bounded, current_alignment);
    }
  }

  // Member: array_data
  {
    size_t array_size = 3;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_BasicPrimitive(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Compound__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosidl_typesupport_microxrcedds_test_msg::msg::Compound *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Compound__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
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

static size_t _Compound__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Compound(full_bounded, 0);
}

static message_type_support_callbacks_t _Compound__callbacks = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Compound",
  _Compound__cdr_serialize,
  _Compound__cdr_deserialize,
  _Compound__get_serialized_size,
  _Compound__max_serialized_size
};

static rosidl_message_type_support_t _Compound__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Compound__callbacks,
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
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::Compound>()
{
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::_Compound__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, Compound)() {
  return &rosidl_typesupport_microxrcedds_test_msg::msg::typesupport_fastrtps_cpp::_Compound__handle;
}

#ifdef __cplusplus
}
#endif
