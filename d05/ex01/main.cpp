/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:23:59 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/12 20:09:00 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void)
{
	std::cout << std::endl << BLUE << "Basic test Form" << RESET << std::endl;
	{
		try {
			Form	Test;
			std::cout << Test << std::endl;
		}
		catch (Form::GradeTooHighException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooLowException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Basic Signed Form" << RESET << std::endl;
	{
		try {
			Bureaucrat John("John", 50);
			Form	Test("Test", 50, 50);
			std::cout << Test << std::endl;
			std::cout << John << std::endl;
			Test.beSigned(John);
			std::cout << Test << std::endl;
		}
		catch (Form::GradeTooHighException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooLowException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Failed Signed Form" << RESET << std::endl;
	{
		try {
			Bureaucrat John("John", 150);
			Form	Test("Test", 50, 50);
			std::cout << Test << std::endl;
			std::cout << John << std::endl;
			Test.beSigned(John);
			std::cout << Test << std::endl;
		}
		catch (Form::GradeTooHighException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooLowException & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	return (0);
}
