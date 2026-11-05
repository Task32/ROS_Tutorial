# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target tutorial_msgs::tutorial_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${tutorial_msgs_TARGETS}.
if(tutorial_msgs_TARGETS AND NOT TARGET tutorial_msgs::tutorial_msgs)
  add_library(tutorial_msgs::tutorial_msgs INTERFACE IMPORTED)
  set_target_properties(tutorial_msgs::tutorial_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${tutorial_msgs_TARGETS}")
endif()
