/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:33:48 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/13 19:58:25 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp" 
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & raw)
{
	*this = raw;
}


Intern::~Intern()
{
}
//*****************ACCESSORS*****************//


//************OVERLOAD OPERATORS*************//

Intern & Intern::operator=(Intern const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

//****************EXCEPTIONS*****************//


AForm * createFormPres(std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm * createFormRobot(std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm * createFormShrub(std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm *  Intern::makeForm(std::string name, std::string target){
	AForm *	(Intern::*f[3])(std::string target) = {
		&Intern::createFormPres,
		&Intern::createFormRobot,
		&Intern::createFormShrub
	};
	(void)f;
	(void)name;
	(void)target;
	// std::string	sale[3] = {
	// 	"robotomy request",
	// 	"presidential pardon",
	// 	"shrubbery creation"
	// };
	// AForm	* ptr;
	// for (int i = 0; i < 3; i++) { 
	// 	if (!sale[i].compare(name))
	// 	{	
	// 		ptr = (this->*f[i])(target);
	// 		return (ptr);
	// 	}
	// }
	std::cout << "Wrong level" << std::endl;
	return (NULL);
}
