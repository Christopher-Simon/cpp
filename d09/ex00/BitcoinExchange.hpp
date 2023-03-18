#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include "Date.hpp"

class BitcoinExchange 
{
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & raw);
		~BitcoinExchange();
		BitcoinExchange & operator=(BitcoinExchange const & rhs);

	private:
		std::map<Date, double> _db;
};

#endif