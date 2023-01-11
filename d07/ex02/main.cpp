#include "Array.hpp"

int	main()
{
	size_t t(0);
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	{
		Array <int>test;

		try {
			std::cout << test[0] << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	{
		Array <int>test(2);
		Array <int>copy;
		try {
			std::cout << test[1] << std::endl;
			std::cout << copy[0] << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	{
		Array <int>test(2);
		try {
			std::cout << test[2] << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	{
		Array <int>test(2);
		try {
			std::cout << test[-1] << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	{
		Array <int>test(2);
		Array <int>copy;
		try {
			std::cout << test[1] << std::endl;
			copy = test;
			std::cout << copy[0] << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	{
		try {
			Array <int>test(2);
			Array <int>copy(test);
			std::cout << test[1] << std::endl;
			copy = test;
			std::cout << copy[0] << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	{
		try {
			Array <char>test(2);
			Array <char>copy(test);
			std::cout << test[0] << std::endl;
			copy[0] = 'c';
			std::cout << copy[0] << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	{
		try {
			Array <std::string>test(2);
			Array <std::string>copy(test);
			std::cout << test[0] << std::endl;
			copy[0] = 42;
			std::cout << copy[0] << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}