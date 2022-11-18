//main.cpp	CPP06	ex01

#include <iostream>
#include <cstdlib>
#include "base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate( void ) {
	
	Base * ptr;
	int		a = std::rand() % 3 + 1;
	switch (a)
	{
		case 1:	ptr = new A();
				std::cout << " A \n";
				break;
		case 2:	ptr = new B();
				std::cout << " B \n";
				break;
		case 3:	ptr = new C();
				std::cout << " C \n";
				break;
		default: std::cout << "Default. value = " << a << " \n";
				 ptr = new Base();
		std::cout << std::endl;
	}
	return (ptr);
}

int	main( void )
{
	Base * pointeur;

	for (int i = 0; i < 10; i++)
	{
		pointeur = generate();
		delete pointeur;
	}




	return 0;
}

