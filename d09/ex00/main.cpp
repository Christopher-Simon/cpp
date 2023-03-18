
#include <map>
#include "Date.hpp"
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::string	input(argv[1]);
	try {
		BitcoinExchange test(input);
	} catch (std::exception const & e )
	{
		std::cerr << RED << e.what() << RESET << std::endl;
		return (1);
	}
	// std::string input = argv[1];
	// Date	test(argv[1]);
	// BitcoinExchange();
	// char * test ="2012-02-14";
	return (0);
}