#include <iostream>
#include <list>
#include <cstdlib>
#include <string>
#include "RPN.hpp"

// bool	isSign(char c)
// {
// 	if (c == '+' || 
// 	c == '-' ||
// 	c == '/' ||
// 	c == '*')
// 		return (true);
// 	return (false);
// }

// bool isSign(std::string c)
// {
// 	if (c == "+" || 
// 	c == "-" ||
// 	c == "/" ||
// 	c == "*")
// 		return (true);
// 	return (false);}

// bool isLegacyBidirectionalIterator(std::list<std::string>::iterator sign, std::list<std::string>::iterator limit)
// {
// 	if (sign == limit || --sign == limit)
// 	{
// 		std::cout << "ERROR" << std::endl;
// 		return(false);
// 	}
// 	return (true);

// }

// int	calculate(std::list<std::string>::iterator sign, std::list<std::string>::iterator limit)
// {
// 	if (isLegacyBidirectionalIterator(sign, limit) == true)
// 	{	
// 		std::list<std::string>::iterator b(sign);
// 		--b;
// 		std::list<std::string>::iterator a(b);
// 		--a;
// 		std::cout << *a << *sign << *b << std::endl;
// 		int w = std::strtod((*a).c_str(), NULL);
// 		int z = std::strtod((*b).c_str(), NULL);
// 		if (*sign == "+")
// 			std::cout << w + z << std::endl;
// 		else if (*sign == "-")
// 			std::cout << w + z << std::endl;
// 		else if (*sign == "*")
// 			std::cout << w + z << std::endl;
// 		else if (*sign == "/")
// 			std::cout << w + z << std::endl;
// 		return (0);
// 	}
// 	return (-1);
// }

// std::string getString(char c)
// {
// 	std::string s(1, c);

// 	return (s);
// }



int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (1);
	}
	std::string	input(argv[1]);
	try 
	{
		RPN	res(input);
	} catch (RPN::RPNExceptions & e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	// for (std::string::iterator	it = input.begin(); it != input.end(); ++it)
	// {
	// 	if (isdigit(*it))
	// 		cal.push_back((*it) - 48);
	// 	else if (isSign(*it) == true)
	// 		cal.push_back(getString(*it));
	// 	else if (*it == ' ')
	// 		;
	// 	else
	// 	{
	// 		std::cout << "ERROR" << std::endl;
	// 		return (1);
	// 	}
	// }
	// for (std::list<std::string>::iterator it = cal.begin(); it != cal.end(); ++it)
	// {
	// 	if (isSign(*it) == true)
	// 	{
	// 		calculate(it, cal.begin());
	// 		// std::cout << *(it) << *it << *(--it) << std::endl;
	// 	}
	// }

	return (0);
}