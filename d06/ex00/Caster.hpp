/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:51:08 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/11 17:21:50 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

#include <iostream>
#include <cmath>
#include <exception>
#include <string>
#include <cstdlib>
#include <limits>

class Caster 
{
	public:
		Caster();
		Caster(std::string value);
		Caster(Caster const & raw);
		~Caster();
		Caster & operator=(Caster const & rhs);

	private:
		bool		_checker(std::string res);
		void		fill_result();
		bool		_validInput();
		void		_cases();
		void		_castChar();
		void		_castInt();
		void		_castFloat();
		void		_castDouble();
		void		_print();
		std::string	_result[4];
		std::string _value;
		bool		_gotDot;
		bool		_gotF;
		char		_char;
		int			_int;
		float		_float;
		double		_double;
};

#endif