/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:58:48 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/13 18:51:38 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

typedef	PresidentialPardonForm PPF;

PresidentialPardonForm::PresidentialPardonForm():
AForm("Default", "Default Presidential Form", 25, 5)
{
}

PPF::PresidentialPardonForm(std::string target):
AForm(target, "PresidentialPardon Form", 25, 5)
{
}

PPF::PresidentialPardonForm(PresidentialPardonForm const & raw):
AForm(raw._target, raw.getName(), raw.getGradeSign(), raw.getGradeExec())
{
	*this = raw;
}


PPF::~PresidentialPardonForm()
{
}
//*****************ACCESSORS*****************//


//************OVERLOAD OPERATORS*************//

PresidentialPardonForm & PPF::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs) {
		this->setSigned(rhs.getSigned());
	}
	return (*this);
}

//****************EXCEPTIONS*****************//

void	PPF::exec(void) {
	std::cout << this->getTarget() << " is Pardonned" << std::endl;
}
