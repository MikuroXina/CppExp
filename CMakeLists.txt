cmake_minimum_required(VERSION 2.8)
cmake_policy(SET CMP0015 NEW)
project(CppExp)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c++17 -O0 -g")
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    )
add_executable(exp main.cpp)
set_target_properties(exp PROPERTIES
    CXX_STANDARD 17
    CXX_EXTENSIONS OFF
    )
add_executable(exp.test exp.test.cpp)
target_link_libraries(exp.test
    pthread
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/libgtest.a
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/libgtest_main.a
    )
set_target_properties(exp.test PROPERTIES
    CXX_STANDARD 17
    CXX_EXTENSIONS OFF
    )
add_custom_command(TARGET exp.test
    POST_BUILD
    COMMAND ./exp.test
    )
