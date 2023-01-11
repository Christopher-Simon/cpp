#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

template< typename T >
int easyfind(T dock, int n)
{
	typename T::iterator res;

	res = std::find(dock.begin(), dock.end(), n);
	if (res == dock.end())
		throw (std::exception());
	return (*res);
}

#endif