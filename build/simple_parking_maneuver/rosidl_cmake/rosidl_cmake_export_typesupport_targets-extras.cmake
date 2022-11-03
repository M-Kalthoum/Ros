# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:simple_parking_maneuver__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:simple_parking_maneuver__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:simple_parking_maneuver__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:simple_parking_maneuver__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:simple_parking_maneuver__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:simple_parking_maneuver__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:simple_parking_maneuver__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:simple_parking_maneuver__rosidl_typesupport_cpp;__rosidl_generator_py:simple_parking_maneuver__rosidl_generator_py")

# populate simple_parking_maneuver_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "simple_parking_maneuver::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'simple_parking_maneuver' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND simple_parking_maneuver_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
