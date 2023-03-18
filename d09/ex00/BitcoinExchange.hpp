#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <fstream>
#include "Date.hpp"

class BitcoinExchange 
{
	public:
		BitcoinExchange();
		BitcoinExchange(std::string input);
		BitcoinExchange(BitcoinExchange const & raw);
		~BitcoinExchange();
		BitcoinExchange & operator=(BitcoinExchange const & rhs);

	private:
		std::map<std::string, double> _db;
		void	getDb();
		void	findValue(std::string & targetDate, double value);
		void	goToDb(std::string input);
};

#endif