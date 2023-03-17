#include <iostream>
#include <fstream>
#include <map>

int	main(void)
{
	std::ifstream	ifs;
	std::string		line;
	std::map<std::string, std::string>		db;

	ifs.open("data.csv");
	if (ifs.fail())
		return (std::cerr << "Error file opening" << std::endl, 
		1);
	for (; !ifs.eof(); )
	{
		std::getline(ifs, line, ',');
		std::cout << line << std::endl;
		if (!ifs.eof() && ifs.fail())
			return (std::cerr << "Error getline" << std::endl,
			ifs.close(),
			1);
	}
	return (0);
}