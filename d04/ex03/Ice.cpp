/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:05:20 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/09 16:33:32 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp" 

Ice::Ice(): AMateria("ice")
{
	std::cout << "Created ice Materia : " << this->_type << std::endl; 
}

Ice::Ice(Ice const & raw): AMateria(raw)
{
	std::cout << "Created ice Materia : " << this->_type << std::endl;
}

Ice & Ice::operator=(Ice const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Destroyed ice Materia : " << this->_type << std::endl;
}

AMateria* Ice::clone() const{
	return (new Ice(*this));
}
