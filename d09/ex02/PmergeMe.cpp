#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "Empty array" << std::endl;
	throw (PmergeMeException());
}

PmergeMe::PmergeMe(char **input, int argc)
{
	std::deque<int> Xd;
	std::vector<int> Xv;

	fill(input, Xd, argc);
	fill(input, Xv, argc);
	checkDouble(Xd);
	std::cout << "Before: ";
	if (Xd.size() <= 5)
		print(Xd);
	else
		print(Xd, 5);
	clock_t start = clock();
	SortPair(Xd);
	clock_t end = clock();
	double time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of : " << Xd.size() << " elements with std::deque : "\
	<< time << " us" << std::endl;
	start = clock();
	SortPair(Xv);
	end = clock();
	time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of : " << Xd.size() << " elements with std::vector : "\
	<< time << " us" << std::endl;
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

void	PmergeMe::fill(char **input, std::deque<int> & X, int argc)
{
	for (int i = 0; i < argc; i++)
	{
		std::string	verif = input[i];
		for (std::string::iterator it = verif.begin();
			it != verif.end();
			++it
		)
			if (!std::isdigit(*it))	
			{
				std::cout << "Non-Digit in input" << std::endl;
				throw (PmergeMeException());
			}
				
		long res = std::atol(input[i]);
		if (res < 0 || res > 2147483647 || verif.length() > 10)
		{
			std::cout << "range error" << std::endl;
			throw (PmergeMeException());
		}
		X.push_back(res);
	}
}

void	PmergeMe::fill(char **input, std::vector<int> & X, int argc)
{
	for (int i = 0; i < argc; i++)
	{
		std::string	verif = input[i];
		long res = std::atol(input[i]);
		if (res < 0 || res > 2147483647 || verif.length() > 10)
		{
			std::cout << "range error" << std::endl;
			throw (PmergeMeException());
		}
		X.push_back(res);
	}
}

void	PmergeMe::print(std::deque<int> X)
{
	for (std::deque<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

void	PmergeMe::print(std::vector<int> X)
{
	for (std::vector<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

void	PmergeMe::print(std::deque<int> X, int flag)
{
	int i(0);
	for (std::deque<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		i++;
		if (i == flag)
		{
			std::cout << "[...]"; 
			break ;
		}
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

void	PmergeMe::print(std::vector<int> X, int flag)
{
	int i(0);
	for (std::vector<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		i++;
		if (i == flag)
		{
			std::cout << "[...]"; 
			break ;
		}
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

void	PmergeMe::checkDouble(std::deque<int> X)
{
	for (std::deque<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		std::deque<int>::iterator tmp = it;
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

void	PmergeMe::checkDouble(std::vector<int> X)
{
	for (std::vector<int>::iterator it = X.begin();
		it != X.end();
		++it
	)
	{
		std::vector<int>::iterator tmp = it;
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

void	printPair(std::deque<std::pair<int,int> > pair)
{
	for (std::deque<std::pair<int,int> >::iterator it = pair.begin();
		it != pair.end();
		++it
	)
	{
		std::cout << "[" << it->first << ", " << it->second << "]" << std::endl;
	}
}

void	printPair(std::vector<std::pair<int,int> > pair)
{
	for (std::vector<std::pair<int,int> >::iterator it = pair.begin();
		it != pair.end();
		++it
	)
	{
		std::cout << "[" << it->first << ", " << it->second << "]" << std::endl;
	}
}

void	sortInPair(std::deque<std::pair<int,int> > & pair)
{
	for (std::deque<std::pair<int,int> >::iterator it = pair.begin();
	it != pair.end();
	++it
	)
	{
		if (it->first < it->second || it->second == -1)
			std::swap(it->first, it->second);
	}
}

void	sortInPair(std::vector<std::pair<int,int> > & pair)
{
	for (std::vector<std::pair<int,int> >::iterator it = pair.begin();
	it != pair.end();
	++it
	)
	{
		if (it->first < it->second || it->second == -1)
			std::swap(it->first, it->second);
	}
}

void sortPair(std::deque<std::pair<int,int> > & pair, std::deque<int> & S)
{
	for (std::deque<std::pair<int,int> >::iterator it = pair.begin();
	it != pair.end();
	++it
	)
	{
		if (it->first != -1)
			S.push_back(it->first);
	}
	std::sort(S.begin(), S.end());
	for (std::deque<std::pair<int,int> >::iterator it = pair.begin();
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

void sortPair(std::vector<std::pair<int,int> > & pair, std::vector<int> & S)
{
	for (std::vector<std::pair<int,int> >::iterator it = pair.begin();
	it != pair.end();
	++it
	)
	{
		if (it->first != -1)
			S.push_back(it->first);
	}
	std::sort(S.begin(), S.end());
	for (std::vector<std::pair<int,int> >::iterator it = pair.begin();
	it != pair.end();
	++it
	)
	{
		if (S.front() == it->first)
		{
			S.insert(S.begin(), it->second);
			pair.erase(it);
			break;
		}
	}
}

void insertAtPos(std::deque<int> & X, int value, int pos)
{
	std::deque<int>::iterator it = X.begin();
	for (
		int i = 0;
		i < pos;
		i++
	)
	{
		it++;
	}
	X.insert(it, value);
}

void insertAtPos(std::vector<int> & X, int value, int pos)
{
	std::vector<int>::iterator it = X.begin();
	for (
		int i = 0;
		i < pos;
		i++
	)
	{
		it++;
	}
	X.insert(it, value);
}

void	binaryInsert(std::deque<int> & S,
	int value, int binome)
{
	int	R(0);
	if (binome != -1)
	{
		for (
			std::deque<int>::iterator it = S.begin();
			*it != binome;
			++it
		)
			R++;
	}
	else 
		R = S.size() - 1;
	int	L(0);
	int m;

	if (BINARY_DETAIL)
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "value: " << value << " linked to : " << binome << std::endl;
	}
	while (L < R)
	{
		m = (L + R) / 2;
		if (BINARY_DETAIL)
		{
			std::cout << std::endl;
			std::cout << "L: " << L << std::endl;
			std::cout << "R: " << R << std::endl;
			std::cout << "m : " << m << std::endl;
			std::cout << "analysed zone " << std::endl;
		}
		for (int i = L;
		i < R;
		i++
		)
		if (BINARY_DETAIL)
		{
			std::cout << S[i] << " ";
			std::cout << std::endl;
		}
		if (R - L == 1)
		{
			if (S[m] > value)
			{
				if (BINARY_DETAIL)
					std::cout << value << " is before " << S[m] << " pos : " << m << std::endl;
				insertAtPos(S, value, m);
			}
			else
			{
				if (BINARY_DETAIL)
					std::cout << value << " is after " << S[m] << " pos : " << m << std::endl;
				insertAtPos(S, value, m + 1);
			}
			break;
		}
		if (S[m] <= value)
			L = m;
		else
			R = m;
		// getwchar();
	}
}

void	binaryInsert(std::vector<int> & S,
	int value, int binome)
{
	int	R(0);
	if (binome != -1)
	{
		for (
			std::vector<int>::iterator it = S.begin();
			*it != binome;
			++it
		)
			R++;
	}
	else 
		R = S.size() - 1;
	int	L(0);
	int m;

	if (BINARY_DETAIL)
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "value: " << value << " linked to : " << binome << std::endl;
	}
	while (L < R)
	{
		m = (L + R) / 2;
		if (BINARY_DETAIL)
		{
			std::cout << std::endl;
			std::cout << "L: " << L << std::endl;
			std::cout << "R: " << R << std::endl;
			std::cout << "m : " << m << std::endl;
			std::cout << "analysed zone " << std::endl;
		}
		for (int i = L;
		i < R;
		i++
		)
		if (BINARY_DETAIL)
		{
			std::cout << S[i] << " ";
			std::cout << std::endl;
		}
		if (R - L == 1)
		{
			if (S[m] > value)
			{
				if (BINARY_DETAIL)
					std::cout << value << " is before " << S[m] << " pos : " << m << std::endl;
				insertAtPos(S, value, m);
			}
			else
			{
				if (BINARY_DETAIL)
					std::cout << value << " is after " << S[m] << " pos : " << m << std::endl;
				insertAtPos(S, value, m + 1);
			}
			break;
		}
		if (S[m] <= value)
			L = m;
		else
			R = m;
		// getwchar();
	}
}

void	binaryInsertInS(std::deque<std::pair<int,int> > & pair, std::deque<int> & S)
{
	for (std::deque<std::pair<int,int> >::iterator it = pair.begin();
		it != pair.end();
		++it
	)
		binaryInsert(S, it->second, it->first);
}

void	binaryInsertInS(std::vector<std::pair<int,int> > & pair, std::vector<int> & S)
{
	for (std::vector<std::pair<int,int> >::iterator it = pair.begin();
		it != pair.end();
		++it
	)
		binaryInsert(S, it->second, it->first);
}

bool isSorted(std::deque<int> S)
{
	int cmp(0);

	for (
		std::deque<int>::iterator it = S.begin();
		it != S.end();
		++it
	)
	{	
		if (cmp > *it)
			return (false);
		cmp = *it;
	}
	return (true);
}

bool isSorted(std::vector<int> S)
{
	int cmp(0);

	for (
		std::vector<int>::iterator it = S.begin();
		it != S.end();
		++it
	)
	{	
		if (cmp > *it)
			return (false);
		cmp = *it;
	}
	return (true);
}

void	PmergeMe::SortPair(std::deque<int> & X)
{
	std::deque<std::pair<int,int> > pair;
	std::deque<int> S;
	std::deque<int>::iterator prev;

	if (STEPS)
	{
		if (isSorted(X))
			std::cout << GREEN << "Is sorted" << RESET << std::endl;
		else
			std::cout << RED << "Is not sorted" << RESET << std::endl;
	}
	for (std::deque<int>::iterator it = X.begin();
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
	if (STEPS)
	{
		printPair(pair);
	}
		sortInPair(pair);
	if (STEPS)
	{
		std::cout << "SortInPair done :" << std::endl;
		printPair(pair);
	}
	sortPair(pair, S);
	if (STEPS)
	{
		std::cout << "SortPair done :" << std::endl;
		printPair(pair);
		print(S);
		std::cout << "Binary insert :" << std::endl;
	}
	binaryInsertInS(pair, S);
	std::cout << "After:  ";
	if (S.size() <= 5)
		print(S);
	else
		print(S, 5);
	if (STEPS)
	{
		print(S);
	}
	if (isSorted(S))
		std::cout << GREEN << "Is sorted" << RESET << std::endl;
	else
		std::cout << RED << "Is not sorted" << RESET << std::endl;
}

void	PmergeMe::SortPair(std::vector<int> & X)
{
	std::vector<std::pair<int,int> > pair;
	std::vector<int> S;
	std::vector<int>::iterator prev;

	if (STEPS)
	{
		if (isSorted(X))
			std::cout << GREEN << "Is sorted" << RESET << std::endl;
		else
			std::cout << RED << "Is not sorted" << RESET << std::endl;
	}
	for (std::vector<int>::iterator it = X.begin();
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
	if (STEPS)
	{
		printPair(pair);
	}
		sortInPair(pair);
	if (STEPS)
	{
		std::cout << "SortInPair done :" << std::endl;
		printPair(pair);
	}
	sortPair(pair, S);
	if (STEPS)
	{
		std::cout << "SortPair done :" << std::endl;
		printPair(pair);
		print(S);
		std::cout << "Binary insert :" << std::endl;
	}
	binaryInsertInS(pair, S);
	std::cout << "After:  ";
	if (S.size() <= 5)
		print(S);
	else
		print(S, 5);
	if (STEPS)
	{
		print(S);
	}
	if (isSorted(S))
		std::cout << GREEN << "Is sorted" << RESET << std::endl;
	else
		std::cout << RED << "Is not sorted" << RESET << std::endl;
}
