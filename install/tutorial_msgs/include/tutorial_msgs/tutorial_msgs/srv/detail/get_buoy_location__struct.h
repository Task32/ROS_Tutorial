// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_msgs:srv/GetBuoyLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tutorial_msgs/srv/get_buoy_location.h"


#ifndef TUTORIAL_MSGS__SRV__DETAIL__GET_BUOY_LOCATION__STRUCT_H_
#define TUTORIAL_MSGS__SRV__DETAIL__GET_BUOY_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'buoy_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetBuoyLocation in the package tutorial_msgs.
typedef struct tutorial_msgs__srv__GetBuoyLocation_Request
{
  rosidl_runtime_c__String buoy_name;
} tutorial_msgs__srv__GetBuoyLocation_Request;

// Struct for a sequence of tutorial_msgs__srv__GetBuoyLocation_Request.
typedef struct tutorial_msgs__srv__GetBuoyLocation_Request__Sequence
{
  tutorial_msgs__srv__GetBuoyLocation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_msgs__srv__GetBuoyLocation_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GetBuoyLocation in the package tutorial_msgs.
typedef struct tutorial_msgs__srv__GetBuoyLocation_Response
{
  float x_pos;
  float y_pos;
  bool found;
} tutorial_msgs__srv__GetBuoyLocation_Response;

// Struct for a sequence of tutorial_msgs__srv__GetBuoyLocation_Response.
typedef struct tutorial_msgs__srv__GetBuoyLocation_Response__Sequence
{
  tutorial_msgs__srv__GetBuoyLocation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_msgs__srv__GetBuoyLocation_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tutorial_msgs__srv__GetBuoyLocation_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tutorial_msgs__srv__GetBuoyLocation_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetBuoyLocation in the package tutorial_msgs.
typedef struct tutorial_msgs__srv__GetBuoyLocation_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tutorial_msgs__srv__GetBuoyLocation_Request__Sequence request;
  tutorial_msgs__srv__GetBuoyLocation_Response__Sequence response;
} tutorial_msgs__srv__GetBuoyLocation_Event;

// Struct for a sequence of tutorial_msgs__srv__GetBuoyLocation_Event.
typedef struct tutorial_msgs__srv__GetBuoyLocation_Event__Sequence
{
  tutorial_msgs__srv__GetBuoyLocation_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_msgs__srv__GetBuoyLocation_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_MSGS__SRV__DETAIL__GET_BUOY_LOCATION__STRUCT_H_
