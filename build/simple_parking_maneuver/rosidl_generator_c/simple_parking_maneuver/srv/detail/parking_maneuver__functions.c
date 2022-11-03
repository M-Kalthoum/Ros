// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simple_parking_maneuver:srv/ParkingManeuver.idl
// generated code does not contain a copyright notice
#include "simple_parking_maneuver/srv/detail/parking_maneuver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

bool
simple_parking_maneuver__srv__ParkingManeuver_Request__init(simple_parking_maneuver__srv__ParkingManeuver_Request * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    simple_parking_maneuver__srv__ParkingManeuver_Request__fini(msg);
    return false;
  }
  return true;
}

void
simple_parking_maneuver__srv__ParkingManeuver_Request__fini(simple_parking_maneuver__srv__ParkingManeuver_Request * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
}

bool
simple_parking_maneuver__srv__ParkingManeuver_Request__are_equal(const simple_parking_maneuver__srv__ParkingManeuver_Request * lhs, const simple_parking_maneuver__srv__ParkingManeuver_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  return true;
}

bool
simple_parking_maneuver__srv__ParkingManeuver_Request__copy(
  const simple_parking_maneuver__srv__ParkingManeuver_Request * input,
  simple_parking_maneuver__srv__ParkingManeuver_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  return true;
}

simple_parking_maneuver__srv__ParkingManeuver_Request *
simple_parking_maneuver__srv__ParkingManeuver_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_parking_maneuver__srv__ParkingManeuver_Request * msg = (simple_parking_maneuver__srv__ParkingManeuver_Request *)allocator.allocate(sizeof(simple_parking_maneuver__srv__ParkingManeuver_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_parking_maneuver__srv__ParkingManeuver_Request));
  bool success = simple_parking_maneuver__srv__ParkingManeuver_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simple_parking_maneuver__srv__ParkingManeuver_Request__destroy(simple_parking_maneuver__srv__ParkingManeuver_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simple_parking_maneuver__srv__ParkingManeuver_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence__init(simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_parking_maneuver__srv__ParkingManeuver_Request * data = NULL;

  if (size) {
    data = (simple_parking_maneuver__srv__ParkingManeuver_Request *)allocator.zero_allocate(size, sizeof(simple_parking_maneuver__srv__ParkingManeuver_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_parking_maneuver__srv__ParkingManeuver_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_parking_maneuver__srv__ParkingManeuver_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence__fini(simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      simple_parking_maneuver__srv__ParkingManeuver_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence *
simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence * array = (simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence *)allocator.allocate(sizeof(simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence__destroy(simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence__are_equal(const simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence * lhs, const simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simple_parking_maneuver__srv__ParkingManeuver_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence__copy(
  const simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence * input,
  simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simple_parking_maneuver__srv__ParkingManeuver_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simple_parking_maneuver__srv__ParkingManeuver_Request * data =
      (simple_parking_maneuver__srv__ParkingManeuver_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simple_parking_maneuver__srv__ParkingManeuver_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simple_parking_maneuver__srv__ParkingManeuver_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simple_parking_maneuver__srv__ParkingManeuver_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
simple_parking_maneuver__srv__ParkingManeuver_Response__init(simple_parking_maneuver__srv__ParkingManeuver_Response * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    simple_parking_maneuver__srv__ParkingManeuver_Response__fini(msg);
    return false;
  }
  return true;
}

void
simple_parking_maneuver__srv__ParkingManeuver_Response__fini(simple_parking_maneuver__srv__ParkingManeuver_Response * msg)
{
  if (!msg) {
    return;
  }
  // info
  rosidl_runtime_c__String__fini(&msg->info);
}

bool
simple_parking_maneuver__srv__ParkingManeuver_Response__are_equal(const simple_parking_maneuver__srv__ParkingManeuver_Response * lhs, const simple_parking_maneuver__srv__ParkingManeuver_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  return true;
}

bool
simple_parking_maneuver__srv__ParkingManeuver_Response__copy(
  const simple_parking_maneuver__srv__ParkingManeuver_Response * input,
  simple_parking_maneuver__srv__ParkingManeuver_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  return true;
}

simple_parking_maneuver__srv__ParkingManeuver_Response *
simple_parking_maneuver__srv__ParkingManeuver_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_parking_maneuver__srv__ParkingManeuver_Response * msg = (simple_parking_maneuver__srv__ParkingManeuver_Response *)allocator.allocate(sizeof(simple_parking_maneuver__srv__ParkingManeuver_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_parking_maneuver__srv__ParkingManeuver_Response));
  bool success = simple_parking_maneuver__srv__ParkingManeuver_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simple_parking_maneuver__srv__ParkingManeuver_Response__destroy(simple_parking_maneuver__srv__ParkingManeuver_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simple_parking_maneuver__srv__ParkingManeuver_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence__init(simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_parking_maneuver__srv__ParkingManeuver_Response * data = NULL;

  if (size) {
    data = (simple_parking_maneuver__srv__ParkingManeuver_Response *)allocator.zero_allocate(size, sizeof(simple_parking_maneuver__srv__ParkingManeuver_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_parking_maneuver__srv__ParkingManeuver_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_parking_maneuver__srv__ParkingManeuver_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence__fini(simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      simple_parking_maneuver__srv__ParkingManeuver_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence *
simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence * array = (simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence *)allocator.allocate(sizeof(simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence__destroy(simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence__are_equal(const simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence * lhs, const simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simple_parking_maneuver__srv__ParkingManeuver_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence__copy(
  const simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence * input,
  simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simple_parking_maneuver__srv__ParkingManeuver_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simple_parking_maneuver__srv__ParkingManeuver_Response * data =
      (simple_parking_maneuver__srv__ParkingManeuver_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simple_parking_maneuver__srv__ParkingManeuver_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simple_parking_maneuver__srv__ParkingManeuver_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simple_parking_maneuver__srv__ParkingManeuver_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
