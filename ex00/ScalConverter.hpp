//ScalConverter.hpp	CPP06	ex00

#ifndef SCALCONVERTER_HPP
# define SCALCONVERTER_HPP

#include <ostream>
#include <string>
#include <limits>


class ScalConverter {

	public:

		ScalConverter( std::string const n );
		ScalConverter( ScalConverter const & src );	//Canonique	
		~ScalConverter( void );				//Canonique	

		ScalConverter &	operator=( ScalConverter const & rhs );//Canonique

		std::string		getOStr( void ) const;

		void			printResult( void );


	private:

		std::string	_Type;
		std::string	_o_str;
		int			_intValue;
		double		_dbleValue;
		float		_fValue;
		enum Type {
			TypeChar,
			TypeInt,
			TypeFloat,
			TypeDouble
		};

		ScalConverter( void );					//Canonique

};

std::ostream &		operator<<( std::ostream & o, ScalConverter const & i );

#endif
