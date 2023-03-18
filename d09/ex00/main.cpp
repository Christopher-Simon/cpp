#include <iostream>
#include <fstream>
#include <map>
#include "Date.hpp"
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::string		line;
	std::map<std::string, double> db;

	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	ifs.open("data.csv");
	if (ifs.fail())
		return (std::cerr << "Error file opening" << std::endl, 
		1);
	// for (; !ifs.eof(); )
	// {
	// 	std::getline(ifs, line, ',');
	// 	std::cout << line << std::endl;
	// 	if (!ifs.eof() && ifs.fail())
	// 		return (std::cerr << "Error getline" << std::endl,
	// 		ifs.close(),
	// 		1);
	// }
	// std::string input = argv[1];
	// Date	test(argv[1]);
	// BitcoinExchange();
	// char * test ="2012-02-14"; 
	db[argv[1]] = 3;
	std::cout << db.begin()->first << " " << db.begin()->second << std::endl; 
	return (0);
}