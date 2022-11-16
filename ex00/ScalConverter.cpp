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
				convert_int();
				break;
		case 2:	_Type = TypeInt;
				convert_int();
				break;
		case 3: _Type = TypeDouble;
				//_dbleValue = std::strtod(_str);
				break;
		case 4: _Type = TypeDouble;
				//_dbleValue = std::strtod(_str);
				break;
		case 5: _Type = TypeFloat;
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
		_p_val[0] = 4;
		_p_val[1] = 4;
		_p_val[2] = 4;
		_p_val[3] = 4;
		flag = 0;
	}
	else if (_str.size() == 1)
	{
		if (isdigit(_str[0]))
		{
			flag = 1;
        //	std::cout << "Type is int" << std::endl;
		}
		else
		{
			flag = 0;
		//	std::cout << "Type is char" << std::endl;
		}
	}
	return flag;
}

int		ScalConverter::testDigits( int flag ) {

	size_t	i = 0;
	i = first_non_digit( i );
	if ( i > _str.size() - 1)
		flag = 1;
	else
	{
		while (i < _str.size())
		{
			if ((_str[i] == '-' || _str[i] == '+') && i == 0)
				flag += 2;
			else if (_str[i] == '.')
				flag += 3;
			else if (_str[i] == 'f' && ( i == _str.size() - 1 ))
			{
				if (flag >=3)
					flag = 5;
				else
					flag = 6;
			}
			else
			{
				flag = 6;
				break;
			}
			i = first_non_digit( i + 1 );
		}
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

void	ScalConverter::convert_int( void ) {

	double d;

	std::istringstream(_str) >> d;
	if ( d < std::numeric_limits<int>::min() ||
		   	d > std::numeric_limits<int>::max())
	{
		_p_val[0] = 3;
		_p_val[1] = 3;
		_doubleValue = d;
		_floatValue = static_cast<float>(d);
	}
	else
	{
		std::istringstream(_str) >> _intValue;
		_charValue = static_cast<char>(_intValue);
		_doubleValue = static_cast<double>(_intValue);
		_floatValue = static_cast<float>(_intValue);
	}

	return;
}
void	ScalConverter::show_cast( void ) {

	if (_Type == TypeChar)
		display_char();
	else if (_Type == TypeInt)
		display_int();

	return;
}

void	ScalConverter::display_char( void ) {

	std::cout << "char: " << _charValue << std::endl; 
	std::cout << "int: " << _intValue << std::endl; 
	std::cout << "float: " << _floatValue << "f" << std::endl; 
	std::cout << "double: " << _doubleValue << std::endl; 
	
	return;
}	

void	ScalConverter::display_int( void ) {

	std::cout << "char: ";
	if ((_intValue > 0 && _intValue < 32) || _intValue == 127)
		std::cout << "Non displayable" << std::endl;
	else if (_intValue < 1 || _intValue > 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << _charValue << std::endl; 
	std::cout << "int: "; 
	if (_p_val[1] == 3)
		std::cout << "impossible" << std::endl;
	else
		std::cout << _intValue << std::endl; 
	std::cout << "float: " << _floatValue << "f" << std::endl; 
	std::cout << "double: " << _doubleValue << std::endl; 
	
	return;
}	

std::ostream &	operator<<( std::ostream & o, ScalConverter const & i) {

	o << "The value of _str is : " << i.getOStr();

	return o;
}
