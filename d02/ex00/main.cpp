#include <iostream>
#include "Fixed.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << GREEN << "Set B at 2" << RESET << std::endl;
	b.setRawBits(2);
	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << GREEN << "Set c = b" << RESET << std::endl;
	c = b;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;
	return 0;
}