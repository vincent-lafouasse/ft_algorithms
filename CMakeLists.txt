cmake_minimum_required(VERSION 3.18)

project(t_vector LANGUAGES C)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-Wall -Wextra -Wpedantic)
add_compile_options(-g3)

add_library(algorithms
	src/sort.c
)
target_include_directories(algorithms PUBLIC ./include)

add_library(unity_test_runner test/test-framework/unity.c)
target_compile_options(unity_test_runner PRIVATE -DUNITY_SUPPORT_64 -DUNITY_OUTPUT_COLOR)
target_include_directories(unity_test_runner PUBLIC test/test-framework)

add_executable(test 
	test/src/main.c
	test/src/is_sorted.c
)
target_include_directories(test PUBLIC ./include)
target_include_directories(test PUBLIC test/test-framework)
target_link_libraries(test algorithms)
target_link_libraries(test unity_test_runner)

# run tests on all builds
add_custom_target(run_tests ALL DEPENDS test COMMAND test)
