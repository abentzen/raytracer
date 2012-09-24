#include "Vector.hpp"
#include "pigeon_test.hpp"
#include <iostream>

TEST_SETUP();

int main(int argc, char *argv[]) {
	Vector vec(0,0,0);
	std::cout << "Hello test" << std::endl;

	ASSERT(vec.x, 0, "x is not 0.");

	REPORT();
	return ERROR_COUNT;
}