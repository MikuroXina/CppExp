cmake_minimum_required(VERSION 2.8)
project(CppExp)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c++17 -O0 -g")
include_directories(
    /usr/local/include
    )
add_executable(exp main.cpp)
set_target_properties(exp PROPERTIES
    CXX_STANDARD 17
    CXX_EXTENSIONS OFF
    )
add_executable(exp.test exp.test.cpp)
target_link_libraries(exp.test
    pthread
    /usr/local/lib/libgtest.a
    /usr/local/lib/libgtest_main.a
    )
set_target_properties(exp.test PROPERTIES
    CXX_STANDARD 17
    CXX_EXTENSIONS OFF
    )
add_custom_command(TARGET exp.test
    POST_BUILD
    COMMAND ./exp.test
    )
