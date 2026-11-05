#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "tutorial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tutorial_msgs__srv__GetBuoyLocation_Request() -> *const std::ffi::c_void;
}

#[link(name = "tutorial_msgs__rosidl_generator_c")]
extern "C" {
    fn tutorial_msgs__srv__GetBuoyLocation_Request__init(msg: *mut GetBuoyLocation_Request) -> bool;
    fn tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBuoyLocation_Request>, size: usize) -> bool;
    fn tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBuoyLocation_Request>);
    fn tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBuoyLocation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBuoyLocation_Request>) -> bool;
}

// Corresponds to tutorial_msgs__srv__GetBuoyLocation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBuoyLocation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub buoy_name: rosidl_runtime_rs::String,

}



impl Default for GetBuoyLocation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tutorial_msgs__srv__GetBuoyLocation_Request__init(&mut msg as *mut _) {
        panic!("Call to tutorial_msgs__srv__GetBuoyLocation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBuoyLocation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tutorial_msgs__srv__GetBuoyLocation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBuoyLocation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBuoyLocation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "tutorial_msgs/srv/GetBuoyLocation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tutorial_msgs__srv__GetBuoyLocation_Request() }
  }
}


#[link(name = "tutorial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tutorial_msgs__srv__GetBuoyLocation_Response() -> *const std::ffi::c_void;
}

#[link(name = "tutorial_msgs__rosidl_generator_c")]
extern "C" {
    fn tutorial_msgs__srv__GetBuoyLocation_Response__init(msg: *mut GetBuoyLocation_Response) -> bool;
    fn tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBuoyLocation_Response>, size: usize) -> bool;
    fn tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBuoyLocation_Response>);
    fn tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBuoyLocation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBuoyLocation_Response>) -> bool;
}

// Corresponds to tutorial_msgs__srv__GetBuoyLocation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tutorial_msgs__srv__GetBuoyLocation_Response__init(&mut msg as *mut _) {
        panic!("Call to tutorial_msgs__srv__GetBuoyLocation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBuoyLocation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tutorial_msgs__srv__GetBuoyLocation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBuoyLocation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBuoyLocation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "tutorial_msgs/srv/GetBuoyLocation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tutorial_msgs__srv__GetBuoyLocation_Response() }
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


