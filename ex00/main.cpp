//main.cpp	CPP05	ex00

#include <iostream>
#include "Bureaucrat.hpp"


int	main( void )
{
	
	Bureaucrat bur("Bob", 149);

	std::cout << bur << std::endl;
	bur.increGrade();
	std::cout << bur << std::endl;
	bur.decreGrade();
	std::cout << bur << std::endl;
	bur.decreGrade();
	std::cout << bur.getGrade() << std::endl;
	std::cout << bur << std::endl;
	bur.decreGrade();
	std::cout << bur.getGrade() << std::endl;
	bur.decreGrade();

	Bureaucrat bur1("Tom", 0);
	Bureaucrat bur2("Robert", 1510);
	Bureaucrat bur3("Bruce", 1);
	std::cout << bur3.getName() << " / " << bur3.getGrade() << std::endl;
	bur3.increGrade();
	std::cout << bur3 << std::endl;

	Bureaucrat bur4(bur3);
	std::cout << bur4 << std::endl;
	bur4 = bur;
	std::cout << bur4 << std::endl;

	return 0;
}

