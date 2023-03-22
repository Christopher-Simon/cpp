#include "PmergeMe.hpp"


int	main(int argc, char **argv)
{
	std::list<int> X;
	if (argc < 2)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (1);
	}
	if (argc == 2)
	{
		std::cout << RED << "Not much of a list to sort, is it ?" << RESET << std::endl;
		return (1);
	}
	try {
		PmergeMe sort(&argv[1], argc - 1);
	} catch (PmergeMe::PmergeMeException & e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return (0);
}
