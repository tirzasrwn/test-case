cmake_minimum_required(VERSION 3.10)

project(qt-case
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Cmake config in qt
# /usr/lib/x86_64-linux-gnu/cmake
set(Qt5Core_DIR /usr/lib/x86_64-linux-gnu/cmake/Qt5Core/)

find_package(Qt5Core REQUIRED)

add_executable(qt-case
    qt-case.cpp
)

# Build for 32 bit.
# set_target_properties(qt-case PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")

target_link_libraries(qt-case
    Qt5::Core
)
