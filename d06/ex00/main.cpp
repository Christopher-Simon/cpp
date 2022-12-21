#include <iostream>
#include <string>
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Uncorrect amount of argument" << std::endl;
		return (1);
	}
	(void) argv;
	std::string res = argv[1];
	if (res.length() == 1 && std::isprint(res[0]))
	{
		std::cout << "is char " << std::endl;
		return (0);
	}
	if (res.length() == 3 && res[0] == '\'' && res[2] == '\'' && std::isprint(res[0]))
	{
		std::cout << "is char " << std::endl;
		return (0);
	}
	//test for char

	for (size_t	i = 0; res[i] ; i++)
	{
		if (std::isalpha(res[i]) && res[res.length() - 1] != 'f')
		{
			std::cout << "incorrect " << std::endl;
			return (1);
		}
	}
	for (size_t	i = 0; res[i] ; i++)
	{
		if (std::isalpha(res[i]) && res[res.length() - 1] != 'f')
		{
			std::cout << "incorrect " << std::endl;
			return (1);
		}
	}
	//check multiple dot
	double d = std::atof(res.c_str());
	std::cout << d << std::endl;
	// valid char

	std::cout << res[res.length() - 1 ] << std::endl;

	std::cout << "char : " << static_cast<char>(d) << std::endl;
	std::cout << "int : " << static_cast<int>(d) << std::endl;
	std::cout << "float : " << static_cast<float>(d) << std::endl;
	std::cout << "double : " << static_cast<double>(d) << "f" << std::endl;
	return (1);
}

// std::count

// Cas
// char : taille 1, !isdigit
// int : !find('.') && [last] == f
// if count (argv)
// float : if find(.) && [last] != f
// double : if find(.) && [last] != f
