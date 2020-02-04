cmake_minimum_required(VERSION 3.0)
project(vscode-test)

add_executable(test_app src/main.cpp)

target_include_directories(test_app PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/inc/config
)

target_compile_options(test_app PRIVATE
    -Wall -Wextra -Wpedantic -Werror -include project.h
)
