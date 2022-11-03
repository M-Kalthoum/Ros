// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simple_drive_control:srv/DrivingManeuver.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__FUNCTIONS_H_
#define SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simple_drive_control/msg/rosidl_generator_c__visibility_control.h"

#include "simple_drive_control/srv/detail/driving_maneuver__struct.h"

/// Initialize srv/DrivingManeuver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_drive_control__srv__DrivingManeuver_Request
 * )) before or use
 * simple_drive_control__srv__DrivingManeuver_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Request__init(simple_drive_control__srv__DrivingManeuver_Request * msg);

/// Finalize srv/DrivingManeuver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
void
simple_drive_control__srv__DrivingManeuver_Request__fini(simple_drive_control__srv__DrivingManeuver_Request * msg);

/// Create srv/DrivingManeuver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_drive_control__srv__DrivingManeuver_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
simple_drive_control__srv__DrivingManeuver_Request *
simple_drive_control__srv__DrivingManeuver_Request__create();

/// Destroy srv/DrivingManeuver message.
/**
 * It calls
 * simple_drive_control__srv__DrivingManeuver_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
void
simple_drive_control__srv__DrivingManeuver_Request__destroy(simple_drive_control__srv__DrivingManeuver_Request * msg);

/// Check for srv/DrivingManeuver message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Request__are_equal(const simple_drive_control__srv__DrivingManeuver_Request * lhs, const simple_drive_control__srv__DrivingManeuver_Request * rhs);

/// Copy a srv/DrivingManeuver message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Request__copy(
  const simple_drive_control__srv__DrivingManeuver_Request * input,
  simple_drive_control__srv__DrivingManeuver_Request * output);

/// Initialize array of srv/DrivingManeuver messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_drive_control__srv__DrivingManeuver_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Request__Sequence__init(simple_drive_control__srv__DrivingManeuver_Request__Sequence * array, size_t size);

/// Finalize array of srv/DrivingManeuver messages.
/**
 * It calls
 * simple_drive_control__srv__DrivingManeuver_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
void
simple_drive_control__srv__DrivingManeuver_Request__Sequence__fini(simple_drive_control__srv__DrivingManeuver_Request__Sequence * array);

/// Create array of srv/DrivingManeuver messages.
/**
 * It allocates the memory for the array and calls
 * simple_drive_control__srv__DrivingManeuver_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
simple_drive_control__srv__DrivingManeuver_Request__Sequence *
simple_drive_control__srv__DrivingManeuver_Request__Sequence__create(size_t size);

/// Destroy array of srv/DrivingManeuver messages.
/**
 * It calls
 * simple_drive_control__srv__DrivingManeuver_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
void
simple_drive_control__srv__DrivingManeuver_Request__Sequence__destroy(simple_drive_control__srv__DrivingManeuver_Request__Sequence * array);

/// Check for srv/DrivingManeuver message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Request__Sequence__are_equal(const simple_drive_control__srv__DrivingManeuver_Request__Sequence * lhs, const simple_drive_control__srv__DrivingManeuver_Request__Sequence * rhs);

/// Copy an array of srv/DrivingManeuver messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Request__Sequence__copy(
  const simple_drive_control__srv__DrivingManeuver_Request__Sequence * input,
  simple_drive_control__srv__DrivingManeuver_Request__Sequence * output);

/// Initialize srv/DrivingManeuver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_drive_control__srv__DrivingManeuver_Response
 * )) before or use
 * simple_drive_control__srv__DrivingManeuver_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Response__init(simple_drive_control__srv__DrivingManeuver_Response * msg);

/// Finalize srv/DrivingManeuver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
void
simple_drive_control__srv__DrivingManeuver_Response__fini(simple_drive_control__srv__DrivingManeuver_Response * msg);

/// Create srv/DrivingManeuver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_drive_control__srv__DrivingManeuver_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
simple_drive_control__srv__DrivingManeuver_Response *
simple_drive_control__srv__DrivingManeuver_Response__create();

/// Destroy srv/DrivingManeuver message.
/**
 * It calls
 * simple_drive_control__srv__DrivingManeuver_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
void
simple_drive_control__srv__DrivingManeuver_Response__destroy(simple_drive_control__srv__DrivingManeuver_Response * msg);

/// Check for srv/DrivingManeuver message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Response__are_equal(const simple_drive_control__srv__DrivingManeuver_Response * lhs, const simple_drive_control__srv__DrivingManeuver_Response * rhs);

/// Copy a srv/DrivingManeuver message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Response__copy(
  const simple_drive_control__srv__DrivingManeuver_Response * input,
  simple_drive_control__srv__DrivingManeuver_Response * output);

/// Initialize array of srv/DrivingManeuver messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_drive_control__srv__DrivingManeuver_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Response__Sequence__init(simple_drive_control__srv__DrivingManeuver_Response__Sequence * array, size_t size);

/// Finalize array of srv/DrivingManeuver messages.
/**
 * It calls
 * simple_drive_control__srv__DrivingManeuver_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
void
simple_drive_control__srv__DrivingManeuver_Response__Sequence__fini(simple_drive_control__srv__DrivingManeuver_Response__Sequence * array);

/// Create array of srv/DrivingManeuver messages.
/**
 * It allocates the memory for the array and calls
 * simple_drive_control__srv__DrivingManeuver_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
simple_drive_control__srv__DrivingManeuver_Response__Sequence *
simple_drive_control__srv__DrivingManeuver_Response__Sequence__create(size_t size);

/// Destroy array of srv/DrivingManeuver messages.
/**
 * It calls
 * simple_drive_control__srv__DrivingManeuver_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
void
simple_drive_control__srv__DrivingManeuver_Response__Sequence__destroy(simple_drive_control__srv__DrivingManeuver_Response__Sequence * array);

/// Check for srv/DrivingManeuver message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Response__Sequence__are_equal(const simple_drive_control__srv__DrivingManeuver_Response__Sequence * lhs, const simple_drive_control__srv__DrivingManeuver_Response__Sequence * rhs);

/// Copy an array of srv/DrivingManeuver messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_drive_control
bool
simple_drive_control__srv__DrivingManeuver_Response__Sequence__copy(
  const simple_drive_control__srv__DrivingManeuver_Response__Sequence * input,
  simple_drive_control__srv__DrivingManeuver_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__FUNCTIONS_H_
