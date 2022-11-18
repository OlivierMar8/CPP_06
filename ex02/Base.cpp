//Base.cpp	CPP06	ex02

#include <iostream>
#include "Base.hpp"
/*
Base::Base( void ) {

	std::cout << "Default Constructor called" << std::endl;
	return;
}

Base::Base( int const n ) : _foo( n ) {

	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

Base::Base( Base const & src ) {

	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}
*/
Base::~Base( void ) {

		std::cout << "Destructor called" << std::endl;
		return;
}
/*
int		Base::getFoo( void) const {

		return this->_foo;
}

Base &	Base::operator=( Base const & rhs) {

		std::cout << "Assignement operator called" << std::endl;

		if ( this != &rhs )
			this->_foo = rhs.getFoo();
		return *this;
}

std::ostream &	operator<<( std::ostream & o, Base const & i) {

	o << "The value of _foo is : " << i.getFoo();

	return o;
}*/
