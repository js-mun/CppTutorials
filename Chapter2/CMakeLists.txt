cmake_minimum_required(VERSION 3.10)
project(MyApp)

set(CMAKE_CXX_STANDARD 17)
add_executable(myapp src/main.cpp)

# Include Debugging info (-g)
set(CMAKE_BUILD_TYPE Debug)


# run 타겟 정의 (빌드 후 실행)
add_custom_target(run
    COMMAND myapp
    DEPENDS myapp
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
