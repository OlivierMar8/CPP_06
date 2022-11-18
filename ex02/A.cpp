//A.cpp	CPP06	ex02

#include <iostream>
#include "A.hpp"

A::A( void ) {

	std::cout << "Default Constructor called" << std::endl;
	return;
}
/*
A::A( int const n ) : _foo( n ) {

	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

A::A( A const & src ) {

	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

A::~A( void ) {

		std::cout << "Destructor called" << std::endl;
		return;
}

int		A::getFoo( void) const {

		return this->_foo;
}

A &	A::operator=( A const & rhs) {

		std::cout << "Assignement operator called" << std::endl;

		if ( this != &rhs )
			this->_foo = rhs.getFoo();
		return *this;
}

std::ostream &	operator<<( std::ostream & o, A const & i) {

	o << "The value of _foo is : " << i.getFoo();

	return o;
}*/
