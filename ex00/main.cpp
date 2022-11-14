//main.cpp	CPP06	ex00

#include <iostream>
#include "ScalConverter.hpp"

int	main( int argc, char ** argv )
{
	if (argc != 2 )
		std::cout << "Uncorrect number of argument !" << std::endl;
	else
	{
/*		ScalConverter value(argv[1]);

*/		std::cout << value << std::endl;
		std::cout << 2 * stoi(argv[1]) << std::endl;

	}	
	return 0;
}

