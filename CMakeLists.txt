cmake_minimum_required(VERSION 3.20)
project(rfrange VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
option(RFRANGE_BUILD_TESTS OFF)

add_library(rfrange INTERFACE)
target_include_directories(rfrange INTERFACE
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>)

if (RFRANGE_BUILD_TESTS)
    add_subdirectory(test)
endif()
