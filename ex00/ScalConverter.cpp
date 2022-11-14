//ScalConverter.cpp	CPP05	ex00

#include <iostream>
#include "ScalConverter.hpp"

ScalConverter::ScalConverter( void ) {

//	std::cout << "Default Constructor called" << std::endl;
	return;
}

ScalConverter::ScalConverter( std::string str ) : _o_str( str ) {

//	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

ScalConverter::ScalConverter( ScalConverter const & src ) {

//	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

ScalConverter::~ScalConverter( void ) {

//		std::cout << "Destructor called" << std::endl;
		return;
}

std::string		ScalConverter::getOStr( void) const {

		return this->_o_str;
}

ScalConverter &	ScalConverter::operator=( ScalConverter const & rhs) {

//		std::cout << "Assignement operator called" << std::endl;

		if ( this != &rhs )
			this-> _o_str= rhs.getOStr();
		return *this;
}

std::ostream &	operator<<( std::ostream & o, ScalConverter const & i) {

	o << "The value of _o_str is : " << i.getOStr();

	return o;
}
