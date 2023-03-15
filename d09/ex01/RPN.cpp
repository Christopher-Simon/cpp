#include "RPN.hpp" 

RPN::RPN(): _calcu()
{
	throw (RPNExceptions());
}


bool	isSign(char c)
{
	if (c == '+' || 
	c == '-' ||
	c == '/' ||
	c == '*')
		return (true);
	return (false);
}

void	RPN::_calculator(std::stack<int> & _calcu, char ope)
{
	if (_calcu.size() < 2)
		throw (RPNExceptions());
	int b = _calcu.top();
	_calcu.pop();
	int a = _calcu.top();
	_calcu.pop();
	switch (ope)
	{
		case '+':
			_calcu.push(a + b);
			break ;
		case '-':
			_calcu.push(a - b);
			break ;
		case '*':
			_calcu.push(a * b);
			break ;
		case '/':
			if (b == 0)
				throw (RPNExceptions());
			_calcu.push(a / b);
			break ;
		default:
			throw (RPNExceptions());
	}
}

void	printStack(std::stack<int> stk)
{
	while (!stk.empty())
	{
		std::cout << stk.top() << ' ';
		stk.pop();
	}
	std::cout << std::endl;
}

RPN::RPN(std::string str): _calcu()
{
	for (std::string::iterator it = str.begin(); it != str.end(); ++it )
	{
		if (isdigit(*it))
			_calcu.push(*it - 48);
		else if (isSign(*it) == true)
			RPN::_calculator(_calcu, *it);
		else if (*it == ' ')
			;
		else
			throw (RPNExceptions());
		// printStack(_calcu);
	}
	if (_calcu.size() != 1)
		throw (RPNExceptions());
	printStack(_calcu);
}

RPN::RPN(RPN const & raw)
{
	*this = raw;
}


RPN::~RPN()
{
}
//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

RPN & RPN::operator=(RPN const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//

const char* RPN::RPNExceptions::what() const throw()
{
	return ("ERROR");
}

//*****************FONCTIONS*****************//

