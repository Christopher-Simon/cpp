/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:51:08 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/16 16:53:19 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

#include <iostream>
#include <exception>
#include <string>

class Caster 
{
	public:
		Caster();
		Caster(Caster const & raw);
		~Caster();
		Caster & operator=(Caster const & rhs);

	private:
		char	_char; 
		int		_int; 
		float	_float; 
		double	_double; 
};

#endif