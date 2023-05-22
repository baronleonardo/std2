add_library(${CMAKE_PROJECT_NAME} ${build_type}
    vector.cpp
    string.cpp
)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)