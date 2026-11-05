// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_msgs:srv/GetBuoyLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tutorial_msgs/srv/get_buoy_location.hpp"


#ifndef TUTORIAL_MSGS__SRV__DETAIL__GET_BUOY_LOCATION__BUILDER_HPP_
#define TUTORIAL_MSGS__SRV__DETAIL__GET_BUOY_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_msgs/srv/detail/get_buoy_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBuoyLocation_Request_buoy_name
{
public:
  Init_GetBuoyLocation_Request_buoy_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_msgs::srv::GetBuoyLocation_Request buoy_name(::tutorial_msgs::srv::GetBuoyLocation_Request::_buoy_name_type arg)
  {
    msg_.buoy_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_msgs::srv::GetBuoyLocation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_msgs::srv::GetBuoyLocation_Request>()
{
  return tutorial_msgs::srv::builder::Init_GetBuoyLocation_Request_buoy_name();
}

}  // namespace tutorial_msgs


namespace tutorial_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBuoyLocation_Response_found
{
public:
  explicit Init_GetBuoyLocation_Response_found(::tutorial_msgs::srv::GetBuoyLocation_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_msgs::srv::GetBuoyLocation_Response found(::tutorial_msgs::srv::GetBuoyLocation_Response::_found_type arg)
  {
    msg_.found = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_msgs::srv::GetBuoyLocation_Response msg_;
};

class Init_GetBuoyLocation_Response_y_pos
{
public:
  explicit Init_GetBuoyLocation_Response_y_pos(::tutorial_msgs::srv::GetBuoyLocation_Response & msg)
  : msg_(msg)
  {}
  Init_GetBuoyLocation_Response_found y_pos(::tutorial_msgs::srv::GetBuoyLocation_Response::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return Init_GetBuoyLocation_Response_found(msg_);
  }

private:
  ::tutorial_msgs::srv::GetBuoyLocation_Response msg_;
};

class Init_GetBuoyLocation_Response_x_pos
{
public:
  Init_GetBuoyLocation_Response_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBuoyLocation_Response_y_pos x_pos(::tutorial_msgs::srv::GetBuoyLocation_Response::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_GetBuoyLocation_Response_y_pos(msg_);
  }

private:
  ::tutorial_msgs::srv::GetBuoyLocation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_msgs::srv::GetBuoyLocation_Response>()
{
  return tutorial_msgs::srv::builder::Init_GetBuoyLocation_Response_x_pos();
}

}  // namespace tutorial_msgs


namespace tutorial_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBuoyLocation_Event_response
{
public:
  explicit Init_GetBuoyLocation_Event_response(::tutorial_msgs::srv::GetBuoyLocation_Event & msg)
  : msg_(msg)
  {}
  ::tutorial_msgs::srv::GetBuoyLocation_Event response(::tutorial_msgs::srv::GetBuoyLocation_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_msgs::srv::GetBuoyLocation_Event msg_;
};

class Init_GetBuoyLocation_Event_request
{
public:
  explicit Init_GetBuoyLocation_Event_request(::tutorial_msgs::srv::GetBuoyLocation_Event & msg)
  : msg_(msg)
  {}
  Init_GetBuoyLocation_Event_response request(::tutorial_msgs::srv::GetBuoyLocation_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetBuoyLocation_Event_response(msg_);
  }

private:
  ::tutorial_msgs::srv::GetBuoyLocation_Event msg_;
};

class Init_GetBuoyLocation_Event_info
{
public:
  Init_GetBuoyLocation_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBuoyLocation_Event_request info(::tutorial_msgs::srv::GetBuoyLocation_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetBuoyLocation_Event_request(msg_);
  }

private:
  ::tutorial_msgs::srv::GetBuoyLocation_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_msgs::srv::GetBuoyLocation_Event>()
{
  return tutorial_msgs::srv::builder::Init_GetBuoyLocation_Event_info();
}

}  // namespace tutorial_msgs

#endif  // TUTORIAL_MSGS__SRV__DETAIL__GET_BUOY_LOCATION__BUILDER_HPP_
