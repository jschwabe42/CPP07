#include "Array.hpp"
#include <cstdlib>
#include <iostream>

#define ARR_INT_LENGTH 5
#define ARR_STR_LENGTH 10

int main(void) {
	Array<int> arr_int(ARR_INT_LENGTH);

	std::cout << "Array of int: " << arr_int.size() << std::endl;

	for (unsigned int i = 0; i < ARR_INT_LENGTH; i++) {
		arr_int[i] = std::rand();
		std::cout << arr_int[i] << std::endl;
	}

	Array<std::string> arr_str(ARR_STR_LENGTH);

	arr_str[0] = "Hello";
	arr_str[1] = "World";
	arr_str[2] = "!";

	std::cout << "Array of string: " << arr_str.size()
			  << std::endl;
	for (unsigned int i = 0; i < ARR_STR_LENGTH; i++) {
		std::cout << arr_str[i] << std::endl;
	}
}
