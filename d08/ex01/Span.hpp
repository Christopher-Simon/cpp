#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

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
		void	addNumber(int n);

	private:
		std::vector<int> _tab;
};

#endif