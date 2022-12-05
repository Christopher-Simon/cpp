/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:24:43 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/02 17:48:05 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name): ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap " << this->getName() << " created." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destroyed." << std::endl;
}

void	ScavTrap::guardGate() { 
	std::cout << "ScavTrap " << this->getName() << " is in GateKeeper Mode." << std::endl;	
}