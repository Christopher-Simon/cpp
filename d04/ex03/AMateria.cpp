/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:01:04 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/08 12:51:14 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp" 

AMateria::AMateria(): _type("default")
{
	std::cout << "Created Materia : " << this->_type << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "Created Materia : " << this->_type << std::endl;
}

AMateria::AMateria(AMateria const & raw)
{
	*this = raw;
}

AMateria::~AMateria()
{
	std::cout << "Destroyed Materia : " << this->_type << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

std::string	const & AMateria::getType() const {
	return (this->_type);
}
