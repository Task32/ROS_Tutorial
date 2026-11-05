// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tutorial_msgs:srv/GetBuoyLocation.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tutorial_msgs/srv/detail/get_buoy_location__struct.h"
#include "tutorial_msgs/srv/detail/get_buoy_location__type_support.h"
#include "tutorial_msgs/srv/detail/get_buoy_location__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tutorial_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetBuoyLocation_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetBuoyLocation_Request_type_support_ids_t;

static const _GetBuoyLocation_Request_type_support_ids_t _GetBuoyLocation_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetBuoyLocation_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetBuoyLocation_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetBuoyLocation_Request_type_support_symbol_names_t _GetBuoyLocation_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_msgs, srv, GetBuoyLocation_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_msgs, srv, GetBuoyLocation_Request)),
  }
};

typedef struct _GetBuoyLocation_Request_type_support_data_t
{
  void * data[2];
} _GetBuoyLocation_Request_type_support_data_t;

static _GetBuoyLocation_Request_type_support_data_t _GetBuoyLocation_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetBuoyLocation_Request_message_typesupport_map = {
  2,
  "tutorial_msgs",
  &_GetBuoyLocation_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetBuoyLocation_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetBuoyLocation_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetBuoyLocation_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetBuoyLocation_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tutorial_msgs__srv__GetBuoyLocation_Request__get_type_hash,
  &tutorial_msgs__srv__GetBuoyLocation_Request__get_type_description,
  &tutorial_msgs__srv__GetBuoyLocation_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tutorial_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_msgs, srv, GetBuoyLocation_Request)() {
  return &::tutorial_msgs::srv::rosidl_typesupport_c::GetBuoyLocation_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_msgs/srv/detail/get_buoy_location__struct.h"
// already included above
// #include "tutorial_msgs/srv/detail/get_buoy_location__type_support.h"
// already included above
// #include "tutorial_msgs/srv/detail/get_buoy_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetBuoyLocation_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetBuoyLocation_Response_type_support_ids_t;

static const _GetBuoyLocation_Response_type_support_ids_t _GetBuoyLocation_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetBuoyLocation_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetBuoyLocation_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetBuoyLocation_Response_type_support_symbol_names_t _GetBuoyLocation_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_msgs, srv, GetBuoyLocation_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_msgs, srv, GetBuoyLocation_Response)),
  }
};

typedef struct _GetBuoyLocation_Response_type_support_data_t
{
  void * data[2];
} _GetBuoyLocation_Response_type_support_data_t;

static _GetBuoyLocation_Response_type_support_data_t _GetBuoyLocation_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetBuoyLocation_Response_message_typesupport_map = {
  2,
  "tutorial_msgs",
  &_GetBuoyLocation_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetBuoyLocation_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetBuoyLocation_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetBuoyLocation_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetBuoyLocation_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tutorial_msgs__srv__GetBuoyLocation_Response__get_type_hash,
  &tutorial_msgs__srv__GetBuoyLocation_Response__get_type_description,
  &tutorial_msgs__srv__GetBuoyLocation_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tutorial_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_msgs, srv, GetBuoyLocation_Response)() {
  return &::tutorial_msgs::srv::rosidl_typesupport_c::GetBuoyLocation_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_msgs/srv/detail/get_buoy_location__struct.h"
// already included above
// #include "tutorial_msgs/srv/detail/get_buoy_location__type_support.h"
// already included above
// #include "tutorial_msgs/srv/detail/get_buoy_location__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetBuoyLocation_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetBuoyLocation_Event_type_support_ids_t;

static const _GetBuoyLocation_Event_type_support_ids_t _GetBuoyLocation_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetBuoyLocation_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetBuoyLocation_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetBuoyLocation_Event_type_support_symbol_names_t _GetBuoyLocation_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_msgs, srv, GetBuoyLocation_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_msgs, srv, GetBuoyLocation_Event)),
  }
};

typedef struct _GetBuoyLocation_Event_type_support_data_t
{
  void * data[2];
} _GetBuoyLocation_Event_type_support_data_t;

static _GetBuoyLocation_Event_type_support_data_t _GetBuoyLocation_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetBuoyLocation_Event_message_typesupport_map = {
  2,
  "tutorial_msgs",
  &_GetBuoyLocation_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetBuoyLocation_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetBuoyLocation_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetBuoyLocation_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetBuoyLocation_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tutorial_msgs__srv__GetBuoyLocation_Event__get_type_hash,
  &tutorial_msgs__srv__GetBuoyLocation_Event__get_type_description,
  &tutorial_msgs__srv__GetBuoyLocation_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tutorial_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_msgs, srv, GetBuoyLocation_Event)() {
  return &::tutorial_msgs::srv::rosidl_typesupport_c::GetBuoyLocation_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tutorial_msgs/srv/detail/get_buoy_location__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace tutorial_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetBuoyLocation_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetBuoyLocation_type_support_ids_t;

static const _GetBuoyLocation_type_support_ids_t _GetBuoyLocation_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetBuoyLocation_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetBuoyLocation_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetBuoyLocation_type_support_symbol_names_t _GetBuoyLocation_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_msgs, srv, GetBuoyLocation)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_msgs, srv, GetBuoyLocation)),
  }
};

typedef struct _GetBuoyLocation_type_support_data_t
{
  void * data[2];
} _GetBuoyLocation_type_support_data_t;

static _GetBuoyLocation_type_support_data_t _GetBuoyLocation_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetBuoyLocation_service_typesupport_map = {
  2,
  "tutorial_msgs",
  &_GetBuoyLocation_service_typesupport_ids.typesupport_identifier[0],
  &_GetBuoyLocation_service_typesupport_symbol_names.symbol_name[0],
  &_GetBuoyLocation_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetBuoyLocation_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetBuoyLocation_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetBuoyLocation_Request_message_type_support_handle,
  &GetBuoyLocation_Response_message_type_support_handle,
  &GetBuoyLocation_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tutorial_msgs,
    srv,
    GetBuoyLocation
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tutorial_msgs,
    srv,
    GetBuoyLocation
  ),
  &tutorial_msgs__srv__GetBuoyLocation__get_type_hash,
  &tutorial_msgs__srv__GetBuoyLocation__get_type_description,
  &tutorial_msgs__srv__GetBuoyLocation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tutorial_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_msgs, srv, GetBuoyLocation)() {
  return &::tutorial_msgs::srv::rosidl_typesupport_c::GetBuoyLocation_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
