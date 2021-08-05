// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice
#include "stereo_msgs/msg/detail/disparity_image__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stereo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stereo_msgs/msg/detail/disparity_image__struct.h"
#include "stereo_msgs/msg/detail/disparity_image__functions.h"
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

#include "sensor_msgs/msg/detail/image__functions.h"  // image
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"  // valid_window
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DisparityImage__ros_msg_type = stereo_msgs__msg__DisparityImage;

static bool _DisparityImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DisparityImage__ros_msg_type * ros_message = static_cast<const _DisparityImage__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->image, cdr))
    {
      return false;
    }
  }

  // Field name: f
  {
    cdr << ros_message->f;
  }

  // Field name: t
  {
    cdr << ros_message->t;
  }

  // Field name: valid_window
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->valid_window, cdr))
    {
      return false;
    }
  }

  // Field name: min_disparity
  {
    cdr << ros_message->min_disparity;
  }

  // Field name: max_disparity
  {
    cdr << ros_message->max_disparity;
  }

  // Field name: delta_d
  {
    cdr << ros_message->delta_d;
  }

  return true;
}

static bool _DisparityImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DisparityImage__ros_msg_type * ros_message = static_cast<_DisparityImage__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->image))
    {
      return false;
    }
  }

  // Field name: f
  {
    cdr >> ros_message->f;
  }

  // Field name: t
  {
    cdr >> ros_message->t;
  }

  // Field name: valid_window
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->valid_window))
    {
      return false;
    }
  }

  // Field name: min_disparity
  {
    cdr >> ros_message->min_disparity;
  }

  // Field name: max_disparity
  {
    cdr >> ros_message->max_disparity;
  }

  // Field name: delta_d
  {
    cdr >> ros_message->delta_d;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stereo_msgs
size_t get_serialized_size_stereo_msgs__msg__DisparityImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DisparityImage__ros_msg_type * ros_message = static_cast<const _DisparityImage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name image

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->image), current_alignment);
  // field.name f
  {
    size_t item_size = sizeof(ros_message->f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t
  {
    size_t item_size = sizeof(ros_message->t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valid_window

  current_alignment += get_serialized_size_sensor_msgs__msg__RegionOfInterest(
    &(ros_message->valid_window), current_alignment);
  // field.name min_disparity
  {
    size_t item_size = sizeof(ros_message->min_disparity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_disparity
  {
    size_t item_size = sizeof(ros_message->max_disparity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_d
  {
    size_t item_size = sizeof(ros_message->delta_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DisparityImage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stereo_msgs__msg__DisparityImage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stereo_msgs
size_t max_serialized_size_stereo_msgs__msg__DisparityImage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: image
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        full_bounded, current_alignment);
    }
  }
  // member: f
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: valid_window
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__RegionOfInterest(
        full_bounded, current_alignment);
    }
  }
  // member: min_disparity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_disparity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DisparityImage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_stereo_msgs__msg__DisparityImage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DisparityImage = {
  "stereo_msgs::msg",
  "DisparityImage",
  _DisparityImage__cdr_serialize,
  _DisparityImage__cdr_deserialize,
  _DisparityImage__get_serialized_size,
  _DisparityImage__max_serialized_size
};

static rosidl_message_type_support_t _DisparityImage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DisparityImage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stereo_msgs, msg, DisparityImage)() {
  return &_DisparityImage__type_support;
}

#if defined(__cplusplus)
}
#endif
