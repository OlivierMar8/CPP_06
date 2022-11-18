//main.cpp	CPP06	ex01

#include <iostream>
#include "Data.hpp"

int	main( void )
{
	uintptr_t	my_uptr;
	Data * 		d_serial;
	Data * my_data = new Data( 10, 2.56, "Truc" );

	std::cout << "Adresse de my_data: " << my_data << std::endl;
	std::cout << *my_data << std::endl;

	my_uptr = serialize ( my_data );
//	std::cout << "Adresse de my_uptr: " << my_uptr << std::endl;
	//std::cout << *my_uptr << std::endl; //Ne compile pas !
//	std::cout << my_uptr << std::endl;

	d_serial = deserialize( my_uptr );
	std::cout << "Adresse de d_serial: " << d_serial << std::endl;
	std::cout << *d_serial << std::endl;

	delete my_data;
	return 0;
}

