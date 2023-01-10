/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:54:40 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/10 12:38:58 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat 
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & raw);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & rhs);
		const std::string	getName() const;
		int			getGrade() const;
		void		incrGrade();
		void		decrGrade();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual	const char*	what() const throw();
		};
		class GradeTooLowException : public std::exception
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
