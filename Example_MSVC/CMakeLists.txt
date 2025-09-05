cmake_minimum_required(VERSION 3.22)
project(Example LANGUAGES C CXX)

add_compile_options(/utf-8)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(myapp src/main.cpp)
