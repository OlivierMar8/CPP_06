//ScalConverter.cpp	CPP05	ex00

#include <iostream>
#include "ScalConverter.hpp"

ScalConverter::ScalConverter( void ) {

	return;
}

ScalConverter::ScalConverter( std::string const str ) : _str( str ) {

	int	flag = -1;
	flag = getSpecialCases( flag );
	if (flag == -1 )
		flag = testDigits( flag );
	switch ( flag )
	{
		case 0:	_Type = TypeChar;
				convert_char();
				break;
		case 1:	_Type = TypeInt;
				//_intValue = std::strtol(_str);
				break;
		case 2: _Type = TypeDouble;
				//_dbleValue = std::strtod(_str);
				break;
		case 3: _Type = TypeDouble;
				//_dbleValue = std::strtod(_str);
				break;
		case 4: _Type = TypeFloat;
				//_dbleValue = std::strtod(_str);
				break;
		default: _Type = TypeUnknown;
	}
	return;
}

ScalConverter::ScalConverter( ScalConverter const & src ) {

	*this = src;
	return;
}

ScalConverter::~ScalConverter( void ) {

		return;
}

ScalConverter &	ScalConverter::operator=( ScalConverter const & rhs) {


		if ( this != &rhs )
			this-> _str= rhs.getOStr();
		return *this;
}

std::string		ScalConverter::getOStr( void) const {

		return this->_str;
}

int		ScalConverter::getSpecialCases( int flag) {

	if (_str.empty())
	{
		_Type = TypeUnknown;
		p_val[0] = 4;
		p_val[1] = 4;
		p_val[2] = 4;
		p_val[3] = 4;
		flag = 0;
	}
	else if (_str.size() == 1)
	{
		if (isdigit(_str[0]))
		{
			flag = 1;
        	std::cout << "Type is int" << std::endl;
		}
		else
		{
			flag = 0;
			std::cout << "Type is char" << std::endl;
		}
	}
	return flag;
}

int		ScalConverter::testDigits( int flag ) {

	size_t	i = 0;
	i = first_non_digit( i );
	while (i < _str.size())
	{
		if ((_str[i] == '-' || _str[i] == '+') && i == 0)
			flag += 1;
		else if (_str[i] == '.')
			flag += 2;
		else if (_str[i] == 'f' && ( i == _str.size() - 1 ))
		{
			if (flag >=2)
				flag = 4;
			else
				flag = 5;
		}
		else
		{
			flag = 5;
			break;
		}
		i = first_non_digit( i + 1 );
	}
	return flag;
}

size_t	ScalConverter::first_non_digit( size_t i) {

	while (isdigit(_str[i]))
		i++;

	return i;
}

void	ScalConverter::convert_char( void ) {

	_charValue = _str[0];
	_intValue = static_cast<int>(_charValue);
	_doubleValue = static_cast<double>(_charValue);
	_floatValue = static_cast<float>(_charValue);

	return;
}

void	ScalConverter::show_cast( void ) {

	if (_Type == TypeChar)
		display_char();
}

void	ScalConverter::display_char( void ) {

	std::cout << "char: " << _charValue << std::endl; 
	std::cout << "int: " << _intValue << std::endl; 
	std::cout << "float: " << _floatValue << "f" << std::endl; 
	std::cout << "double: " << _doubleValue << std::endl; 
	

	/*
	switch (p_val[0])
	{
		case 1:	std::cout << _charValue;
				break;
	}*/
	return;
}	

std::ostream &	operator<<( std::ostream & o, ScalConverter const & i) {

	o << "The value of _str is : " << i.getOStr();

	return o;
}
