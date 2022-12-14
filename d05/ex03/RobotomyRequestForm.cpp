/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:27:43 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 11:17:08 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp" 
#include <cmath>

typedef	RobotomyRequestForm RRF;

RRF::RobotomyRequestForm():
AForm("Default", "Default RobotomyRequest Form", 72, 45)
{
	
}

RRF::RobotomyRequestForm(std::string target):
AForm(target, "RobotomyRequest Form", 72, 45)
{
}

RRF::RobotomyRequestForm(RobotomyRequestForm const & raw):
AForm(raw._target, raw.getName(), raw.getGradeSign(), raw.getGradeExec())
{
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
		// *this->AForm::operator=(rhs) ;
	}
	return (*this);
}

//****************EXCEPTIONS*****************//

void	RRF::exec(void) {
	std::cout << "* makes some drilling noise *" << std::endl;
	int	a = rand() % 2; 
	if (a)
		std::cout << GREEN << this->getTarget() << " has been robotomised" << RESET << std::endl;
	else
		std::cout << RED << this->getTarget() << "'s robotomised has failed" << RESET << std::endl;
}
