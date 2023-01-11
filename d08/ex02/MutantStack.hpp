#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <map>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

template<class T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef	typename Container::iterator iterator;
		MutantStack(): std::stack<T, Container>() {};
		MutantStack(MutantStack const & raw);
		~MutantStack(){};
		MutantStack & operator=(MutantStack const & rhs);

		iterator begin(){
			iterator res;
			res = this->c.begin();
			return (res);
		}
		iterator end(){
			iterator res;
			res = this->c.end();
			return (res);
		}
	private:
		
};

#endif