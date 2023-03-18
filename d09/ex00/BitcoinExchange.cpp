#include "BitcoinExchange.hpp" 

BitcoinExchange::BitcoinExchange(): _db()
{
}



BitcoinExchange::BitcoinExchange(std::string input): _db()
{
	(void)input;
	getDb();
	findValue(input);
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
		// std::cout << "line : " << line << std::endl;
		date = line.substr(0, line.find(","));
		value_str = line.substr(line.find(",") + 1);
		value = std::strtod(value_str.c_str(), NULL);
		if (value < 0)
		{
			ifs.close(),
			throw std::domain_error("Error file : Negative value : date : " + date + ", value " + value_str);
		}
		// std::cout << "date : " << date << std::endl;
		// std::cout << "value : " << value << std::endl;
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

void	BitcoinExchange::findValue(std::string & targetDate)
{
	std::map<std::string, double>::iterator it = _db.lower_bound(targetDate);
	std::map<std::string, double>::iterator itB = _db.begin();
	itB++;

	// std::cout << "db.begin() " << _db.begin()->first << std::endl;
	// std::cout << "it " << it->first << std::endl;
	// std::cout << "it " << it->first << std::endl;
	if (targetDate < itB->first)
		std::cout << "No element less than " << targetDate << " found." << std::endl;
	else {
		if (targetDate != it->first)
			it--;
		std::cout << "Last element less than " << targetDate << ": " << it->second << std::endl;
		std::cout << it->first << std::endl;
	}
	// if (it != _db.begin()) {
	// 	it--;
	// 	std::cout << "Last element less than " << targetDate << ": " << it->second << std::endl;
	// }
	// else {
	// 	std::cout << "No element less than " << targetDate << " found." << std::endl;
	// }








	// std::cout << "date is : " << it->first << std::endl;
	// if (itB->first == targetDate)
	// {
	// 	std::cout << "Debut" << std::endl;
	// 	std::cout << "date is : " << it->first << std::endl;
	// 	std::cout << "The closest value is: " << it->second << std::endl;		
	// 	return ;
	// }
	// it--;
	// if (it == _db.begin())
	// {
	// 	std::cout << "Anterieur : No Value" << it->first << std::endl;
	// } else if (it != _db.begin()) {
	// 	// it++;
	// 	std::cout << "Post" << std::endl;
	// 	std::cout << "date is : " << it->first << std::endl;
	// 	std::cout << "The closest value is: " << it->second << std::endl;
	// }
	// 	std::cout << "La" << std::endl;
	// 	std::cout << "date is : " << it->first << std::endl;
	// 	std ::cout << "The closest value is: " << it->second << std::endl;
	// } else {
	// 	std::cout << "No element less than " << targetDate << " found." << std::endl;
	// }
}
