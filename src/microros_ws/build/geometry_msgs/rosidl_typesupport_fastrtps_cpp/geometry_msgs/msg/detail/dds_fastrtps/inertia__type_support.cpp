// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from geometry_msgs:msg/Inertia.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/inertia__rosidl_typesupport_fastrtps_cpp.hpp"
#include "geometry_msgs/msg/detail/inertia__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace geometry_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
cdr_serialize(
  const geometry_msgs::msg::Inertia & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: m
  cdr << ros_message.m;
  // Member: com
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.com,
    cdr);
  // Member: ixx
  cdr << ros_message.ixx;
  // Member: ixy
  cdr << ros_message.ixy;
  // Member: ixz
  cdr << ros_message.ixz;
  // Member: iyy
  cdr << ros_message.iyy;
  // Member: iyz
  cdr << ros_message.iyz;
  // Member: izz
  cdr << ros_message.izz;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs::msg::Inertia & ros_message)
{
  // Member: m
  cdr >> ros_message.m;

  // Member: com
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.com);

  // Member: ixx
  cdr >> ros_message.ixx;

  // Member: ixy
  cdr >> ros_message.ixy;

  // Member: ixz
  cdr >> ros_message.ixz;

  // Member: iyy
  cdr >> ros_message.iyy;

  // Member: iyz
  cdr >> ros_message.iyz;

  // Member: izz
  cdr >> ros_message.izz;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
get_serialized_size(
  const geometry_msgs::msg::Inertia & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: m
  {
    size_t item_size = sizeof(ros_message.m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: com

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.com, current_alignment);
  // Member: ixx
  {
    size_t item_size = sizeof(ros_message.ixx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ixy
  {
    size_t item_size = sizeof(ros_message.ixy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ixz
  {
    size_t item_size = sizeof(ros_message.ixz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: iyy
  {
    size_t item_size = sizeof(ros_message.iyy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: iyz
  {
    size_t item_size = sizeof(ros_message.iyz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: izz
  {
    size_t item_size = sizeof(ros_message.izz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs
max_serialized_size_Inertia(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: m
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: com
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  // Member: ixx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ixy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ixz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: iyy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: iyz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: izz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Inertia__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::Inertia *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Inertia__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<geometry_msgs::msg::Inertia *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Inertia__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::Inertia *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Inertia__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Inertia(full_bounded, 0);
}

static message_type_support_callbacks_t _Inertia__callbacks = {
  "geometry_msgs::msg",
  "Inertia",
  _Inertia__cdr_serialize,
  _Inertia__cdr_deserialize,
  _Inertia__get_serialized_size,
  _Inertia__max_serialized_size
};

static rosidl_message_type_support_t _Inertia__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Inertia__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace geometry_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<geometry_msgs::msg::Inertia>()
{
  return &geometry_msgs::msg::typesupport_fastrtps_cpp::_Inertia__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, geometry_msgs, msg, Inertia)() {
  return &geometry_msgs::msg::typesupport_fastrtps_cpp::_Inertia__handle;
}

#ifdef __cplusplus
}
#endif
