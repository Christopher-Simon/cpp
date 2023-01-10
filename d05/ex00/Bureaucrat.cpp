/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:54:45 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/10 12:42:40 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp" 

Bureaucrat::Bureaucrat():_name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade):
_name(name), 
_grade(grade) {
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150 )
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(Bureaucrat const & raw): _name(raw._name)
{
	*this = raw;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs) {
		this->_grade = rhs._grade;	
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

void		Bureaucrat::incrGrade() {
	if (this->_grade - 1 < 1)
		throw (GradeTooHighException());
	else
		this->_grade--;
}

void		Bureaucrat::decrGrade() {
	if (this->_grade + 1 > 150)
		throw (GradeTooLowException());
	else
		this->_grade++;
}

const std::string	Bureaucrat::getName() const {
	return (this->_name);
}
int			Bureaucrat::getGrade() const {
	return (this->_grade);
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
