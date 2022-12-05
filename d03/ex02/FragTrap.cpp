/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:53:47 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/02 19:08:39 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name): ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "FragTrap, the best Trap, " << this->getName() << " was smoothly created." << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "All hail " << this->getName() << ", the deceised Trap" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->getName() << " asks for a high five ! (press a key)" << std::endl;
}