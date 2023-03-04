# Copyright IO Industrial, LLC. or its affiliates. All Rights Reserved.
PROJECT(COMMON_TYPES)

cmake_minimum_required (VERSION 3.1)

# 3.12 or higher is strongly suggested; build settings (target_compile_options/etc...) 
if(CMAKE_VERSION VERSION_LESS 3.12)
    message(WARNING "Building with CMake 3.12 or higher is strongly suggested; current version is ${CMAKE_VERSION}")
endif()

get_filename_component(NATIVE_ROOT "${CMAKE_CURRENT_SOURCE_DIR}" ABSOLUTE)
message( "NATIVE_ROOT = ${NATIVE_ROOT}")

# first we can indicate the documentation build as an option and set it to ON by default
option(BUILD_DOC "Build documentation" ON)
# check if Doxygen is installed
find_package(Doxygen)
if (DOXYGEN_FOUND)
    # set input and output files
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/doxygen/Doxyfile)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    # request to configure the file
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    message("Doxygen build started")

    # note the option ALL which allows to build the docs together with the application
    add_custom_target( doc_doxygen ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM )
else (DOXYGEN_FOUND)
  message("Doxygen need to be installed to generate the doxygen documentation")
endif (DOXYGEN_FOUND)

