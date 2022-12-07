/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:05:20 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 20:05:22 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp" 

Ice::Ice()
{
}

Ice::Ice(Ice const & raw)
{
	*this = raw;
}

Ice & Ice::operator=(Ice const & rhs)
{
	if (this != &rhs) {
	}
	return (*this);
}

Ice::~Ice()
{
}