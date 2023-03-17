#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <utility>
#include <cstdlib>
#include <iterator>
#include <cerrno>
#include <ctime>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

#define STEPS 0
#define BINARY_DETAIL 0


class PmergeMe 
{
	public:
		PmergeMe();
		PmergeMe(char **input, int argc);
		PmergeMe(PmergeMe const & raw);
		~PmergeMe();
		PmergeMe & operator=(PmergeMe const & rhs);
		class PmergeMeException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		void	fill(char **input, std::deque<int> & X, int argc);
		void	fill(char **input, std::vector<int> & X, int argc);
		void	print(std::deque<int> X);
		void	print(std::vector<int> X);
		void	print(std::deque<int> X, int flag);
		void	print(std::vector<int> X, int flag);
		void	checkDouble(std::deque<int> X);
		void	checkDouble(std::vector<int> X);
		void	SortPair(std::deque<int> & X);
		void	SortPair(std::vector<int> & X);
};

#endif