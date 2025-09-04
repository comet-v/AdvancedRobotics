// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from live1288_service:srv/Live1288Service.idl
// generated code does not contain a copyright notice
#include "live1288_service/srv/detail/live1288_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input`
#include "rosidl_runtime_c/string_functions.h"

bool
live1288_service__srv__Live1288Service_Request__init(live1288_service__srv__Live1288Service_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__String__init(&msg->input)) {
    live1288_service__srv__Live1288Service_Request__fini(msg);
    return false;
  }
  return true;
}

void
live1288_service__srv__Live1288Service_Request__fini(live1288_service__srv__Live1288Service_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
  rosidl_runtime_c__String__fini(&msg->input);
}

bool
live1288_service__srv__Live1288Service_Request__are_equal(const live1288_service__srv__Live1288Service_Request * lhs, const live1288_service__srv__Live1288Service_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  return true;
}

bool
live1288_service__srv__Live1288Service_Request__copy(
  const live1288_service__srv__Live1288Service_Request * input,
  live1288_service__srv__Live1288Service_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__String__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  return true;
}

live1288_service__srv__Live1288Service_Request *
live1288_service__srv__Live1288Service_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live1288_service__srv__Live1288Service_Request * msg = (live1288_service__srv__Live1288Service_Request *)allocator.allocate(sizeof(live1288_service__srv__Live1288Service_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live1288_service__srv__Live1288Service_Request));
  bool success = live1288_service__srv__Live1288Service_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live1288_service__srv__Live1288Service_Request__destroy(live1288_service__srv__Live1288Service_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live1288_service__srv__Live1288Service_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live1288_service__srv__Live1288Service_Request__Sequence__init(live1288_service__srv__Live1288Service_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live1288_service__srv__Live1288Service_Request * data = NULL;

  if (size) {
    data = (live1288_service__srv__Live1288Service_Request *)allocator.zero_allocate(size, sizeof(live1288_service__srv__Live1288Service_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live1288_service__srv__Live1288Service_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live1288_service__srv__Live1288Service_Request__fini(&data[i - 1]);
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
live1288_service__srv__Live1288Service_Request__Sequence__fini(live1288_service__srv__Live1288Service_Request__Sequence * array)
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
      live1288_service__srv__Live1288Service_Request__fini(&array->data[i]);
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

live1288_service__srv__Live1288Service_Request__Sequence *
live1288_service__srv__Live1288Service_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live1288_service__srv__Live1288Service_Request__Sequence * array = (live1288_service__srv__Live1288Service_Request__Sequence *)allocator.allocate(sizeof(live1288_service__srv__Live1288Service_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live1288_service__srv__Live1288Service_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live1288_service__srv__Live1288Service_Request__Sequence__destroy(live1288_service__srv__Live1288Service_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live1288_service__srv__Live1288Service_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
live1288_service__srv__Live1288Service_Request__Sequence__are_equal(const live1288_service__srv__Live1288Service_Request__Sequence * lhs, const live1288_service__srv__Live1288Service_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!live1288_service__srv__Live1288Service_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
live1288_service__srv__Live1288Service_Request__Sequence__copy(
  const live1288_service__srv__Live1288Service_Request__Sequence * input,
  live1288_service__srv__Live1288Service_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(live1288_service__srv__Live1288Service_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    live1288_service__srv__Live1288Service_Request * data =
      (live1288_service__srv__Live1288Service_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!live1288_service__srv__Live1288Service_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          live1288_service__srv__Live1288Service_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!live1288_service__srv__Live1288Service_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `output`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
live1288_service__srv__Live1288Service_Response__init(live1288_service__srv__Live1288Service_Response * msg)
{
  if (!msg) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__init(&msg->output)) {
    live1288_service__srv__Live1288Service_Response__fini(msg);
    return false;
  }
  // number
  return true;
}

void
live1288_service__srv__Live1288Service_Response__fini(live1288_service__srv__Live1288Service_Response * msg)
{
  if (!msg) {
    return;
  }
  // output
  rosidl_runtime_c__String__fini(&msg->output);
  // number
}

bool
live1288_service__srv__Live1288Service_Response__are_equal(const live1288_service__srv__Live1288Service_Response * lhs, const live1288_service__srv__Live1288Service_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  return true;
}

bool
live1288_service__srv__Live1288Service_Response__copy(
  const live1288_service__srv__Live1288Service_Response * input,
  live1288_service__srv__Live1288Service_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  // number
  output->number = input->number;
  return true;
}

live1288_service__srv__Live1288Service_Response *
live1288_service__srv__Live1288Service_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live1288_service__srv__Live1288Service_Response * msg = (live1288_service__srv__Live1288Service_Response *)allocator.allocate(sizeof(live1288_service__srv__Live1288Service_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live1288_service__srv__Live1288Service_Response));
  bool success = live1288_service__srv__Live1288Service_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live1288_service__srv__Live1288Service_Response__destroy(live1288_service__srv__Live1288Service_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live1288_service__srv__Live1288Service_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live1288_service__srv__Live1288Service_Response__Sequence__init(live1288_service__srv__Live1288Service_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live1288_service__srv__Live1288Service_Response * data = NULL;

  if (size) {
    data = (live1288_service__srv__Live1288Service_Response *)allocator.zero_allocate(size, sizeof(live1288_service__srv__Live1288Service_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live1288_service__srv__Live1288Service_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live1288_service__srv__Live1288Service_Response__fini(&data[i - 1]);
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
live1288_service__srv__Live1288Service_Response__Sequence__fini(live1288_service__srv__Live1288Service_Response__Sequence * array)
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
      live1288_service__srv__Live1288Service_Response__fini(&array->data[i]);
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

live1288_service__srv__Live1288Service_Response__Sequence *
live1288_service__srv__Live1288Service_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live1288_service__srv__Live1288Service_Response__Sequence * array = (live1288_service__srv__Live1288Service_Response__Sequence *)allocator.allocate(sizeof(live1288_service__srv__Live1288Service_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live1288_service__srv__Live1288Service_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live1288_service__srv__Live1288Service_Response__Sequence__destroy(live1288_service__srv__Live1288Service_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live1288_service__srv__Live1288Service_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
live1288_service__srv__Live1288Service_Response__Sequence__are_equal(const live1288_service__srv__Live1288Service_Response__Sequence * lhs, const live1288_service__srv__Live1288Service_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!live1288_service__srv__Live1288Service_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
live1288_service__srv__Live1288Service_Response__Sequence__copy(
  const live1288_service__srv__Live1288Service_Response__Sequence * input,
  live1288_service__srv__Live1288Service_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(live1288_service__srv__Live1288Service_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    live1288_service__srv__Live1288Service_Response * data =
      (live1288_service__srv__Live1288Service_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!live1288_service__srv__Live1288Service_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          live1288_service__srv__Live1288Service_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!live1288_service__srv__Live1288Service_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
