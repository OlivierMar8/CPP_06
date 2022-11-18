//Data.cpp	CPP06	ex01

#include <iostream>
#include "Data.hpp"

Data::Data( void ) {

	return;
}

Data::Data( int const q, float const r, std::string const n ) : _qty( q ), _rate( r ), _name( n ) {

	return;
}

Data::Data( Data const & src ) {

	*this = src;
	return;
}

Data::~Data( void ) {

		return;
}

int		Data::getQty( void) const {

		return this->_qty;
}

float	Data::getRate( void) const {

		return this->_rate;
}

std::string	Data::getName( void) const {

		return this->_name;
}

Data &	Data::operator=( Data const & rhs) {

		std::cout << "Assignement operator called" << std::endl;

		if ( this != &rhs )
		{
			this->_qty = rhs.getQty();
			this->_rate = rhs.getRate();
			this->_name = rhs.getName();
		}
		return *this;
}

std::ostream &	operator<<( std::ostream & o, Data const & i) {

	o << "The values:\n\tQuantity : " << i.getQty() << "\n\t"
		<< "Rate: " << i.getRate() << "\n\t"
		<< "Name: " << i.getName() << "\n";

	return o;
}

uintptr_t   serialize( Data* ptr ) {

	return ( reinterpret_cast<uintptr_t>( ptr ));
}

Data * deserialize( uintptr_t raw ) {

	return (reinterpret_cast<Data *>(raw));
}
