/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:26:05 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 12:28:55 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );

void randomChump( std::string name ) {
	Zombie *tmp = newZombie(name);

	tmp->announce();
	delete	tmp;
}

void randomChumpStack( std::string name ) {
	Zombie tmp(name);

	tmp.announce();
}