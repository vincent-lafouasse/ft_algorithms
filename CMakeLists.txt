cmake_minimum_required(VERSION 3.18)

project(ft_algorithms LANGUAGES C CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-Wall -Wextra -Wpedantic)
add_compile_options(-g3)

add_library(algorithms
	src/sort.c
)
target_include_directories(algorithms PUBLIC ./include)

# defines the target `test_runner`
add_subdirectory(test)

# run tests on all builds
add_custom_target(run_tests ALL DEPENDS test_runner COMMAND test_runner)
