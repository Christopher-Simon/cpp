/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:01:04 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 20:01:09 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp" 

AMateria::AMateria()
{
}

AMateria::AMateria(AMateria const & raw)
{
	*this = raw;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

AMateria::~AMateria()
{
}