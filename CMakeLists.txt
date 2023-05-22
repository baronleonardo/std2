cmake_minimum_required(VERSION 3.10)
project(std2)

option(test "enable tests" OFF)
set(build_type "SHARED" CACHE STRING "type of build: 'SHARED', 'SHARED'")

add_subdirectory(lib)
if(test)
    add_subdirectory(test)
endif()