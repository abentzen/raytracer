include_directories("../src")

add_executable(vector_test vector.cpp ../src/Vector.cpp)

add_test(Vector vector_test)