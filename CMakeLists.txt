cmake_minimum_required(VERSION 3.0)

project(CppTutorial C CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)

add_library(test1 SHARED test.cpp share.cpp)

add_library(test2 SHARED test2.cpp share.cpp)

target_link_libraries(main test1 test2)

add_executable(test3 test3.c)
target_link_libraries(test3 test1)
