#include "PmergeMe.hpp" 

PmergeMe::PmergeMe()
{
	std::cout << "Empty array" << std::endl;
	throw (PmergeMeException());
}

PmergeMe::PmergeMe(char *input)
{
	std::list<int> X;

	fillList(input, X);
	printList(X);
	checkDouble(X);
	listSortPair(X);
}

PmergeMe::PmergeMe(PmergeMe const & raw)
{
	*this = raw;
}


PmergeMe::~PmergeMe()
{
}

//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//

const char *	PmergeMe::PmergeMeException::what() const throw()
{
	return ("ERROR");
}

//*****************FONCTIONS LIST*****************//

void	PmergeMe::fillList(char *input, std::list<int> & X)
{
	char * pEND;

	for (
		long i = std::strtod(input, &pEND);
		input != pEND;
		i =  std::strtod(input, &pEND)
	)
	{
		input = pEND;
		if (errno == ERANGE || 
			i < 0 ||
			i > 2147483647
		)
		{
			std::cout << "range error" << std::endl;
			throw (PmergeMeException());
		}
		X.push_back(i);
	}
}

void	PmergeMe::printList(std::list<int> X)
{
	for (std::list<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

void	PmergeMe::checkDouble(std::list<int> X)
{
	for (std::list<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		std::list<int>::iterator tmp = it;
		tmp++;
		for (;
			tmp != X.end();
			++tmp
		)
		{
			if (*tmp == *it)
			{
				std::cout << "Duplicates in the input" << std::endl;
				throw (PmergeMeException());
			}
		}
	}
	std::cout << std::endl;
}

void	printPair(std::list<std::pair<int,int> > pair)
{
	for (std::list<std::pair<int,int> >::iterator it = pair.begin();
		it != pair.end();
		++it
	)
	{
		std::cout << "[" << it->first << ", " << it->second << "]" << std::endl;
	}
}

void	sortPair(std::list<std::pair<int,int> > pair)
{
	
}

void	PmergeMe::listSortPair(std::list<int> & X)
{
	std::list<std::pair<int,int> > pair;
	std::list<int>::iterator prev;

	for (std::list<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		prev = it;
		if (++it != X.end())
			pair.push_back(std::make_pair(*prev, *it));
		else
		{
			pair.push_back(std::make_pair(*prev, -1));
			break;
		}
	}
	printPair(pair);
	for (std::list<std::pair<int,int> >::iterator it = pair.begin();
	it != pair.end();
	++it
	)
	{
		std::cout << "[" << it->first << ", " << it->second << "]" << std::endl;
	}

}
