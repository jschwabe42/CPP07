#pragma once
#include <cstddef>
#include <cstdlib>
#include <iostream>

template <typename T> void print(const T& value) {
	std::cout << value << std::endl;
}

/**
 * @brief function template iter that takes 3 parameters and returns nothing
 * 
 * @tparam T 
 * @param addr of an array
 * @param length of the array
 * @param func to call on each element
 */
template <typename T>
void iter(T* addr, std::size_t length, void (*func)(const T&)) {
	for (std::size_t i = 0; i < length; i++) {
		func(addr[i]);
	}
}