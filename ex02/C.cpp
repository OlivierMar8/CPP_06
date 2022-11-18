//C.cpp	CPP06	ex02

#include <iostream>
#include "C.hpp"

C::C( void ) {

	std::cout << "Default Constructor called" << std::endl;
	return;
}
/*
C::C( int const n ) : _foo( n ) {

	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

C::C( C const & src ) {

	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}
*/
C::~C( void ) {

		std::cout << "Destructor called" << std::endl;
		return;
}
/*
int		C::getFoo( void) const {

		return this->_foo;
}

C &	C::operator=( C const & rhs) {

		std::cout << "Cssignement operator called" << std::endl;

		if ( this != &rhs )
			this->_foo = rhs.getFoo();
		return *this;
}

std::ostream &	operator<<( std::ostream & o, C const & i) {

	o << "The value of _foo is : " << i.getFoo();

	return o;
}*/
