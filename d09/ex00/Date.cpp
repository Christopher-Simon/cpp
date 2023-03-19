#include "Date.hpp" 

Date::Date():
_year(0),
_month(0),
_day(0),
_badInput(true),
_input("0-0-0"),
_error("nothing")
{
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

Date::Date(std::string input):
_badInput(false),
_input(input),
_error("Error in file : wrong date : " + input)
{
	char * endP;
	if (parseInput(_input) == false)
	{
		_badInput = true;
		// std::cout << RED << "Bad input" << RESET << std::endl;
		throw (std::invalid_argument(_error));
	}
	_year = strtod(input.c_str(), &endP);
	input = endP + 1;
	// std::cout << "_year : " << _year << std::endl;
	_month = strtod(input.c_str(), &endP);
	input = endP + 1;
	// std::cout << "_month : " << _month << std::endl;
	_day = strtod(input.c_str(), &endP);
	// std::cout << "_day : " << _day << std::endl;
	if (_year < 0 || _month <= 0 || _month > 12 || _day <= 0 )
	{
		_badInput = true;
		// std::cout << RED << "Bad input" << RESET << std::endl;
		throw (std::invalid_argument(_error));
	}
	if (monthCheck() == false)
	{
		_badInput = true;
		// std::cout << RED << "Bad input" << RESET << std::endl;
		throw (std::invalid_argument(_error));
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
		_year = rhs._year;
		_month = rhs._month;
		_day = rhs._day;
		_badInput = rhs._badInput;
		_input = rhs._input;
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
		throw (std::invalid_argument(_error));
		}
		else if (_day == 29 
			&& !(_year % 4 == 0 && (_year % 100 != 0 || _year % 400 == 0)))
		{
			_badInput = true;
			return (false);
		throw (std::invalid_argument(_error));
		}
		// fall through
	case 4:
		if (_day > 30)
		{
			_badInput = true;
			return (false);
		throw (std::invalid_argument(_error));
		}
		break;
		// fall through
	case 6: 
		if (_day > 30)
		{
			_badInput = true;
			return (false);
		throw (std::invalid_argument(_error));
		}
		// fall through
	case 9:
		if (_day > 30)
		{
			_badInput = true;
			return (false);
		throw (std::invalid_argument(_error));
		}
		// fall through
	case 11:
		if (_day > 30)
		{
			_badInput = true;
			return (false);
		throw (std::invalid_argument(_error));
		}
		// fall through
	default:
		if (_day > 31)
		{
			_badInput = true;
			return (false);
		throw (std::invalid_argument(_error));
		}
		break;
	}
	return (true);
}
