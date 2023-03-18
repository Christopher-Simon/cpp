#ifndef DATE_HPP
# define DATE_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <sstream>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

class Date 
{
	public:
		Date();
		Date(char * input);
		Date(Date const & raw);
		~Date();
		Date & operator=(Date const & rhs);

	private:
		int			_year;
		int			_month;
		int			_day;
		bool		_badInput;
		std::string	_input;
		bool		monthCheck();
};

#endif