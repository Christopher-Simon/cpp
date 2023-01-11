#include "MutantStack.hpp"

int	main(void)
{
	size_t t(0);

	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "Easy Stack"<< RESET << std::endl;
	{
		std::stack<int>	test;
		MutantStack<int> test2;

		test.push(1);
		test2.push(1);
		std::cout << "Push 1 + top : " <<  test.top() << std::endl;
		std::cout << "Push 1 + top : " <<  test2.top() << std::endl;
		test.push(2);
		test2.push(2);
		std::cout << "Push 2 + top : " <<  test.top() << std::endl;
		std::cout << "Push 2 + top : " << test2.top() << std::endl;
		test.pop();
		test2.pop();
		std::cout << "Pop + top : " << test.top() << std::endl;
		std::cout << "Pop + top : " << test2.top() << std::endl;
		std::cout << "Size : "<< test.size() << std::endl;
		std::cout << "Size : "<< test2.size() << std::endl;
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "Stack vector"<< RESET << std::endl;
	{
		std::stack<int, std::vector<int> >	test;
		MutantStack<int, std::vector<int> > test2;

		test.push(1);
		test2.push(1);
		std::cout << "Push 1 + top : " <<  test.top() << std::endl;
		std::cout << "Push 1 + top : " <<  test2.top() << std::endl;
		test.push(2);
		test2.push(2);
		std::cout << "Push 2 + top : " <<  test.top() << std::endl;
		std::cout << "Push 2 + top : " << test2.top() << std::endl;
		test.pop();
		test2.pop();
		std::cout << "Pop + top : " << test.top() << std::endl;
		std::cout << "Pop + top : " << test2.top() << std::endl;
		std::cout << "Size : "<< test.size() << std::endl;
		std::cout << "Size : "<< test2.size() << std::endl;
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "Stack vector"<< RESET << std::endl;
	{
		MutantStack<int, std::vector<int> > test;

		test.push(1);
		test.push(2);
		MutantStack<int, std::vector<int> >::iterator it = test.begin();
		MutantStack<int, std::vector<int> >::iterator ite = test.end();
		for ( ; it != ite; ++it)
			std::cout << *it<<std::endl;
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "Stack vector empty"<< RESET << std::endl;
	{
		MutantStack<int, std::vector<int> > test;

		MutantStack<int, std::vector<int> >::iterator it = test.begin();
		MutantStack<int, std::vector<int> >::iterator ite = test.end();
		for ( ; it != ite; ++it)
			std::cout << *it<<std::endl;
	}
		std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "Easy Stack "<< RESET << std::endl;
	{
		MutantStack<int> test;

		test.push(1);
		test.push(2);
		MutantStack<int>::iterator it = test.begin();
		MutantStack<int>::iterator ite = test.end();
		for ( ; it != ite; ++it)
			std::cout << *it<<std::endl;
	}
	std::cout << std::endl << GREEN << "Test N : " << t++ << RESET << std::endl;
	std::cout << BLUE << "Easy Stack  empty"<< RESET << std::endl;
	{
		MutantStack<int> test;

		MutantStack<int>::iterator it = test.begin();
		MutantStack<int>::iterator ite = test.end();
		for ( ; it != ite; ++it)
			std::cout << *it<<std::endl;
	}
}