# Functions for easy setup of tests using the PigeonTest framework.
# This module only sets up a default path and helps in adding the tests to CMake, it does in no way help write them.

# Assume that the framework headers are in the root of the project
set(PIGEON_TEST_PATH ${CMAKE_SOURCE_DIR} CACHE PATH "Path to the PigeonTest framework headers.")

# Adds a test named test_name with all arguments after that as files to be compiled.
# All tests must run with no CLI arguments.
function(add_pigeon_test test_name)
source_group("Header Files" "${PIGEON_TEST_PATH}/pigeon_test.hpp")
add_executable(${test_name} "${PIGEON_TEST_PATH}/pigeon_test.hpp" ${ARGN})
add_test(${test_name} ${test_name})

endfunction(add_pigeon_test)