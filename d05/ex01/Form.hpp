/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:50:33 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/10 14:50:40 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>
# include <string>

class Bureaucrat;

class Form 
{
	public:
		Form();
		Form(
			std::string	name,
			int			grade_sign,
			int			grade_exec
		);
		Form(Form const & raw);
		~Form();
		Form & operator=(Form const & rhs);

		class	FormExceptions : public std::exception {
		};
		
		class GradeTooHighException : public FormExceptions
		{
			public:
				virtual	const char*	what() const throw();
		};
		class GradeTooLowException : public FormExceptions
		{
			public:
				virtual	const char* what() const throw();
		};
		class IsAlreadySigned : public FormExceptions
		{
			public:
				virtual const char* what() const throw();
		};
	
		std::string	getName() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		bool		getSigned() const;
		void		beSigned(Bureaucrat & him);

	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
};
std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif
