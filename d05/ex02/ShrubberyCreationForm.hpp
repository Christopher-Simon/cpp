/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:24:26 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/13 19:30:49 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

#define TREE \
"    *\n"\
"   /.\\\n"\
"  /o..\\\n"\
"  /..o\\\n"\
" /.o..o\\\n"\
" /...o.\\\n"\
"/..o....\\\n"\
"^^^[_]^^^\n"


class ShrubberyCreationForm : public AForm 
{
	public: 
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & raw);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
		void	exec(void);
	private:
};

#endif