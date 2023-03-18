#include "Date.hpp" 

Date::Date():
_year(0),
_month(0),
_day(0),
_badInput(true),
_input("0-0-0")
{
	// throw (std::invalid_argument("invalid date format"));
}

bool	parseInput(std::string str)
{
	size_t count(0);
	for (
		std::string::iterator it = str.begin();
		it != str.end();
		++it
	)
	{
		if (*it == '-')
			count++;
		if ((!isdigit(*it) && *it != '-') || count == 3)
			return (false);
	}
	return (true);
}

Date::Date(char * input):
_badInput(false),
_input(input)
{
	char * endP;
	(void)_year;
	(void)_month;
	(void)_day;
	if (parseInput(_input) == false)
	{
		_badInput = true;
		std::cout << RED << "Bad input" << RESET << std::endl;
	}
	_year = strtod(input, &endP);
	input = endP + 1;
	std::cout << "_year : " << _year << std::endl;
	_month = strtod(input, &endP);
	input = endP + 1;
	std::cout << "_month : " << _month << std::endl;
	_day = strtod(input, &endP);
	std::cout << "_day : " << _day << std::endl;
	if (_year < 0 || _month <= 0 || _month > 12 || _day <= 0 )
	{
		_badInput = true;
		std::cout << RED << "Bad input" << RESET << std::endl;
	}
	if (monthCheck() == false)
	{
		_badInput = true;
		std::cout << RED << "Bad input" << RESET << std::endl;
	}
}

Date::Date(Date const & raw)
{
	*this = raw;
}


Date::~Date()
{
}
//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

Date & Date::operator=(Date const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

bool Date::monthCheck()
{
	switch (_month)
	{
	case 2:
		if (_day > 29)
		{
			_badInput = true;
			return (false);
		}
		if (_day == 29 
			&& !(_year % 4 == 0 && (_year % 100 != 0 || _year % 400 == 0)))
		{
			_badInput = true;
			return (false);
		}
	case 4:
		if (_day > 30)
		{
			_badInput = true;
			return (false);
		}
		break;
	case 6: 
		if (_day > 30)
		{
			_badInput = true;
			return (false);
		}
	case 9:
		if (_day > 30)
		{
			_badInput = true;
			return (false);
		}
	case 11:
		if (_day > 30)
		{
			_badInput = true;
			return (false);
		}
	default:
		if (_day > 31)
		{
			_badInput = true;
			return (false);
		}
		break;
	}
	return (true);
}
