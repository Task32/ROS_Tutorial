#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to tutorial_msgs__srv__GetBuoyLocation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBuoyLocation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub buoy_name: std::string::String,

}



impl Default for GetBuoyLocation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBuoyLocation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetBuoyLocation_Request {
  type RmwMsg = super::srv::rmw::GetBuoyLocation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        buoy_name: msg.buoy_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        buoy_name: msg.buoy_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      buoy_name: msg.buoy_name.to_string(),
    }
  }
}


// Corresponds to tutorial_msgs__srv__GetBuoyLocation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBuoyLocation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x_pos: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_pos: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub found: bool,

}



impl Default for GetBuoyLocation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBuoyLocation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetBuoyLocation_Response {
  type RmwMsg = super::srv::rmw::GetBuoyLocation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x_pos: msg.x_pos,
        y_pos: msg.y_pos,
        found: msg.found,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x_pos: msg.x_pos,
      y_pos: msg.y_pos,
      found: msg.found,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x_pos: msg.x_pos,
      y_pos: msg.y_pos,
      found: msg.found,
    }
  }
}






#[link(name = "tutorial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__tutorial_msgs__srv__GetBuoyLocation() -> *const std::ffi::c_void;
}

// Corresponds to tutorial_msgs__srv__GetBuoyLocation
#[allow(missing_docs, non_camel_case_types)]
pub struct GetBuoyLocation;

impl rosidl_runtime_rs::Service for GetBuoyLocation {
    type Request = GetBuoyLocation_Request;
    type Response = GetBuoyLocation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__tutorial_msgs__srv__GetBuoyLocation() }
    }
}


