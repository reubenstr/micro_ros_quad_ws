// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__FUNCTIONS_H_
#define COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "complex_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "complex_msgs/msg/detail/nested_msg_test__struct.h"

/// Initialize msg/NestedMsgTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * complex_msgs__msg__NestedMsgTest
 * )) before or use
 * complex_msgs__msg__NestedMsgTest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
bool
complex_msgs__msg__NestedMsgTest__init(complex_msgs__msg__NestedMsgTest * msg);

/// Finalize msg/NestedMsgTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
void
complex_msgs__msg__NestedMsgTest__fini(complex_msgs__msg__NestedMsgTest * msg);

/// Create msg/NestedMsgTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * complex_msgs__msg__NestedMsgTest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
complex_msgs__msg__NestedMsgTest *
complex_msgs__msg__NestedMsgTest__create();

/// Destroy msg/NestedMsgTest message.
/**
 * It calls
 * complex_msgs__msg__NestedMsgTest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
void
complex_msgs__msg__NestedMsgTest__destroy(complex_msgs__msg__NestedMsgTest * msg);


/// Initialize array of msg/NestedMsgTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * complex_msgs__msg__NestedMsgTest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
bool
complex_msgs__msg__NestedMsgTest__Sequence__init(complex_msgs__msg__NestedMsgTest__Sequence * array, size_t size);

/// Finalize array of msg/NestedMsgTest messages.
/**
 * It calls
 * complex_msgs__msg__NestedMsgTest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
void
complex_msgs__msg__NestedMsgTest__Sequence__fini(complex_msgs__msg__NestedMsgTest__Sequence * array);

/// Create array of msg/NestedMsgTest messages.
/**
 * It allocates the memory for the array and calls
 * complex_msgs__msg__NestedMsgTest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
complex_msgs__msg__NestedMsgTest__Sequence *
complex_msgs__msg__NestedMsgTest__Sequence__create(size_t size);

/// Destroy array of msg/NestedMsgTest messages.
/**
 * It calls
 * complex_msgs__msg__NestedMsgTest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
void
complex_msgs__msg__NestedMsgTest__Sequence__destroy(complex_msgs__msg__NestedMsgTest__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__FUNCTIONS_H_
