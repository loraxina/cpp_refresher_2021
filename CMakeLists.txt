cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(cpp_refresher_2021)

include(cmake_files/configuration.cmake)
include(cmake_files/tests.cmake)
include(cmake_files/library.cmake)
include(cmake_files/executable.cmake)

add_subdirectory(googletest)
