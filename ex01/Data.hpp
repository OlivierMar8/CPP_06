//Data.hpp	CPP06   ex01

#ifndef DATA_CLASS_HPP
# define DATA_CLASS_HPP

#include <ostream>
#include <string>

class Data {

	public:

		Data( void );					//Canonique
		Data( int const q, float const r, std::string const n );
		Data( Data const & src );	//Canonique	
		~Data( void );				//Canonique	

		Data &	operator=( Data const & rhs );//Canonique

		int			getQty( void ) const;
		float		getRate( void ) const;
		std::string	getName( void ) const;


	private:

		int 		_qty;
		float		_rate;
		std::string	_name;		

};

std::ostream &		operator<<( std::ostream & o, Data const & i );

uintptr_t	serialize( Data* ptr );
Data*		deserialize( uintptr_t raw );

#endif
