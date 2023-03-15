#include <iostream>
#include <fstream>

int	main(void)
{
	std::ifstream	ifs;
	std::string		line;

	ifs.open("data.csv");
	if (ifs.fail())
		return (std::cerr << "Error file opening" << std::endl, 
		1);
	std::getline(ifs, line);
	if (!ifs.eof() && ifs.fail())
		return (std::cerr << "Error getline" << std::endl,
		ifs.close(),
		1);
	std::cout << line << std::endl;
	return (0);
}