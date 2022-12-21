#ifndef A_HPP
# define A_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Base.hpp"

class A : public Base
{
	public:
		A();
		A(A const & raw);
		~A();
		A & operator=(A const & rhs);

	private:
		
};

#endif