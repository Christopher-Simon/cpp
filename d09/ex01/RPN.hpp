#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <list>
#include <map>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

typedef std::stack<int, std::list<int> > t_stack; 

class RPN 
{
	public:
		RPN();
		RPN(std::string str);
		RPN(RPN const & raw);
		~RPN();
		RPN & operator=(RPN const & rhs);

		class	RPNExceptions : public std::exception 
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		t_stack	_calcu;
		void _calculator(t_stack & _calcu, char ope);

};

#endif
