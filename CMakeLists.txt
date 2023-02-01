cmake_minimum_required(VERSION 3.24)
project(example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)

add_executable(example main.cpp)
target_link_libraries(example PRIVATE mylib)