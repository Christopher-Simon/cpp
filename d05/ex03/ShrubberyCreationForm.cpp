/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:17:39 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/13 19:30:11 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():
AForm("Default", "Default ShrubberyCreation Form", 145, 137) 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
AForm(target, "ShrubberyCreation Form", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & raw):
AForm(raw.getName(), raw._target, raw.getGradeSign(), raw.getGradeExec())
{
	*this = raw;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs) {
		this->setSigned(rhs.getSigned());
	}
	return (*this);
}

void	ShrubberyCreationForm::exec(void) {
	std::cout << "* ShrubberyCreation is happening *" << std::endl;
	std::ofstream	ofs;
	std::string		file;
	std::string		tree;

	file = this->_target;
	file += "_shrubbery";
	ofs.open(file.c_str());
	tree = TREE;
	ofs << tree;
	ofs.close();
}
