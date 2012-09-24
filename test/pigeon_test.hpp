#pragma once
#include <iostream>

#define TEST_SETUP() static int errors;

#define REPORT() std::cout << "Number of failed tests: " << errors << std::endl;

#define ERROR_COUNT errors

#define ASSERT(value, expected, error) if((expected) != (value)) {\
	errors++;\
	std::cout << "Test failure: " << (error) << std::endl;\
	}
