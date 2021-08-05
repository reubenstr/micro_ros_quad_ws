// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from visualization_msgs:msg/InteractiveMarkerInit.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/interactive_marker_init__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "visualization_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "visualization_msgs/msg/detail/interactive_marker_init__struct.h"
#include "visualization_msgs/msg/detail/interactive_marker_init__functions.h"
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

#include "rosidl_runtime_c/string.h"  // server_id
#include "rosidl_runtime_c/string_functions.h"  // server_id
#include "visualization_msgs/msg/detail/interactive_marker__functions.h"  // markers

// forward declare type support functions
size_t get_serialized_size_visualization_msgs__msg__InteractiveMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_visualization_msgs__msg__InteractiveMarker(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, InteractiveMarker)();


using _InteractiveMarkerInit__ros_msg_type = visualization_msgs__msg__InteractiveMarkerInit;

static bool _InteractiveMarkerInit__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InteractiveMarkerInit__ros_msg_type * ros_message = static_cast<const _InteractiveMarkerInit__ros_msg_type *>(untyped_ros_message);
  // Field name: server_id
  {
    const rosidl_runtime_c__String * str = &ros_message->server_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: seq_num
  {
    cdr << ros_message->seq_num;
  }

  // Field name: markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, visualization_msgs, msg, InteractiveMarker
      )()->data);
    size_t size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
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

static bool _InteractiveMarkerInit__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InteractiveMarkerInit__ros_msg_type * ros_message = static_cast<_InteractiveMarkerInit__ros_msg_type *>(untyped_ros_message);
  // Field name: server_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->server_id.data) {
      rosidl_runtime_c__String__init(&ros_message->server_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->server_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'server_id'\n");
      return false;
    }
  }

  // Field name: seq_num
  {
    cdr >> ros_message->seq_num;
  }

  // Field name: markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, visualization_msgs, msg, InteractiveMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->markers.data) {
      visualization_msgs__msg__InteractiveMarker__Sequence__fini(&ros_message->markers);
    }
    if (!visualization_msgs__msg__InteractiveMarker__Sequence__init(&ros_message->markers, size)) {
      return "failed to create array for field 'markers'";
    }
    auto array_ptr = ros_message->markers.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_visualization_msgs__msg__InteractiveMarkerInit(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InteractiveMarkerInit__ros_msg_type * ros_message = static_cast<const _InteractiveMarkerInit__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name server_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->server_id.size + 1);
  // field.name seq_num
  {
    size_t item_size = sizeof(ros_message->seq_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name markers
  {
    size_t array_size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_visualization_msgs__msg__InteractiveMarker(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InteractiveMarkerInit__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_visualization_msgs__msg__InteractiveMarkerInit(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_visualization_msgs__msg__InteractiveMarkerInit(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: server_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: seq_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: markers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_visualization_msgs__msg__InteractiveMarker(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _InteractiveMarkerInit__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_visualization_msgs__msg__InteractiveMarkerInit(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_InteractiveMarkerInit = {
  "visualization_msgs::msg",
  "InteractiveMarkerInit",
  _InteractiveMarkerInit__cdr_serialize,
  _InteractiveMarkerInit__cdr_deserialize,
  _InteractiveMarkerInit__get_serialized_size,
  _InteractiveMarkerInit__max_serialized_size
};

static rosidl_message_type_support_t _InteractiveMarkerInit__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InteractiveMarkerInit,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, InteractiveMarkerInit)() {
  return &_InteractiveMarkerInit__type_support;
}

#if defined(__cplusplus)
}
#endif
