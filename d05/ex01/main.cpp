/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:23:59 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/10 15:44:53 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << std::endl << BLUE << "Basic test Form" << RESET << std::endl;
	{
		try {
			Form	Test;
			std::cout << Test << std::endl;
		}
		catch (Form::FormExceptions & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
		std::cout << std::endl << BLUE << "Basic test Form copy" << RESET << std::endl;
	{
		try {
			Form	Test("Test",50,49);
			std::cout << Test << std::endl;
			Form	copy(Test);
			std::cout << copy << std::endl;
			Form	equal;
			equal = copy;
			std::cout << equal << std::endl;
		}
		catch (Form::FormExceptions & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Basic failed value Form" << RESET << std::endl;
	{
		{
			try {
				std::cout << "Form	Test(\"test\", 0, 100)" << std::endl;
				Form	Test("test", 0, 100);
				std::cout << Test << std::endl;
			}
			catch (Form::FormExceptions & e)
			{
				std::cerr << RED << e.what() << RESET << std::endl;
			}
		}
		{
			try {
				std::cout << "Form	Test(\"test\", 100, 0)" << std::endl;
				Form	Test("test", 100, 0);
				std::cout << Test << std::endl;
			}
			catch (Form::FormExceptions & e)
			{
				std::cerr << RED << e.what() << RESET << std::endl;
			}
		}
		{
			try {
				std::cout << "Form	Test(\"test\", 151, 1)" << std::endl;
				Form	Test("test", 151, 1);
				std::cout << Test << std::endl;
			}
			catch (Form::FormExceptions & e)
			{
				std::cerr << RED << e.what() << RESET << std::endl;
			}
		}
		{
			try {
				std::cout << "Form	Test(\"test\", 1, 151)" << std::endl;
				Form	Test("test", 1, 151);
				std::cout << Test << std::endl;
			}
			catch (Form::FormExceptions & e)
			{
				std::cerr << RED << e.what() << RESET << std::endl;
			}
		}
	}
	std::cout << std::endl << BLUE << "Basic Signed Form" << RESET << std::endl;
	{
		try {
			Bureaucrat John("John", 50);
			Bureaucrat Bob("Bob", 150);
			Form	Test("Test", 50, 50);

			std::cout << Test << std::endl;
			std::cout << John << std::endl;
			Test.beSigned(John);
			std::cout << Test << std::endl;
			std::cout << Bob << std::endl;
			Test.beSigned(Bob);
			std::cout << Test << std::endl;
		}
		catch (Form::FormExceptions & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Failed Signed Form" << RESET << std::endl;
	{
		try {
			Bureaucrat John("John", 150);
			Form	Test("Test", 50, 150);

			std::cout << Test << std::endl;
			std::cout << John << std::endl;
			Test.beSigned(John);
			std::cout << Test << std::endl;
			std::cout << Test << std::endl;
		}
		catch (Form::FormExceptions & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Success bureaucrat signForm" << RESET << std::endl;
	{
		Bureaucrat	John("John", 50);
		Form		Pandas("Save Pandas", 50, 50);

		std::cout << John << std::endl;
		std::cout << Pandas << std::endl;
		John.signForm(Pandas);
		std::cout << Pandas << std::endl;
	}
	std::cout << std::endl << BLUE << "Failed bureaucrat signForm" << RESET << std::endl;
	{
		Bureaucrat	John("John", 150);
		Form		Pandas("Save Pandas", 50, 50);

		std::cout << John << std::endl;
		std::cout << Pandas << std::endl;
		John.signForm(Pandas);
		std::cout << Pandas << std::endl;
	}
	return (0);
}
