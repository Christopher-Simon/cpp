/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:51:11 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/16 16:56:23 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp" 

Caster::Caster():
_char(0),
_int(0),
_float(0),
_double(0)
{
	
}

Caster::Caster(Caster const & raw)
{
	*this = raw;
}


Caster::~Caster()
{
}
//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

Caster & Caster::operator=(Caster const & rhs)
{
	if (this != &rhs) {
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

