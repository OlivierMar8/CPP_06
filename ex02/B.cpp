//B.cpp	CPP06	ex02

#include <iostream>
#include "B.hpp"

B::B( void ) {

	std::cout << "Default Constructor called" << std::endl;
	return;
}
/*
B::B( int const n ) : _foo( n ) {

	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

B::B( B const & src ) {

	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}
*/
B::~B( void ) {

		std::cout << "Destructor called" << std::endl;
		return;
}
/*
int		B::getFoo( void) const {

		return this->_foo;
}

B &	B::operator=( B const & rhs) {

		std::cout << "Bssignement operator called" << std::endl;

		if ( this != &rhs )
			this->_foo = rhs.getFoo();
		return *this;
}

std::ostream &	operator<<( std::ostream & o, B const & i) {

	o << "The value of _foo is : " << i.getFoo();

	return o;
}*/
