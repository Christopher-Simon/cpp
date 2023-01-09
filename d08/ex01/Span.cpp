#include "Span.hpp" 

Span::Span(): _tab()
{
}

Span::Span(size_t N): _tab(N)
{
}

Span::Span(Span const & raw): _tab()
{
	*this = raw;
}



Span::~Span()
{

}

//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

int Span::shortestSpan() {
	if (_tab.size() <= 1)
		throw (std::exception());
	int	res;
	for (std::vector<int>::const_iterator it = _tab.begin();
	it + 1 != _tab.end();
	++it)
	{
		// std::cout << "t = " << t << std::endl;
		std::cout << "it = " << *it << std::endl;
		// diff[t] = *(it + 1) - *it;
		// std::cout << diff[t] << std::endl;
	}
	std::sort(_tab.begin(), _tab.end());
	std::vector<int>diff(_tab.size() - 1);
	size_t t(0);
	for (std::vector<int>::const_iterator it = _tab.begin();
		it + 1 != _tab.end();
		// ++it, t++)
		++it, t++)
		{
			// std::cout << "t = " << t << std::endl;
			std::cout << "it = " << *it << std::endl;
			res = *it;
			// diff[t] = *(it + 1) - *it;
			// std::cout << diff[t] << std::endl;
		}
	// std::cout << std::endl;
	// std::vector<int>::const_iterator res =	std::min_element(diff.begin(), diff.end());
	return (res);
}

int Span::longestSpan() {
	if (_tab.size() <= 1)
		throw (std::exception());
	std::vector<int>::const_iterator max = std::max_element(_tab.begin(), _tab.end());
	std::vector<int>::const_iterator min= std::min_element(_tab.begin(), _tab.end());
	std::cout << "hello :" << *max << std::endl;
	std::cout << "hello :" << *min << std::endl;
	int res = *max - *min;
	return (res);
}

void	Span::addNumber(int n)
{
	if (this->_tab.size() == this->_tab.max_size())
		throw (std::exception());
	this->_tab.insert(n);
}
