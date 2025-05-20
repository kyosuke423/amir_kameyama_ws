# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_amir_operation_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED amir_operation_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(amir_operation_FOUND FALSE)
  elseif(NOT amir_operation_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(amir_operation_FOUND FALSE)
  endif()
  return()
endif()
set(_amir_operation_CONFIG_INCLUDED TRUE)

# output package information
if(NOT amir_operation_FIND_QUIETLY)
  message(STATUS "Found amir_operation: 0.0.0 (${amir_operation_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'amir_operation' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${amir_operation_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(amir_operation_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${amir_operation_DIR}/${_extra}")
endforeach()
