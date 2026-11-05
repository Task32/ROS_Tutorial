// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_msgs:srv/GetBuoyLocation.idl
// generated code does not contain a copyright notice
#include "tutorial_msgs/srv/detail/get_buoy_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `buoy_name`
#include "rosidl_runtime_c/string_functions.h"

bool
tutorial_msgs__srv__GetBuoyLocation_Request__init(tutorial_msgs__srv__GetBuoyLocation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // buoy_name
  if (!rosidl_runtime_c__String__init(&msg->buoy_name)) {
    tutorial_msgs__srv__GetBuoyLocation_Request__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_msgs__srv__GetBuoyLocation_Request__fini(tutorial_msgs__srv__GetBuoyLocation_Request * msg)
{
  if (!msg) {
    return;
  }
  // buoy_name
  rosidl_runtime_c__String__fini(&msg->buoy_name);
}

bool
tutorial_msgs__srv__GetBuoyLocation_Request__are_equal(const tutorial_msgs__srv__GetBuoyLocation_Request * lhs, const tutorial_msgs__srv__GetBuoyLocation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // buoy_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->buoy_name), &(rhs->buoy_name)))
  {
    return false;
  }
  return true;
}

bool
tutorial_msgs__srv__GetBuoyLocation_Request__copy(
  const tutorial_msgs__srv__GetBuoyLocation_Request * input,
  tutorial_msgs__srv__GetBuoyLocation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // buoy_name
  if (!rosidl_runtime_c__String__copy(
      &(input->buoy_name), &(output->buoy_name)))
  {
    return false;
  }
  return true;
}

tutorial_msgs__srv__GetBuoyLocation_Request *
tutorial_msgs__srv__GetBuoyLocation_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_msgs__srv__GetBuoyLocation_Request * msg = (tutorial_msgs__srv__GetBuoyLocation_Request *)allocator.allocate(sizeof(tutorial_msgs__srv__GetBuoyLocation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_msgs__srv__GetBuoyLocation_Request));
  bool success = tutorial_msgs__srv__GetBuoyLocation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_msgs__srv__GetBuoyLocation_Request__destroy(tutorial_msgs__srv__GetBuoyLocation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_msgs__srv__GetBuoyLocation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__init(tutorial_msgs__srv__GetBuoyLocation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_msgs__srv__GetBuoyLocation_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(tutorial_msgs__srv__GetBuoyLocation_Request)) {
      return false;
    }
    data = (tutorial_msgs__srv__GetBuoyLocation_Request *)allocator.zero_allocate(size, sizeof(tutorial_msgs__srv__GetBuoyLocation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_msgs__srv__GetBuoyLocation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_msgs__srv__GetBuoyLocation_Request__fini(&data[i - 1]);
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
tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__fini(tutorial_msgs__srv__GetBuoyLocation_Request__Sequence * array)
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
      tutorial_msgs__srv__GetBuoyLocation_Request__fini(&array->data[i]);
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

tutorial_msgs__srv__GetBuoyLocation_Request__Sequence *
tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_msgs__srv__GetBuoyLocation_Request__Sequence * array = (tutorial_msgs__srv__GetBuoyLocation_Request__Sequence *)allocator.allocate(sizeof(tutorial_msgs__srv__GetBuoyLocation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__destroy(tutorial_msgs__srv__GetBuoyLocation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__are_equal(const tutorial_msgs__srv__GetBuoyLocation_Request__Sequence * lhs, const tutorial_msgs__srv__GetBuoyLocation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_msgs__srv__GetBuoyLocation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__copy(
  const tutorial_msgs__srv__GetBuoyLocation_Request__Sequence * input,
  tutorial_msgs__srv__GetBuoyLocation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(tutorial_msgs__srv__GetBuoyLocation_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(tutorial_msgs__srv__GetBuoyLocation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_msgs__srv__GetBuoyLocation_Request * data =
      (tutorial_msgs__srv__GetBuoyLocation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_msgs__srv__GetBuoyLocation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_msgs__srv__GetBuoyLocation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_msgs__srv__GetBuoyLocation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tutorial_msgs__srv__GetBuoyLocation_Response__init(tutorial_msgs__srv__GetBuoyLocation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x_pos
  // y_pos
  // found
  return true;
}

void
tutorial_msgs__srv__GetBuoyLocation_Response__fini(tutorial_msgs__srv__GetBuoyLocation_Response * msg)
{
  if (!msg) {
    return;
  }
  // x_pos
  // y_pos
  // found
}

bool
tutorial_msgs__srv__GetBuoyLocation_Response__are_equal(const tutorial_msgs__srv__GetBuoyLocation_Response * lhs, const tutorial_msgs__srv__GetBuoyLocation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_pos
  if (lhs->x_pos != rhs->x_pos) {
    return false;
  }
  // y_pos
  if (lhs->y_pos != rhs->y_pos) {
    return false;
  }
  // found
  if (lhs->found != rhs->found) {
    return false;
  }
  return true;
}

bool
tutorial_msgs__srv__GetBuoyLocation_Response__copy(
  const tutorial_msgs__srv__GetBuoyLocation_Response * input,
  tutorial_msgs__srv__GetBuoyLocation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x_pos
  output->x_pos = input->x_pos;
  // y_pos
  output->y_pos = input->y_pos;
  // found
  output->found = input->found;
  return true;
}

tutorial_msgs__srv__GetBuoyLocation_Response *
tutorial_msgs__srv__GetBuoyLocation_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_msgs__srv__GetBuoyLocation_Response * msg = (tutorial_msgs__srv__GetBuoyLocation_Response *)allocator.allocate(sizeof(tutorial_msgs__srv__GetBuoyLocation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_msgs__srv__GetBuoyLocation_Response));
  bool success = tutorial_msgs__srv__GetBuoyLocation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_msgs__srv__GetBuoyLocation_Response__destroy(tutorial_msgs__srv__GetBuoyLocation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_msgs__srv__GetBuoyLocation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__init(tutorial_msgs__srv__GetBuoyLocation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_msgs__srv__GetBuoyLocation_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(tutorial_msgs__srv__GetBuoyLocation_Response)) {
      return false;
    }
    data = (tutorial_msgs__srv__GetBuoyLocation_Response *)allocator.zero_allocate(size, sizeof(tutorial_msgs__srv__GetBuoyLocation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_msgs__srv__GetBuoyLocation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_msgs__srv__GetBuoyLocation_Response__fini(&data[i - 1]);
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
tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__fini(tutorial_msgs__srv__GetBuoyLocation_Response__Sequence * array)
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
      tutorial_msgs__srv__GetBuoyLocation_Response__fini(&array->data[i]);
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

tutorial_msgs__srv__GetBuoyLocation_Response__Sequence *
tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_msgs__srv__GetBuoyLocation_Response__Sequence * array = (tutorial_msgs__srv__GetBuoyLocation_Response__Sequence *)allocator.allocate(sizeof(tutorial_msgs__srv__GetBuoyLocation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__destroy(tutorial_msgs__srv__GetBuoyLocation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__are_equal(const tutorial_msgs__srv__GetBuoyLocation_Response__Sequence * lhs, const tutorial_msgs__srv__GetBuoyLocation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_msgs__srv__GetBuoyLocation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__copy(
  const tutorial_msgs__srv__GetBuoyLocation_Response__Sequence * input,
  tutorial_msgs__srv__GetBuoyLocation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(tutorial_msgs__srv__GetBuoyLocation_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(tutorial_msgs__srv__GetBuoyLocation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_msgs__srv__GetBuoyLocation_Response * data =
      (tutorial_msgs__srv__GetBuoyLocation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_msgs__srv__GetBuoyLocation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_msgs__srv__GetBuoyLocation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_msgs__srv__GetBuoyLocation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "tutorial_msgs/srv/detail/get_buoy_location__functions.h"

bool
tutorial_msgs__srv__GetBuoyLocation_Event__init(tutorial_msgs__srv__GetBuoyLocation_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    tutorial_msgs__srv__GetBuoyLocation_Event__fini(msg);
    return false;
  }
  // request
  if (!tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__init(&msg->request, 0)) {
    tutorial_msgs__srv__GetBuoyLocation_Event__fini(msg);
    return false;
  }
  // response
  if (!tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__init(&msg->response, 0)) {
    tutorial_msgs__srv__GetBuoyLocation_Event__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_msgs__srv__GetBuoyLocation_Event__fini(tutorial_msgs__srv__GetBuoyLocation_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__fini(&msg->request);
  // response
  tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__fini(&msg->response);
}

bool
tutorial_msgs__srv__GetBuoyLocation_Event__are_equal(const tutorial_msgs__srv__GetBuoyLocation_Event * lhs, const tutorial_msgs__srv__GetBuoyLocation_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
tutorial_msgs__srv__GetBuoyLocation_Event__copy(
  const tutorial_msgs__srv__GetBuoyLocation_Event * input,
  tutorial_msgs__srv__GetBuoyLocation_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

tutorial_msgs__srv__GetBuoyLocation_Event *
tutorial_msgs__srv__GetBuoyLocation_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_msgs__srv__GetBuoyLocation_Event * msg = (tutorial_msgs__srv__GetBuoyLocation_Event *)allocator.allocate(sizeof(tutorial_msgs__srv__GetBuoyLocation_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_msgs__srv__GetBuoyLocation_Event));
  bool success = tutorial_msgs__srv__GetBuoyLocation_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_msgs__srv__GetBuoyLocation_Event__destroy(tutorial_msgs__srv__GetBuoyLocation_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_msgs__srv__GetBuoyLocation_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_msgs__srv__GetBuoyLocation_Event__Sequence__init(tutorial_msgs__srv__GetBuoyLocation_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_msgs__srv__GetBuoyLocation_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(tutorial_msgs__srv__GetBuoyLocation_Event)) {
      return false;
    }
    data = (tutorial_msgs__srv__GetBuoyLocation_Event *)allocator.zero_allocate(size, sizeof(tutorial_msgs__srv__GetBuoyLocation_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_msgs__srv__GetBuoyLocation_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_msgs__srv__GetBuoyLocation_Event__fini(&data[i - 1]);
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
tutorial_msgs__srv__GetBuoyLocation_Event__Sequence__fini(tutorial_msgs__srv__GetBuoyLocation_Event__Sequence * array)
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
      tutorial_msgs__srv__GetBuoyLocation_Event__fini(&array->data[i]);
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

tutorial_msgs__srv__GetBuoyLocation_Event__Sequence *
tutorial_msgs__srv__GetBuoyLocation_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_msgs__srv__GetBuoyLocation_Event__Sequence * array = (tutorial_msgs__srv__GetBuoyLocation_Event__Sequence *)allocator.allocate(sizeof(tutorial_msgs__srv__GetBuoyLocation_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_msgs__srv__GetBuoyLocation_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_msgs__srv__GetBuoyLocation_Event__Sequence__destroy(tutorial_msgs__srv__GetBuoyLocation_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_msgs__srv__GetBuoyLocation_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_msgs__srv__GetBuoyLocation_Event__Sequence__are_equal(const tutorial_msgs__srv__GetBuoyLocation_Event__Sequence * lhs, const tutorial_msgs__srv__GetBuoyLocation_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_msgs__srv__GetBuoyLocation_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_msgs__srv__GetBuoyLocation_Event__Sequence__copy(
  const tutorial_msgs__srv__GetBuoyLocation_Event__Sequence * input,
  tutorial_msgs__srv__GetBuoyLocation_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(tutorial_msgs__srv__GetBuoyLocation_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(tutorial_msgs__srv__GetBuoyLocation_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_msgs__srv__GetBuoyLocation_Event * data =
      (tutorial_msgs__srv__GetBuoyLocation_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_msgs__srv__GetBuoyLocation_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_msgs__srv__GetBuoyLocation_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_msgs__srv__GetBuoyLocation_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
