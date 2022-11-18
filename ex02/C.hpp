//C.hpp	CPP06	ex02

#ifndef C_HPP
# define C_HPP

#include <ostream>
#include "Base.hpp"

class C : public Base {

	public:

		C( void );					//Canonique
//		C( int const n );
		C( C const & src );	//Canonique	
		~C( void );				//Canonique	

		C &	operator=( C const & rhs );//Canonique

};

std::ostream &		operator<<( std::ostream & o, C const & i );

#endif
