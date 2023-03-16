#include "PmergeMe.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"



void	binarySort(std::list<int> & X)
{
	std::list<int>::iterator it = X.begin();
	(void)it;
}

void	listPairSort(std::list<int> & X)
{
	std::list<int>::iterator prev;
	std::list<int>::iterator tmp;

	std::cout << RED << "__Pair Sort __" << RESET << std::endl;
	for(
		std::list<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		prev = it;
		++it;
		if (it == X.end())
		{
			std::cout << "alone : " << *prev << std::endl;
			break ;
		}
		std::cout << "prev : " << *prev << "| it : " << *it << std::endl;
		if (*prev > *it)
		{
			tmp = it;
			X.insert(prev, *it);
			X.erase(tmp);
			it = prev;
		}
	}
	std::cout << RED << "__Pair Sort Ended__" << RESET << std::endl;
}

void arrangePairs(std::list<int> & X)
{
	std::list<int>	S;
	std::list<	
		std::pair<
			std::list<int>::iterator, 
			std::list<int>::iterator
		>
	>	tmp;

	std::list<int>::iterator prev;
	// std::list<int>::iterator tmp;
	(void)X;
	std::cout << RED << "__Arrange Pairs__" << RESET << std::endl;
	int	i = 0;
	for (
		std::list<int>::iterator it = X.begin();
		it != X.end();
		++it, i++
	)
	{
		
	}
	std::cout << RED << "__Arrange Pairs Done__" << RESET << std::endl;
}

int	main(int argc, char **argv)
{
	std::list<int> X;
	if (argc != 2)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (1);
	}
	try {
		PmergeMe sort(argv[1]);
	} catch (PmergeMe::PmergeMeException & e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	// std::string	input(argv[1]);
	// fillList(argv[1], X);
	// printList(X);
	// listPairSort(X);
	// arrangePairs(X);
	// std::list<int> toSort {5, 2, 3, 4, 7, 6};
	// std::list<int> nums {1, 2, 4, 8, 16};

	return (0);
}
