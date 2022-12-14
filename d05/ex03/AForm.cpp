/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:48:42 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 11:16:57 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp" 

AForm::AForm():
_target("default"),
_name("default"),
_signed(false),
_grade_sign(150),
_grade_exec(150)
{
}

AForm::AForm(
	std::string	target,
	std::string	name,
	int			grade_sign,
	int			grade_exec):
_target(target),
_name(name),
_signed(false),
_grade_sign(grade_sign),
_grade_exec(grade_exec)
{
	if (grade_sign < 1 || grade_exec < 1 )
		throw (GradeTooHighException());
	if (grade_sign > 150 || grade_exec > 150 )
		throw (GradeTooLowException());
}

AForm::AForm(AForm const & raw):
_name(raw._name),
_grade_sign(raw._grade_sign),
_grade_exec(raw._grade_exec)
{
	*this = raw;
}


AForm::~AForm()
{
}

//************ACCESSORS************//

std::string	AForm::getName() const {
	return (this->_name);
}
int			AForm::getGradeSign() const {
	return (this->_grade_sign);
}
int			AForm::getGradeExec() const {
	return (this->_grade_exec);
}
bool		AForm::getSigned() const {
	return (this->_signed);
}
std::string		AForm::getTarget() const {
	return (this->_target);
}
void		AForm::setSigned(bool res) {
	this->_signed = res;
}

//************OVERLOAD OPERATORS************//

AForm & AForm::operator=(AForm const & rhs)
{
	if (this != &rhs) {
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::ostream & operator<<( std::ostream & o, AForm const & rhs ) {
	o << "AForm : " << rhs.getName();
	o << "; the grade to sign is : " << rhs.getGradeSign();
	o << "; the grade to exec is : " << rhs.getGradeExec();
	o << "; the target is : " << rhs.getTarget();
	o << " ; This Form is "<< (rhs.getSigned() ? "signed" : "not signed");
	return o;
}

//************EXCEPTIONS************//


const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

const char* AForm::IsNotSigned::what() const throw()
{
	return ("The form is not signed");
}
//************FONCTIONS************//


void		AForm::beSigned(Bureaucrat & him) {
	if (this->getSigned())
		std::cout << YELLOW << this->_name << " is already signed "  << RESET << std::endl;
	if (him.getGrade() > this->getGradeSign()) {
			std::cout << RED << him.getName() << " couldn't sign " << this->_name;
			std::cout << " because his GradeSign is too low" RESET << std::endl;
		return ;
	}
	this->_signed = true;
	std::cout << GREEN << him.getName() << " signed " << this->_name << RESET << std::endl;
}

void	AForm::exec(void){
	std::cout << this->getName() << " is not in the right place" << std::endl;
}

void	AForm::execute(Bureaucrat const & executor) {
	if (this->getSigned())
	{
		if (executor.getGrade() <= this->getGradeExec())
		{
			std::cout << GREEN << executor.getName() << " executed " << this->getName() << RESET << std::endl;
			this->exec();
		}
		else
			throw(GradeTooLowException());
	}
	else
		throw(IsNotSigned());
}
