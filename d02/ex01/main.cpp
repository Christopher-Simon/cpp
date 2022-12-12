#include <iostream>
#include "Fixed.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int main( void ) {
	{
		std::cout << GREEN << "INIT" << RESET << std::endl;
		Fixed a;
		Fixed const b( 10 );
		Fixed const c( 42.42f );
		Fixed const d( b );
		a = Fixed( 1234.4321f );

		std::cout << GREEN << "PRINT FLOAT && << OVERFLOW" << RESET << std::endl;
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << GREEN << "PRINT INT" << RESET << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	std::cout << std::endl <<  std::endl;
	{
		std::cout << GREEN << "MAX FIXED" << RESET << std::endl;
		Fixed a(8388607);
		std::cout << "a is " << a << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;

		Fixed b(8388608);
		std::cout << "b is " << b << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		
		Fixed c(8388607.0f);
		std::cout << "c is " << c << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;

		Fixed d(8388607.8f);
		std::cout << "d is " << d << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	std::cout << std::endl <<  std::endl;
	{
		std::cout << GREEN << "MIN FIXED" << RESET << std::endl;
		Fixed a(-8388608);
		std::cout << "a is " << a << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;

		Fixed b(-8388609);
		std::cout << "b is " << b << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		
		Fixed c(-8388608.2f);
		std::cout << "c is " << c << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;

		Fixed d(-8388608.9f);
		std::cout << "d is " << d << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	return 0;
}