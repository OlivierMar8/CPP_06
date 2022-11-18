//A.hpp	CPP06	ex02

#ifndef A_HPP
# define A_HPP

#include <ostream>
#include "Base.hpp"

class A : public Base {

	public:

		A( void );					//Canonique
//		A( int const n );
//		A( A const & src );	//Canonique	
		~A( void );				//Canonique	

//		A &	operator=( A const & rhs );//Canonique

};

//std::ostream &		operator<<( std::ostream & o, A const & i );

#endif
