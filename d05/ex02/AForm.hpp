/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:50:33 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/12 20:14:54 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>
# include <string>

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(
			std::string	target,
			std::string	name,
			int			grade_sign,
			int			grade_exec
		);
		AForm(AForm const & raw);
		virtual ~AForm();
		AForm & operator=(AForm const & rhs);
		class	AFormExceptions : public std::exception {
		};
		class GradeTooHighException : public AFormExceptions
		{
			public:
				const char*	what() const throw();
		};
		class GradeTooLowException : public AFormExceptions
		{
			public:
				const char* what() const throw();
		};
		class IsAlreadySigned : public AFormExceptions
		{
			public:
				virtual const char* what() const throw();
		};
		class IsNotSigned : public AFormExceptions
		{
			public:
				const char* what() const throw();
		};
		std::string		getName() const;
		std::string		getTarget() const;
		int				getGradeSign() const;
		int				getGradeExec() const;
		bool			getSigned() const;
		void			setSigned(bool res);
		void			beSigned(Bureaucrat & him);
		void			execute(Bureaucrat const & executor) const;
	
	protected:
		const std::string	_target;

	private:
		virtual	void	exec(void) const = 0;
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
};
std::ostream & operator<<( std::ostream & o, AForm const & rhs );


#endif
