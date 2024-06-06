#include "iter.hpp"
#include <iostream>

#define ARR_INT_LENGTH 5
#define ARR_STR_LENGTH 10

int main(void) {
	int arrInt[ARR_INT_LENGTH] = {1, 2, 3, 4, 5};
	iter(arrInt, ARR_INT_LENGTH, print);

	const std::string arrStr[ARR_STR_LENGTH]
		= {"Hello", ", how", " are ", "you", " doing?"};
	iter(arrStr, ARR_STR_LENGTH, print);
}
