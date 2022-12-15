#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Uncorrect amount of argument" << std::endl;
		return (1);
	}
	(void) argv;

	std::string res = argv[1];

	if (res.length() == 1 && std::isdigit(res[0]))
	{
		std::cout << "is char " << std::endl;
	}
	// else if (!res.find('.') && res.end())
	std::cout << res[res.length() - 1 ] << std::endl;
	std::cout << res.end << std::endl;
	double	a = 0.10f;

	std::cout << "char : " << static_cast<char>(a) << std::endl;
	std::cout << "int : " << static_cast<int>(a) << std::endl;
	std::cout << "float : " << static_cast<float>(a) << std::endl;
	std::cout << "double : " << static_cast<double>(a) << "f" << std::endl;
	return (1);
}

// std::count

// Cas
// char : taille 1, !isdigit
// int : !find('.') && [last] == f
// if count (argv)
// float : if find(.) && [last] != f
// double : if find(.) && [last] != f