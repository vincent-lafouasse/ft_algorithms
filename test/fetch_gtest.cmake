# Fetch gtest through git
#
# Targets : `libgtest` `libgmock`


find_package(Threads REQUIRED)

include(ExternalProject)
ExternalProject_Add(
    gtest
	URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
    PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
    INSTALL_COMMAND ""
)

# Get GTest source and binary directories from CMake project
ExternalProject_Get_Property(gtest source_dir binary_dir)

# Create a libgtest target to be used as a dependency by test programs
add_library(libgtest IMPORTED STATIC GLOBAL)
add_dependencies(libgtest gtest)

# Set libgtest properties
set_target_properties(libgtest PROPERTIES
	"IMPORTED_LOCATION" "${binary_dir}/lib/libgtest.a"
	"IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}")

# Create a libgmock target to be used as a dependency by test programs
add_library(libgmock IMPORTED STATIC GLOBAL)
add_dependencies(libgmock gtest)

# Set libgmock properties
set_target_properties(libgmock PROPERTIES
	"IMPORTED_LOCATION" "${binary_dir}/lib/libgmock.a"
	"IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}")

# I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
include_directories("${source_dir}/googletest/include"
                    "${source_dir}/googlemock/include")
