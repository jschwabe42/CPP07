#pragma once
#include <iostream>
#include <string>

template <typename T>

class Array {

public:
	T*          arr;
	std::size_t _size;

	Array()
		: arr(new T), _size(0) {}
	Array(unsigned int n)
		: _size(n) {
		arr = new T[_size];
	}
	Array(Array const& src)
		: arr(src.arr), _size(src._size) {
		*this = src;
	}
	~Array() { delete[] arr; };

	Array& operator=(Array const& rhs) {
		this->arr   = rhs.arr;
		this->_size = rhs._size;
		return *this;
	}
	T& operator[](std::size_t idx) {
		if (idx > _size) {
			throw OutOfBoundsException();
		}
		return arr[idx];
	}

	class OutOfBoundsException : public std::exception {
		const char* what() const throw() {
			return "Index Out of bounds\n";
		}
	};

	std::size_t size() { return _size; }

private:
};
