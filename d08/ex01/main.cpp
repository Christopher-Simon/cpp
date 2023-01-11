#include "Span.hpp"

int	main(void)
{
	size_t t(0);
	std::srand(std::time(NULL));

	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "Default constructor + add number fail"<< RESET << std::endl;
	{
		Span sp;

		try {
			sp.addNumber(6);
		} catch (const std::exception & e) {
			std::cout << RED <<e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "Default constructor + span fail"<< RESET << std::endl;
	{
		Span sp;

		try {
			sp.shortestSpan();
		} catch (const std::exception & e) {
			std::cout << RED <<e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor (1) + add + span fail"<< RESET << std::endl;
	{
		Span sp(1);

		try {
			sp.addNumber(5);
			sp.print_tab();
			sp.longestSpan();
		} catch (const std::exception & e) {
			std::cout << RED <<e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor (1) + add + span fail"<< RESET << std::endl;
	{
		Span sp(1);

		try {
			sp.addNumber(5);
			sp.print_tab();
			sp.shortestSpan();
		} catch (const std::exception & e) {
			std::cout << RED <<e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor_copy (sp(1)) + add + span fail"<< RESET << std::endl;
	{
		Span sp(1);

		try {
			sp.addNumber(5);
			sp.print_tab();
			Span copy(sp);
			copy.print_tab();
			copy.longestSpan();
		} catch (const std::exception & e) {
			std::cout << RED <<e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor (1) + add fail"<< RESET << std::endl;
	{
		Span sp(1);

		try {
			sp.addNumber(5);
			sp.print_tab();
			sp.addNumber(5);
			sp.shortestSpan();
		} catch (const std::exception & e) {
			std::cout << RED <<e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor (2) + spans"<< RESET << std::endl;
	{
		Span sp(2);

		try {
			sp.addNumber(5);
			sp.addNumber(5);
			sp.print_tab();
			std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
		} catch (const std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor (2) + same spans"<< RESET << std::endl;
	{
		Span sp(2);

		try {
			sp.addNumber(5);
			sp.addNumber(5);
			sp.print_tab();
			std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
		} catch (const std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor (2) + same spans"<< RESET << std::endl;
	{
		Span sp(2);

		try {
			sp.addNumber(5);
			sp.addNumber(10);
			sp.print_tab();
			std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
		} catch (const std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor (4) + spans"<< RESET << std::endl;
	{
		Span sp(4);

		try {
			sp.addNumber(-5);
			sp.addNumber(0);
			sp.addNumber(10);
			sp.addNumber(12);
			sp.print_tab();
			std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
		} catch (const std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor (10) + addRange(5) + addRange(5) + addRange(1) fail" 
	<< RESET << std::endl;
	{
		Span sp(10);

		try {
			sp.addRange(42,5);
			sp.print_tab();
			sp.addRange(42,5);
			sp.print_tab();
			sp.addRange(42,1);
			sp.print_tab();
		} catch (const std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "constructor (20000) + Random + span" 
	<< RESET << std::endl;
	{
		Span sp(20000);

		try {
			sp.fillRandom();
			std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
		} catch (const std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
	}
	return 0;
}