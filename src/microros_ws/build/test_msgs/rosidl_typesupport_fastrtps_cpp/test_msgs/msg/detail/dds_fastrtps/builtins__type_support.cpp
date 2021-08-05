// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/Builtins.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/builtins__rosidl_typesupport_fastrtps_cpp.hpp"
#include "test_msgs/msg/detail/builtins__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Duration &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Duration &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);
size_t
max_serialized_size_Duration(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace test_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::msg::Builtins & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: duration_value
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.duration_value,
    cdr);
  // Member: time_value
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.time_value,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs::msg::Builtins & ros_message)
{
  // Member: duration_value
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.duration_value);

  // Member: time_value
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.time_value);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::msg::Builtins & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: duration_value

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.duration_value, current_alignment);
  // Member: time_value

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.time_value, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
max_serialized_size_Builtins(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: duration_value
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Duration(
        full_bounded, current_alignment);
    }
  }

  // Member: time_value
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Builtins__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Builtins *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Builtins__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::msg::Builtins *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Builtins__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::msg::Builtins *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Builtins__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Builtins(full_bounded, 0);
}

static message_type_support_callbacks_t _Builtins__callbacks = {
  "test_msgs::msg",
  "Builtins",
  _Builtins__cdr_serialize,
  _Builtins__cdr_deserialize,
  _Builtins__get_serialized_size,
  _Builtins__max_serialized_size
};

static rosidl_message_type_support_t _Builtins__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Builtins__callbacks,
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
get_message_type_support_handle<test_msgs::msg::Builtins>()
{
  return &test_msgs::msg::typesupport_fastrtps_cpp::_Builtins__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, msg, Builtins)() {
  return &test_msgs::msg::typesupport_fastrtps_cpp::_Builtins__handle;
}

#ifdef __cplusplus
}
#endif
