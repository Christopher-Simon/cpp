#ifndef C_HPP
# define C_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Base.hpp"

class C : public Base
{
	public:
		C();
		C(C const & raw);
		~C();
		C & operator=(C const & rhs);

	private:
		
};

#endif