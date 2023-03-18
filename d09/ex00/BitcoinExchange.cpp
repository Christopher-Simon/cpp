#include "BitcoinExchange.hpp" 

BitcoinExchange::BitcoinExchange(): _db()
{
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

