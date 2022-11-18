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

void	identify( Base* p) {

	A* ptrA = dynamic_cast<A*>(p);
	if (ptrA != NULL)
		std::cout << "The real type is A" << std::endl;
	else
	{
		B* ptrB = dynamic_cast<B*>(p);
		if (ptrB != NULL)
			std::cout << "The real type is B" << std::endl;
		else
		{
			C* ptrC = dynamic_cast<C*>(p);
			if (ptrC != NULL)
				std::cout << "The real type is C" << std::endl;
			else
				std::cout << "The real type is unknown" << std::endl;
		}
	}
	return;
}

int	main( void )
{
	Base* pointeur;

	for (int i = 0; i < 10; i++)
	{
		pointeur = generate();
		identify(pointeur);
		delete pointeur;
	}




	return 0;
}

