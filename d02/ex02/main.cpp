#include <iostream>
#include "Fixed.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int main( void ) {
	std::cout << GREEN << "INIT et test arithmetiques" << RESET << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) + Fixed( 2 ) );

	std::cout << GREEN << "pre et post inc/decrements" << RESET << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "--c : " << --c << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "c-- : " << c-- << std::endl;
	std::cout << "c : " << c << std::endl;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;

	std::cout << GREEN << "Operateurs de comparaison et min/max" << RESET << std::endl;
	std::cout << "max(a, b) : " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b) : " << Fixed::min( a, b ) << std::endl;
	std::cout << "max(d, e) : " << Fixed::max( d, e ) << std::endl;
	std::cout << "min(a, e) : " << Fixed::min( a, e ) << std::endl;
	return 0;
}