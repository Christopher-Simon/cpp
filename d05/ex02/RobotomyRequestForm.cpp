/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:27:43 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/10 14:11:01 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp" 
#include <cmath>
#include <cstdlib>
#include <ctime>

typedef	RobotomyRequestForm RRF;

RRF::RobotomyRequestForm():
AForm("Default", "Default RobotomyRequest Form", 72, 45)
{
	std::srand(std::time(NULL));
}

RRF::RobotomyRequestForm(std::string target):
AForm(target, "RobotomyRequest Form", 72, 45)
{
	std::srand(std::time(NULL));
}

RRF::RobotomyRequestForm(RobotomyRequestForm const & raw):
AForm(raw._target, raw.getName(), raw.getGradeSign(), raw.getGradeExec())
{
	std::srand(std::time(NULL));
	*this = raw;
}


RRF::~RobotomyRequestForm()
{
}
//*****************ACCESSORS*****************//


//************OVERLOAD OPERATORS*************//

RobotomyRequestForm & RRF::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs) {
		this->setSigned(rhs.getSigned());
	}
	return (*this);
}

//****************EXCEPTIONS*****************//

void	RRF::exec(void) const {
	std::cout << "* makes some drilling noise *" << std::endl;

	int	a = std::rand() % 2; 
	if (a)
		std::cout << GREEN << this->getTarget() << " has been robotomised" << RESET << std::endl;
	else
		std::cout << RED << this->getTarget() << "'s robotomised has failed" << RESET << std::endl;
}
