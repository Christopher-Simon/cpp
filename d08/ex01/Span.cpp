#include "Span.hpp" 

Span::Span(): _tab(), _max(0)
{
}

Span::Span(size_t N): _tab(), _max(N)
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
		this->_max = rhs._max;
		this->_tab = rhs._tab;
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

int Span::shortestSpan() {
	if (_tab.size() <= 1)
		throw (std::exception());
	std::sort(_tab.begin(), _tab.end());
	std::vector<int>diff;
	size_t t(0);
	for (std::vector<int>::const_iterator it = _tab.begin();
		it + 1 != _tab.end();
		++it, t++)
	{
		diff.push_back(*(it + 1) - *it);
	}
	std::vector<int>::const_iterator res = std::min_element(
		diff.begin(),
		diff.end()
	);
	return (*res);
}

int Span::longestSpan() {
	if (_tab.size() <= 1)
		throw (std::exception());
	std::vector<int>::const_iterator max = std::max_element(_tab.begin(), _tab.end());
	std::vector<int>::const_iterator min= std::min_element(_tab.begin(), _tab.end());
	int res = *max - *min;
	return (res);
}

void	Span::addNumber(int val)
{
	if (this->_tab.size() == this->_max)
		throw (std::exception());
	this->_tab.push_back(val);
}

void	Span::addRange(int val, size_t n)
{
	if (this->_tab.size() + n > this->_max)
		throw (std::exception());
	this->_tab.insert(_tab.end(), n, val);
}

void	Span::fillRandom()
{
	size_t t(0);
	for (std::vector<int>::const_iterator it = _tab.begin();
		t != _max;
		++it, t++)
	{
		addNumber(std::rand());
	}
}

void 	Span::print_tab(void)
{
	std::cout << GREEN << "print_tab" << RESET << std::endl;
	for (std::vector<int>::const_iterator it = _tab.begin();
	it  != _tab.end();
	++it)
		std::cout << "it = " << *it << std::endl;
}
