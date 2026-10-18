cmake_minimum_required(VERSION 3.16)
project(fastmath CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(stats stats.cpp)

add_executable(test_stats test_stats.cpp)
target_link_libraries(test_stats stats)

enable_testing()
add_test(NAME stats_test COMMAND test_stats)