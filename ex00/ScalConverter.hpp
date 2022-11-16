//ScalConverter.hpp	CPP06	ex00

#ifndef SCALCONVERTER_HPP
# define SCALCONVERTER_HPP

#include <ostream>
#include <string>
#include <limits>
#include <cstdlib>


class ScalConverter {

	public:

		ScalConverter( std::string const n );
		ScalConverter( ScalConverter const & src );	//Canonique	
		~ScalConverter( void );				//Canonique	

		ScalConverter &	operator=( ScalConverter const & rhs );//Canonique

		std::string		getOStr( void ) const;

		int				getSpecialCases( int flag );
		int				testDigits( int flag );
		size_t			first_non_digit( size_t i);
		void			printResult( void );
		void			convert_char( void );
		void			convert_int( void );
		void			convert_double( void );
		void			convert_float( void );
		void			show_cast( void );	
		void			display_char( void );
		void			display_int( void );
		void			display_float( void );
		void			display_double( void );

	private:

		int			_Type;
		std::string	_str;
		char		_charValue;
		int			_intValue;
//		long		_intValue;
		double		_doubleValue;
		float		_floatValue;
		int			p_val[4];
		enum _Type_val {
			TypeChar,
			TypeInt,
			TypeFloat,
			TypeDouble,
			TypeUnknown

		};

		ScalConverter( void );					//Canonique

};

std::ostream &		operator<<( std::ostream & o, ScalConverter const & i );




#endif
