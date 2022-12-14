/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:33:41 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 15:47:29 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>
#include <string>

class AForm;

class Intern 
{
	public:
		Intern();
		Intern(Intern const & raw);
		~Intern();
		Intern & operator=(Intern const & rhs);
		AForm * makeForm(std::string name, std::string target);
	private:
		AForm * createFormPres(std::string target);
		AForm * createFormRobot(std::string target);
		AForm * createFormShrub(std::string target);
		
};

#endif