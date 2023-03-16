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

void	sortInPair(std::list<std::pair<int,int> > & pair)
{
	for (std::list<std::pair<int,int> >::iterator it = pair.begin();
	it != pair.end();
	++it
	)
	{
		if (it->first < it->second || it->second == -1)
			std::swap(it->first, it->second);
	}
}

void sortPair(std::list<std::pair<int,int> > & pair, std::list<int> & S)
{
	for (std::list<std::pair<int,int> >::iterator it = pair.begin();
	it != pair.end();
	++it
	)
	{
		if (it->first != -1)
			S.push_back(it->first);
	}
	S.sort();
	for (std::list<std::pair<int,int> >::iterator it = pair.begin();
	it != pair.end();
	++it
	)
	{
		if (S.front() == it->first)
		{
			S.push_front(it->second);
			pair.erase(it);
			break;
		}
	}
}

void	binaryInsert(std::list<int> & S,
	int value)
{
	int	L(0);
	int	R = S.size();
	int m = (L + R) / 2;
	std::list<int>::iterator it = S.begin();

	std::cout << "size = "	<< S.size() << std::endl;
	std::cout << "value = "	<< value << std::endl;
	std::cout << "m = "	<< m << std::endl;
	std::list<int>::iterator copy = it;

	std::cout << "analysed zone " << std::endl;
	for (int i = L;
	i < R;
	i++
	)
	{
		std::cout << *copy++ << " ";
	}

	std::cout << std::endl;

}

void	binaryInsertInS(std::list<std::pair<int,int> > & pair, std::list<int> & S)
{
	binaryInsert(S, pair.front().second);
}

void	PmergeMe::listSortPair(std::list<int> & X)
{
	std::list<std::pair<int,int> > pair;
	std::list<int> S;
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
	sortInPair(pair);
	std::cout << "SortInPair done :" << std::endl;
	printPair(pair);
	sortPair(pair, S);
	std::cout << "SortPair done :" << std::endl;
	printPair(pair);
	printList(S);
	std::cout << "Binary insert :" << std::endl;
	binaryInsertInS(pair, S);
}
