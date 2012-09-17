include_directories("../src")

include(pigeon_test)
set(PIGEON_TEST_PATH "${CMAKE_SOURCE_DIR}/test")

add_pigeon_test(vector_test vector.cpp ../src/Vector.cpp)
