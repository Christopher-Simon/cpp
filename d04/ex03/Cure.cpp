/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:05:20 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/09 16:33:14 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp" 

Cure::Cure(): AMateria("cure")
{
	std::cout << "Created cure Materia : " << this->_type << std::endl; 
}

Cure::Cure(Cure const & raw): AMateria(raw)
{
	std::cout << "Created cure Materia : " << this->_type << std::endl;
}

Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Destroyed cure Materia : " << this->_type << std::endl;
}

AMateria* Cure::clone() const{
	return (new Cure(*this));
}
