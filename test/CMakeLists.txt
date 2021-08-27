cmake_minimum_required(VERSION 3.20)
set(CMAKE_BUILD_TYPE Release)

set_source_files_properties(main.cpp PROPERTIES
        COMPILE_DEFINITIONS DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN)

include_directories(../include)
add_executable(rfrange_test
        main.cpp
        test_iter_range.cpp)
