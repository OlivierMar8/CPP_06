//main.cpp	CPP06	ex00

#include <iostream>
#include <iomanip>
#include "ScalConverter.hpp"

int	main( int argc, char ** argv )
{
	if (argc != 2 )
		std::cout << "Uncorrect number of argument !" << std::endl;
	else
	{
		ScalConverter value(argv[1]);
	value.show_cast();
		std::cout << std::setw(4);
		std::cout << value << std::endl;
	}	
	return 0;
}

