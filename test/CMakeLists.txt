set(CMAKE_CXX_STANDARD 17)

# fetch gtest
# targets: `libgtest` `libgmock` (static libraries)
include(${CMAKE_SOURCE_DIR}/test/fetch_gtest.cmake)

include_directories(.)

add_executable(test_runner
	${PROJECT_SOURCE_DIR}/test/src/sort.cpp
	${PROJECT_SOURCE_DIR}/test/src/all_any_none.cpp
	${PROJECT_SOURCE_DIR}/test/src/main.cpp
)
set_target_properties(test_runner PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(test_runner
    algorithms
    libgtest
)

