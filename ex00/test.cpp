//test.cpp	CPP06	ex00

#include <iostream>


size_t first_non_digit(std::string str, size_t i) {
   while (isdigit(str[i]))
	   i++;
   return i;
}

int	testDigit( std::string str, int flag)
{
	size_t i = 0;
	i = first_non_digit(str, i);
	while ( i < str.size())
   	{
		if ((str[i] == '-' || str[i] == '+') && i == 0) 
			flag += 1;
		else if (str[i] == '.')
			flag += 2;
		else if (str[i] == 'f' && (i == str.size() - 1))
		{
			if (flag >= 2)
				flag = 4;
			else
				flag = 5;
		}
		else
		{
			flag = 5;
			break;
		}
		i = first_non_digit(str, i + 1);
	}	
	switch (flag) {
					case 0:		std::cout << "Type is int" << std::endl;
								break;
					case 1:		std::cout << "Type is int" << std::endl;
								break;
					case 2:		std::cout << "Type is double" << std::endl;
								break;
					case 4:		std::cout << "Type is float" << std::endl;
								break;
					case 5:		std::cout << "Unknown Type" << std::endl;
								break;
	}	
	return i;
}



void searchType( std::string str, int flag) {
(void)str;
	
	size_t i = 0;
	std::cout << "Entre dans searchType" << std::endl;
	i = testDigit(str, flag);

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

