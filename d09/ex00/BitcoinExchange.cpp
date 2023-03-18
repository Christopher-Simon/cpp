#include "BitcoinExchange.hpp" 

BitcoinExchange::BitcoinExchange(): _db()
{
}



BitcoinExchange::BitcoinExchange(std::string input): _db()
{
	getDb();
	goToDb(input);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & raw)
{
	*this = raw;
}


BitcoinExchange::~BitcoinExchange()
{
}
//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

void	BitcoinExchange::getDb()
{
	std::ifstream	ifs;
	std::string		line;
	std::string		date;
	std::string		value_str;
	double		value;

	ifs.open("data.csv");
	if (ifs.fail())
		throw std::invalid_argument("Error file opening");
	std::getline(ifs, line, '\n');
	for (; !ifs.eof(); )
	{
		std::getline(ifs, line, '\n');
		date = line.substr(0, line.find(","));
		value_str = line.substr(line.find(",") + 1);
		value = std::strtod(value_str.c_str(), NULL);
		if (value < 0)
		{
			ifs.close(),
			throw std::domain_error("Error file : Negative value : date : " + date + ", value " + value_str);
		}
		if (date == "" && value_str == "")
		{
			if (!ifs.eof())
			{
				ifs.close(),
				throw std::domain_error("Error file : empty line");
			}
		}
		else{
			try {
				Date	verif(date);
			} catch (std::exception const & e )
			{
				std::cerr << RED << e.what() << RESET << std::endl;
				ifs.close(),
				throw (std::exception());
			}
		}
		if (!ifs.eof() && ifs.fail())
		{
			ifs.close(),
			throw std::domain_error("Error file");
		}
		_db[date] = value;
	}
}

void	BitcoinExchange::findValue(std::string & targetDate, double value)
{
	std::map<std::string, double>::iterator it = _db.lower_bound(targetDate);
	std::map<std::string, double>::iterator itB = _db.begin();
	itB++;

	if (targetDate < itB->first)
		std::cout << "No element less than " << targetDate << " found." << std::endl;
	else {
		if (targetDate != it->first)
			it--;
		// std::cout << "Last element less than " << targetDate << ": " << it->second << std::endl;
		// std::cout << it->first << std::endl;
		std::cout << it->first << " => " << value << " = " << it->second * value << std::endl;
	}
}

void	BitcoinExchange::goToDb(std::string input)
{
	std::ifstream	ifs;
	std::string		line;
	std::string		date;
	std::string		value_str;
	double		value;

	ifs.open(input.c_str());
	if (ifs.fail())
		throw std::invalid_argument("Error file opening");
	std::getline(ifs, line, '\n');
	for (; !ifs.eof(); )
	{
		std::getline(ifs, line, '\n');
		date = line.substr(0, line.find("|") - 1);
		value_str = line.substr(line.find("|") + 2);
		value = std::strtod(value_str.c_str(), NULL);
		if (value < 0 || value > 1000)
		{
			std::cerr << "Error in value : " << value << std::endl;
			continue ; 
		}
		if (date == "" && value_str == "")
		{
			if (!ifs.eof())
			{
				ifs.close(),
				throw std::domain_error("Error file : empty line");
			}
		}
		else{
			try {
				Date	verif(date);
			} catch (std::exception const & e )
			{
				std::cerr  << "Error : wrong date : " << date << std::endl;
				continue;
			}
		}
		if (!ifs.eof() && ifs.fail())
		{
			ifs.close(),
			throw std::domain_error("Error file");
		}
		findValue(date, value);
	}
	// try
	// {
	// 	Date verif(input);
	// 	findValue(input);
	// } catch (std::exception const & e ) {
	// 	std::cerr << e.what() << RESET << std::endl;
	// 	e.what();
	// }
}