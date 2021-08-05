// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Sequence.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__FUNCTIONS_H_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__struct.h"

/// Initialize msg/Sequence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence
 * )) before or use
 * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
bool
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__init(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * msg);

/// Finalize msg/Sequence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
void
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__fini(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * msg);

/// Create msg/Sequence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence *
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__create();

/// Destroy msg/Sequence message.
/**
 * It calls
 * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
void
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * msg);


/// Initialize array of msg/Sequence messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
bool
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__init(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence * array, size_t size);

/// Finalize array of msg/Sequence messages.
/**
 * It calls
 * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
void
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__fini(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence * array);

/// Create array of msg/Sequence messages.
/**
 * It allocates the memory for the array and calls
 * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence *
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__create(size_t size);

/// Destroy array of msg/Sequence messages.
/**
 * It calls
 * rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
void
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__FUNCTIONS_H_
