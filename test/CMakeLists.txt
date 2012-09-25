include_directories("../src")

include(pigeon_test)
set(PIGEON_TEST_PATH "${CMAKE_SOURCE_DIR}/test")

set(UTILS ../src/Vector.cpp ../src/Ray.cpp)

pigeon_test_setup(${UTILS})

add_pigeon_test(vector_test vector.cpp)
add_pigeon_test(sphere_test sphere.cpp ../src/objects/Sphere.cpp)