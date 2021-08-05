// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from shape_msgs:msg/MeshTriangle.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/mesh_triangle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "shape_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "shape_msgs/msg/detail/mesh_triangle__struct.h"
#include "shape_msgs/msg/detail/mesh_triangle__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MeshTriangle__ros_msg_type = shape_msgs__msg__MeshTriangle;

static bool _MeshTriangle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MeshTriangle__ros_msg_type * ros_message = static_cast<const _MeshTriangle__ros_msg_type *>(untyped_ros_message);
  // Field name: vertex_indices
  {
    size_t size = 3;
    auto array_ptr = ros_message->vertex_indices;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MeshTriangle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MeshTriangle__ros_msg_type * ros_message = static_cast<_MeshTriangle__ros_msg_type *>(untyped_ros_message);
  // Field name: vertex_indices
  {
    size_t size = 3;
    auto array_ptr = ros_message->vertex_indices;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t get_serialized_size_shape_msgs__msg__MeshTriangle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MeshTriangle__ros_msg_type * ros_message = static_cast<const _MeshTriangle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vertex_indices
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->vertex_indices;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MeshTriangle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_shape_msgs__msg__MeshTriangle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t max_serialized_size_shape_msgs__msg__MeshTriangle(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: vertex_indices
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MeshTriangle__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_shape_msgs__msg__MeshTriangle(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MeshTriangle = {
  "shape_msgs::msg",
  "MeshTriangle",
  _MeshTriangle__cdr_serialize,
  _MeshTriangle__cdr_deserialize,
  _MeshTriangle__get_serialized_size,
  _MeshTriangle__max_serialized_size
};

static rosidl_message_type_support_t _MeshTriangle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MeshTriangle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shape_msgs, msg, MeshTriangle)() {
  return &_MeshTriangle__type_support;
}

#if defined(__cplusplus)
}
#endif
