//Base.hpp	CPP06	ex02

#ifndef BASE_HPP
# define BASE_HPP

#include <ostream>

class Base {

	public:

//		Base( void );					//Canonique
//		Base( int const n );
//		Base( Base const & src );	//Canonique	
		virtual ~Base( void );		//Canonique	
/*
		Base &	operator=( Base const & rhs );//Canonique

		int			getFoo( void ) const;


	private:

		int 		_foo;
*/
};

//std::ostream &		operator<<( std::ostream & o, Base const & i );

#endif
