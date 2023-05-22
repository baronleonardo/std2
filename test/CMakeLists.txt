set(target test)

add_executable(${target}
    main.cpp
)

target_link_libraries(${target} ${CMAKE_PROJECT_NAME})