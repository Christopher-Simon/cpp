/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:45:43 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/15 18:02:41 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp" 

Data::Data():x(0), y(0)
{
}

Data::Data(Data const & raw)
{
	*this = raw;
}


Data::~Data()
{
}

//*****************ACCESSORS*****************//


//************OVERLOAD OPERATORS*************//

Data & Data::operator=(Data const & rhs)
{
	if (this != &rhs) {
		this->x = rhs.x;
		this->y = rhs.y;
	}
	return (*this);
}

//****************EXCEPTIONS*****************//
//****************FONCTIONS******************//

uintptr_t Data::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data* Data::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}
