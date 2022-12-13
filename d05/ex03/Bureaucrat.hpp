/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:54:40 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/13 16:28:03 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

class AForm;

class Bureaucrat 
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & raw);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & rhs);
		std::string	getName() const;
		int			getGrade() const;
		void		incrGrade();
		void		decrGrade();

		void		signForm(AForm & form);

		class	BureaucratExceptions : public std::exception {
		};
		class GradeTooHighException : public BureaucratExceptions
		{
			public:
				virtual	const char*	what() const throw();
		};
		class GradeTooLowException : public BureaucratExceptions
		{
			public:
				virtual	const char* what() const throw();
		};

	private:
		const std::string	_name;
		int			_grade;
		
};
std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif
