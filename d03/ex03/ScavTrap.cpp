/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:24:43 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/05 14:48:31 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap " << this->getName() << " created." << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap " << this->getName() << " created." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destroyed." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & rhs ): ClapTrap() {
	*this = rhs; 
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
	if ( this != &rhs )
		this->ClapTrap::operator=(rhs);
	return (*this);
}

static void	lowEnergyPoint(ClapTrap & C){
	std::cout << "ClapTrap " << C.getName() << " doesn't have enough energy points." << std::endl;
}

void ScavTrap::attack(const std::string & target) {
	std::cout << "ScavTrap " << this->_name << " tries to attack " << target << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		lowEnergyPoint(*this);
}

void	ScavTrap::guardGate() { 
	std::cout << "ScavTrap " << this->_name << " is in GateKeeper Mode." << std::endl;	
}