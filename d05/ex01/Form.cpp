/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:48:42 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/10 15:08:12 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp" 

Form::Form():
_name("default"),
_signed(false),
_grade_sign(150),
_grade_exec(150)
{
}

Form::Form(
	std::string	name,
	int			grade_sign,
	int			grade_exec):
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

Form::Form(Form const & raw):
_name(raw._name),
_grade_sign(raw._grade_sign),
_grade_exec(raw._grade_exec)
{
	*this = raw;
}


Form::~Form()
{
}

//************ACCESSORS************//

std::string	Form::getName() const {
	return (this->_name);
}
int			Form::getGradeSign() const {
	return (this->_grade_sign);
}
int			Form::getGradeExec() const {
	return (this->_grade_exec);
}
bool		Form::getSigned() const {
	return (this->_signed);
}

//************OVERLOAD OPERATORS************//

Form & Form::operator=(Form const & rhs)
{
	if (this != &rhs) {
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::ostream & operator<<( std::ostream & o, Form const & rhs ) {
	o << "Form : " << rhs.getName();
	o << "; the grade to sign is : " << rhs.getGradeSign();
	o << "; the grade to exec is : " << rhs.getGradeExec();
	o << " ; Form is "<< (rhs.getSigned() ? "signed" : "not signed");
	return o;
}

//************EXCEPTIONS************//


const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

const char* Form::IsAlreadySigned::what() const throw()
{
	return ("Is already signed.");
}

void		Form::beSigned(Bureaucrat & him) {
	if (this->getSigned())
		throw (IsAlreadySigned());
	if (him.getGrade() > this->getGradeSign()) 
		throw (GradeTooLowException());
	this->_signed = true;
	std::cout << GREEN << him.getName() << " signed " << this->_name << RESET << std::endl;
}
