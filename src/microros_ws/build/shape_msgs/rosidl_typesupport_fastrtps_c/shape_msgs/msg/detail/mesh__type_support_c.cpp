// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from shape_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/mesh__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "shape_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "shape_msgs/msg/detail/mesh__struct.h"
#include "shape_msgs/msg/detail/mesh__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // vertices
#include "shape_msgs/msg/detail/mesh_triangle__functions.h"  // triangles

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();
size_t get_serialized_size_shape_msgs__msg__MeshTriangle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_shape_msgs__msg__MeshTriangle(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shape_msgs, msg, MeshTriangle)();


using _Mesh__ros_msg_type = shape_msgs__msg__Mesh;

static bool _Mesh__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Mesh__ros_msg_type * ros_message = static_cast<const _Mesh__ros_msg_type *>(untyped_ros_message);
  // Field name: triangles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shape_msgs, msg, MeshTriangle
      )()->data);
    size_t size = ros_message->triangles.size;
    auto array_ptr = ros_message->triangles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: vertices
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    size_t size = ros_message->vertices.size;
    auto array_ptr = ros_message->vertices.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Mesh__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Mesh__ros_msg_type * ros_message = static_cast<_Mesh__ros_msg_type *>(untyped_ros_message);
  // Field name: triangles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shape_msgs, msg, MeshTriangle
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->triangles.data) {
      shape_msgs__msg__MeshTriangle__Sequence__fini(&ros_message->triangles);
    }
    if (!shape_msgs__msg__MeshTriangle__Sequence__init(&ros_message->triangles, size)) {
      return "failed to create array for field 'triangles'";
    }
    auto array_ptr = ros_message->triangles.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: vertices
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vertices.data) {
      geometry_msgs__msg__Point__Sequence__fini(&ros_message->vertices);
    }
    if (!geometry_msgs__msg__Point__Sequence__init(&ros_message->vertices, size)) {
      return "failed to create array for field 'vertices'";
    }
    auto array_ptr = ros_message->vertices.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t get_serialized_size_shape_msgs__msg__Mesh(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Mesh__ros_msg_type * ros_message = static_cast<const _Mesh__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name triangles
  {
    size_t array_size = ros_message->triangles.size;
    auto array_ptr = ros_message->triangles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_shape_msgs__msg__MeshTriangle(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name vertices
  {
    size_t array_size = ros_message->vertices.size;
    auto array_ptr = ros_message->vertices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Mesh__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_shape_msgs__msg__Mesh(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t max_serialized_size_shape_msgs__msg__Mesh(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: triangles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_shape_msgs__msg__MeshTriangle(
        full_bounded, current_alignment);
    }
  }
  // member: vertices
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Mesh__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_shape_msgs__msg__Mesh(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Mesh = {
  "shape_msgs::msg",
  "Mesh",
  _Mesh__cdr_serialize,
  _Mesh__cdr_deserialize,
  _Mesh__get_serialized_size,
  _Mesh__max_serialized_size
};

static rosidl_message_type_support_t _Mesh__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Mesh,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shape_msgs, msg, Mesh)() {
  return &_Mesh__type_support;
}

#if defined(__cplusplus)
}
#endif
