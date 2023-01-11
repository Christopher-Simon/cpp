#include "Bureaucrat.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void)
{
	std::cout << std::endl << BLUE << "Basic test" << RESET << std::endl;
	{
		try {
			Bureaucrat	John;
			Bureaucrat	Steve("steve", 150);
			Bureaucrat	Steve_2(Steve);
			Bureaucrat	Bob("Bob", 1);

			std::cout << John << std::endl;
			std::cout << Steve << std::endl;
			std::cout << Steve_2 << std::endl;
			std::cout << Bob << std::endl;
			Bob = Steve_2;
			std::cout << Bob << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Failure John High (0)" << RESET << std::endl;
	{
		try {
			Bureaucrat	Bob;
			Bureaucrat	John("John", 0);
			std::cout << John << std::endl;
			std::cout << Bob << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Failure John Low (151)" << RESET << std::endl;
	{
		try {
			Bureaucrat	Bob;
			Bureaucrat	John("John", 151);
			std::cout << John << std::endl;
			std::cout << Bob << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Correct increment and decrement" << RESET << std::endl;
	{
		try {
			Bureaucrat	Bob("Bob", 3);
			std::cout << "Base " << Bob << std::endl;
			Bob.incrGrade();
			std::cout << "After incr " << Bob << std::endl;
			Bob.decrGrade();
			std::cout << "After decr " << Bob << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Incorrect decrement" << RESET << std::endl;
	{
		try {
			Bureaucrat	Bob("Bob", 150);
			std::cout << "Base " << Bob << std::endl;
			Bob.decrGrade();
			std::cout << "After decr " << Bob << std::endl;
			Bob.incrGrade();
			std::cout << "After incr " << Bob << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Incorrect increment" << RESET << std::endl;
	{
		try {
			Bureaucrat	Bob("Bob", 1);
			std::cout << Bob << std::endl;
			Bob.incrGrade();
			std::cout << Bob << std::endl;
			Bob.decrGrade();
			std::cout << Bob << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	return (0);
}
