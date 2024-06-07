#pragma once
#include <cstddef>
#include <cstdlib>
#include <iostream>

/**
 * @brief function template iter that takes 3 parameters and returns nothing
 * 
 * @tparam T 
 * @param addr of an array
 * @param length of the array
 * @param func to call on each element
 */
template <typename T, typename F>
void iter(T* addr, std::size_t length, F func) {
	for (std::size_t i = 0; i < length; i++) {
		func(addr[i]);
	}
}