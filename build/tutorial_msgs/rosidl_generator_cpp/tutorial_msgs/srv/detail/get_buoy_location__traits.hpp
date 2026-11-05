// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_msgs:srv/GetBuoyLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tutorial_msgs/srv/get_buoy_location.hpp"


#ifndef TUTORIAL_MSGS__SRV__DETAIL__GET_BUOY_LOCATION__TRAITS_HPP_
#define TUTORIAL_MSGS__SRV__DETAIL__GET_BUOY_LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_msgs/srv/detail/get_buoy_location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tutorial_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBuoyLocation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: buoy_name
  {
    out << "buoy_name: ";
    rosidl_generator_traits::value_to_yaml(msg.buoy_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBuoyLocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: buoy_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buoy_name: ";
    rosidl_generator_traits::value_to_yaml(msg.buoy_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBuoyLocation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_msgs::srv::GetBuoyLocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_msgs::srv::GetBuoyLocation_Request & msg)
{
  return tutorial_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_msgs::srv::GetBuoyLocation_Request>()
{
  return "tutorial_msgs::srv::GetBuoyLocation_Request";
}

template<>
inline const char * name<tutorial_msgs::srv::GetBuoyLocation_Request>()
{
  return "tutorial_msgs/srv/GetBuoyLocation_Request";
}

template<>
struct has_fixed_size<tutorial_msgs::srv::GetBuoyLocation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_msgs::srv::GetBuoyLocation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tutorial_msgs::srv::GetBuoyLocation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tutorial_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBuoyLocation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_pos
  {
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << ", ";
  }

  // member: y_pos
  {
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
    out << ", ";
  }

  // member: found
  {
    out << "found: ";
    rosidl_generator_traits::value_to_yaml(msg.found, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBuoyLocation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << "\n";
  }

  // member: y_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
    out << "\n";
  }

  // member: found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "found: ";
    rosidl_generator_traits::value_to_yaml(msg.found, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBuoyLocation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_msgs::srv::GetBuoyLocation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_msgs::srv::GetBuoyLocation_Response & msg)
{
  return tutorial_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_msgs::srv::GetBuoyLocation_Response>()
{
  return "tutorial_msgs::srv::GetBuoyLocation_Response";
}

template<>
inline const char * name<tutorial_msgs::srv::GetBuoyLocation_Response>()
{
  return "tutorial_msgs/srv/GetBuoyLocation_Response";
}

template<>
struct has_fixed_size<tutorial_msgs::srv::GetBuoyLocation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_msgs::srv::GetBuoyLocation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_msgs::srv::GetBuoyLocation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace tutorial_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBuoyLocation_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBuoyLocation_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBuoyLocation_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_msgs::srv::GetBuoyLocation_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_msgs::srv::GetBuoyLocation_Event & msg)
{
  return tutorial_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_msgs::srv::GetBuoyLocation_Event>()
{
  return "tutorial_msgs::srv::GetBuoyLocation_Event";
}

template<>
inline const char * name<tutorial_msgs::srv::GetBuoyLocation_Event>()
{
  return "tutorial_msgs/srv/GetBuoyLocation_Event";
}

template<>
struct has_fixed_size<tutorial_msgs::srv::GetBuoyLocation_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_msgs::srv::GetBuoyLocation_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<tutorial_msgs::srv::GetBuoyLocation_Request>::value && has_bounded_size<tutorial_msgs::srv::GetBuoyLocation_Response>::value> {};

template<>
struct is_message<tutorial_msgs::srv::GetBuoyLocation_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_msgs::srv::GetBuoyLocation>()
{
  return "tutorial_msgs::srv::GetBuoyLocation";
}

template<>
inline const char * name<tutorial_msgs::srv::GetBuoyLocation>()
{
  return "tutorial_msgs/srv/GetBuoyLocation";
}

template<>
struct has_fixed_size<tutorial_msgs::srv::GetBuoyLocation>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_msgs::srv::GetBuoyLocation_Request>::value &&
    has_fixed_size<tutorial_msgs::srv::GetBuoyLocation_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_msgs::srv::GetBuoyLocation>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_msgs::srv::GetBuoyLocation_Request>::value &&
    has_bounded_size<tutorial_msgs::srv::GetBuoyLocation_Response>::value
  >
{
};

template<>
struct is_service<tutorial_msgs::srv::GetBuoyLocation>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_msgs::srv::GetBuoyLocation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_msgs::srv::GetBuoyLocation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_MSGS__SRV__DETAIL__GET_BUOY_LOCATION__TRAITS_HPP_
