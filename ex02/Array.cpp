#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

// Creates an empty array
Array::Array() { new[] int; }

// Creates an array of n elements
Array::Array(unsigned int n) { new[n]; }

Array::Array(const Array& src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Array::~Array() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// modifying either the
// original array or its copy after copying musn’t affect the other array
Array& Array::operator=(Array const& rhs) {
	//if ( this != &rhs )
	//{
	//this->_value = rhs.getValue();
	//}
	(void)rhs;
	return *this;
}

// if idx out of bounds, throw exception
Array& Array::operator[](Array const& rhs) { (void)rhs; }

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */