/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:57:39 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/24 19:03:53 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): name(name), weapon(weapon) {
	std::cout << "player :" << this->name << "; Weapon :" << this->weapon.getType() << std::endl;
	return ;	
}

HumanA::~HumanA( void ) {
	return ;	
}

void	HumanA::attack(void){
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon){
	this->weapon = weapon;
	std::cout << this->name << " grabs a " << this->weapon.getType() << std::endl;
}

