#pragma once
#include <iostream>

#define TEST_SETUP() static int errors;\
	static int test_no = 0;

#define REPORT() std::cout << "Number of failed tests: " << errors << std::endl;

#define ERROR_COUNT errors

#define ASSERT(value, expected, error) if((expected) != (value)) {\
	errors++;\
	std::cout << "Failed test number " << test_no << ": " << (error) << std::endl;\
	}\
	test_no++;
