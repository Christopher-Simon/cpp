/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:48:42 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/12 20:14:52 by chsimon          ###   ########.fr       */
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
	return (this->_grade_exec);
}
int			Form::getGradeExec() const {
	return (this->_grade_sign);
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

void		Form::beSigned(Bureaucrat & him) {
	if (him.getGrade() > this->getGradeSign())
		throw (GradeTooLowException());
	this->_signed = true;
	std::cout << "\033[32m" << him.getName() << " signed " << this->_name << "\033[0m" << std::endl;
}
