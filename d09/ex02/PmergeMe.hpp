#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <utility>
#include <cstdlib>
#include <iterator>
#include <cerrno>

class PmergeMe 
{
	public:
		PmergeMe();
		PmergeMe(char *input);
		PmergeMe(PmergeMe const & raw);
		~PmergeMe();
		PmergeMe & operator=(PmergeMe const & rhs);
		class PmergeMeException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		void	fillList(char *input, std::list<int> & X);
		void	printList(std::list<int> X);
		void	checkDouble(std::list<int> X);
		void	listSortPair(std::list<int> & X);
};

#endif