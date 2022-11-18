//B.hpp	CPP06	ex02

#ifndef B_HPP
# define B_HPP

#include <ostream>
#include "Base.hpp"

class B : public Base {

	public:

		B( void );					//Canonique
//		B( int const n );
//		B( B const & src );	//Canonique	
		~B( void );				//Canonique	

//		B &	operator=( B const & rhs );//Canonique

};

//std::ostream &		operator<<( std::ostream & o, B const & i );

#endif
