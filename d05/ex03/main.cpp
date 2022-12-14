/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:23:59 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 15:53:02 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	{
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	John("John", 150);
		PresidentialPardonForm	*RedPanda = new	PresidentialPardonForm("Save Red Pandas");
		PresidentialPardonForm	*Copy = new PresidentialPardonForm(*RedPanda);
		PresidentialPardonForm	*CopyToSign = new PresidentialPardonForm("CopyToSign");
		*CopyToSign = *Copy;
		std::cout << *RedPanda << std::endl;
		std::cout << *Copy << std::endl;
		RedPanda->beSigned(John);
		std::cout << *RedPanda << std::endl;
		std::cout << *Copy << std::endl;
		RedPanda->beSigned(Bob);
		std::cout << *RedPanda << std::endl;
		std::cout << *Copy << std::endl;
		*Copy = *RedPanda;
		std::cout << *Copy << std::endl;
		std::cout << *CopyToSign << std::endl;
		*CopyToSign = *Copy;
		std::cout << *CopyToSign << std::endl;
		delete RedPanda;
		delete Copy;
		delete CopyToSign;
	}
	std::cout << std::endl << std::endl;
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
	std::cout << std::endl << std::endl;
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
	std::cout << std::endl << std::endl;
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
	{
		Intern	Clodagh;
		AForm	*Form;
		Bureaucrat	Jack("Jack",1);
		
		Form = Clodagh.makeForm("shrubbery creation", "tagueule");
		Jack.signForm(*Form);
		Form->execute(Jack);
	}
	return (0);
}
