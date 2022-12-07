/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:05:36 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 20:05:37 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp" 

Cure::Cure()
{
}

Cure::Cure(Cure const & raw)
{
	*this = raw;
}

Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

Cure::~Cure()
{
}