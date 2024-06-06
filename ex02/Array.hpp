#pragma once
#include <iostream>
#include <string>

template <typename T> class Array {

public:
	Array();
	Array(unsigned int n);
	Array(Array const& src);
	~Array();

	Array& operator=(Array const& rhs);
	Array& operator[](Array const& rhs);
	T      type;

	std::size_t size();

private:
};
