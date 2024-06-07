#pragma once
#include <iostream>
#include <string>

template <typename T>

class Array {

public:
	Array()
		: _arr(new T), _size(0) {}
	Array(unsigned int n)
		: _size(n) {
		_arr = new T[_size];
	}
	Array(Array const& src)
		: _arr(new T[src._size]), _size(src._size) {
		for (std::size_t i = 0; i < src._size; i++) {
			_arr[i] = src._arr[i];
		}
	}
	~Array() { delete[] _arr; };

	Array& operator=(Array const& rhs) {
		// deep copy with empty check
		if (this != &rhs) {
			delete[] _arr;
			if (rhs._size > 0) {
				_arr = new T[rhs._size];
			}
			for (std::size_t i = 0; i < rhs._size; i++) {
				_arr[i] = rhs._arr[i];
			}
			_size = rhs._size;
		}
		return *this;
	}

	T& operator[](std::size_t idx) {
		if (idx >= _size) {
			throw OutOfBoundsException();
		}
		return _arr[idx];
	}

	std::size_t size() { return _size; }

private:
	class OutOfBoundsException : public std::exception {
		const char* what() const throw() {
			return "Index Out of bounds\n";
		}
	};

	T*          _arr;
	std::size_t _size;
};
