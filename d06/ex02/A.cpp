/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:02:16 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/16 17:02:17 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp" 

A::A()
{
}

A::A(A const & raw)
{
	*this = raw;
}


A::~A()
{
}
//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

A & A::operator=(A const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

