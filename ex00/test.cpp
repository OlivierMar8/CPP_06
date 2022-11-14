//test.cpp	CPP06	ex00

#include <iostream>

void getType( std::string str) {
(void)str;
	if (str.size() == 1 && isdigit(str[0]))
		std::cout << "Type is int" << std::endl;
	else
		std::cout << "Type is char" << std::endl;
return;
}



int	main( int argc, char ** argv )
{
	(void)argv;
	std::string str = "2i";
	if (argc != 2 )
		std::cout << "Uncorrect number of argument !" << std::endl;
	else
	{
//		ScalConverter value(argv[1]);

//		std::cout << value << std::endl;
		getType(argv[1]);
//		std::cout << std::stoi(static_cast<std::string>(argv[1])) << std::endl;//OK	

	}	
	return 0;
}

