cmake_minimum_required(VERSION 2.8.9)

project (wintoolscmd)

enable_testing()

include_directories ("${PROJECT_SOURCE_DIR}/src/wintools/")

add_subdirectory(src)
add_subdirectory(test)