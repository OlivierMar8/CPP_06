//test.cpp	CPP06	ex00

#include <iostream>


size_t first_non_digit(std::string str) {
	size_t i = 0;
   while (isdigit(str[i]))
	   i++;
   return i;
}



void searchType( std::string str, int flag) {
(void)str;
	
	size_t i = 0;
	std::cout << "Entre dans searchType" << std::endl;
	i = first_non_digit(str);
	if ( i == str.npos) {
		std::cout << "Type is int" << std::endl;
		return;
	}
/*	else if (str[i] == 'f' and i = str.size() - 1) { //faux, pas de test du point !
		std::cout << "Type is float" << std::endl;
		return;
	}
*/	else if (str[i] == '-' || str[i] == '+') 
	{
		flag += 1;
		if (flag == 1)
			i = first_non_digit(str.substr(i + 1));
			if ( i == 
	}

	std::cout << i << std::endl;
	return;
}


void getType( std::string str) {

	if (str.empty())
	{
		std::cout << "Parameter is empty !" << std::endl;
		return;
	}
	int str_size = str.size();
	int flag = 0;
	switch (str_size) {
		case 1: if (isdigit(str[0])) 
					std::cout << "Type is int" << std::endl;
				else
						std::cout << "Type is char" << std::endl;
				break;
		case 3: if (! str.compare("nan"))
						std::cout << "Type is double" << std::endl;
				else
					searchType(str, flag);
				break;
		case 4: if (! str.compare("-inf") || ! str.compare("+inf"))
						std::cout << "Type is double" << std::endl;
				else if (! str.compare("nanf"))
						std::cout << "Type is float" << std::endl;
				else
					searchType(str, flag);
			    break;
		case 5: if (! str.compare("-inff") || ! str.compare("+inff"))
						std::cout << "Type is float" << std::endl;
				else
					searchType(str, flag);
			    break;
		default: //std::cout << "Type is other" << std::endl;		
					searchType(str, flag);
		}

			
			
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

