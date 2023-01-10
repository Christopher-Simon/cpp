/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:23:59 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/10 15:18:51 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << std::endl << BLUE << "Tests canoniques" << RESET << std::endl;
	{
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	John("John", 150);
		PresidentialPardonForm	*RedPanda = new	PresidentialPardonForm("Save Red Pandas");
		PresidentialPardonForm	*Copy = new PresidentialPardonForm(*RedPanda);
		PresidentialPardonForm	*CopyToSign = new PresidentialPardonForm("CopyToSign");
		*CopyToSign = *Copy;
		try{
			std::cout << *RedPanda << std::endl;
			std::cout << *Copy << std::endl;
			RedPanda->beSigned(John);
		}
		catch (Bureaucrat::BureaucratExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (AForm::AFormExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		
		try {
			std::cout << *RedPanda << std::endl;
			std::cout << *Copy << std::endl;
			RedPanda->beSigned(Bob);
		}
		catch (Bureaucrat::BureaucratExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (AForm::AFormExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		try {
			std::cout << *RedPanda << std::endl;
			std::cout << *Copy << std::endl;
			*Copy = *RedPanda;
		}
		catch (Bureaucrat::BureaucratExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (AForm::AFormExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		std::cout << *Copy << std::endl;
		std::cout << *CopyToSign << std::endl;
		*CopyToSign = *Copy;
		std::cout << *CopyToSign << std::endl;
		delete RedPanda;
		delete Copy;
		delete CopyToSign;
	}
	std::cout << std::endl << BLUE << "Tests ShrubberyCreationForm" << RESET << std::endl;
	{
		try 
		{
			ShrubberyCreationForm Jose("Jose");
			Bureaucrat	Jack("Jack",1);
			Bureaucrat	John("John",150);
			std::cout << Jose << std::endl;
			std::cout << Jack << std::endl;
			Jack.signForm(Jose);
			std::cout << Jose << std::endl;
			std::cout << Jose << std::endl;
			Jose.execute(Jack);
			Jose.execute(Jack);
			Jose.execute(Jack);
			std::cout << Jose << std::endl;
			std::cout << John << std::endl;
			Jose.execute(John);
			std::cout << John << std::endl;
		}
		catch (Bureaucrat::BureaucratExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (AForm::AFormExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Tests RobotomyRequestForm" << RESET << std::endl;
	{
		try 
		{
			RobotomyRequestForm Jose("Jose");
			Bureaucrat	Jack("Jack",1);
			Bureaucrat	John("John",150);
			std::cout << Jose << std::endl;
			std::cout << Jack << std::endl;
			Jack.signForm(Jose);
			std::cout << Jose << std::endl;
			std::cout << Jose << std::endl;
			Jose.execute(Jack);
			Jose.execute(Jack);
			Jose.execute(Jack);
			std::cout << Jose << std::endl;
			std::cout << John << std::endl;
			Jose.execute(John);
			std::cout << John << std::endl;
		}
		catch (Bureaucrat::BureaucratExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (AForm::AFormExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Tests PresidentialPardonForm" << RESET << std::endl;
	{
		try 
		{
			PresidentialPardonForm Jose("Jose");
			Bureaucrat	Jack("Jack",1);
			Bureaucrat	John("John",150);
			std::cout << Jose << std::endl;
			std::cout << Jack << std::endl;
			Jack.signForm(Jose);
			std::cout << Jose << std::endl;
			std::cout << Jose << std::endl;
			Jose.execute(Jack);
			std::cout << Jose << std::endl;
			std::cout << John << std::endl;
			Jose.execute(John);
			std::cout << John << std::endl;
		}
		catch (Bureaucrat::BureaucratExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (AForm::AFormExceptions & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl << BLUE << "Tests execute & sign Form by Bureaucrat" << RESET << std::endl;
	{
		Bureaucrat Jack("Jack",1);
		Bureaucrat	John("John",150);
		PresidentialPardonForm Jose("Jose");

		std::cout << John << std::endl;
		John.signForm(Jose);
		std::cout << Jose << std::endl;
		std::cout << Jack << std::endl;
		Jack.executeForm(Jose);
		std::cout << Jose << std::endl;
		Jack.signForm(Jose);
		std::cout << Jose << std::endl;
		Jack.signForm(Jose);
		std::cout << Jose << std::endl;
		Jack.executeForm(Jose);
	}
	std::cout << std::endl << BLUE << "Tests execute & sign Form by Bureaucrat" << RESET << std::endl;
	{
		Bureaucrat Jack("Jack",1);
		Bureaucrat	John("John",150);
		RobotomyRequestForm Jose("Jose");

		std::cout << John << std::endl;
		John.signForm(Jose);
		std::cout << Jose << std::endl;
		std::cout << Jack << std::endl;
		Jack.executeForm(Jose);
		std::cout << Jose << std::endl;
		Jack.signForm(Jose);
		std::cout << Jose << std::endl;
		Jack.signForm(Jose);
		std::cout << Jose << std::endl;
		Jack.executeForm(Jose);
	}
	std::cout << std::endl << BLUE << "Tests execute & sign Form by Bureaucrat" << RESET << std::endl;
	{
		Bureaucrat Jack("Jack",1);
		Bureaucrat	John("John",150);
		ShrubberyCreationForm Jose("Jose");

		std::cout << John << std::endl;
		John.signForm(Jose);
		std::cout << Jose << std::endl;
		std::cout << Jack << std::endl;
		Jack.executeForm(Jose);
		std::cout << Jose << std::endl;
		Jack.signForm(Jose);
		std::cout << Jose << std::endl;
		Jack.signForm(Jose);
		std::cout << Jose << std::endl;
		Jack.executeForm(Jose);
	}
	return (0);
}
