#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <cstdlib>
#include <ctime>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

class Span 
{
	public:
		Span();
		Span(size_t N);
		Span(Span const & raw);
		~Span();
		Span & operator=(Span const & rhs);
		int		shortestSpan();
		int		longestSpan();
		void	addNumber(int val);
		void	fillRandom();
		void	addRange(int val, size_t n);
		void 	print_tab(void);

	private:
		std::vector<int> _tab;
		size_t _max;
};

#endif