/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:24:43 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 18:13:57 by chsimon          ###   ########.fr       */
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

ScavTrap::ScavTrap(ScavTrap const & raw): ClapTrap(raw._name)
{
	*this = raw;
	std::cout << "(Copy constructor) ScavTrap " << this->getName() << " created." << std::endl;

}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) 
{
	if (this != & rhs)
		this->ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destroyed." << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " initiates GateKeeper Mode." << std::endl;	
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " is in GateKeeper Mode." << std::endl;	
		this->_EnergyPoints--;
	}	
	else
		std::cout << "Scavtrap " << this->_name << " can't defend his city." << std::endl;
}

void 	ScavTrap::attack(const std::string & target) {
	std::cout << "ScavTrap " << this->_name << " , protecter of the city, attacks " << target << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "Scavtrap " << this->_name << " can't do anything." << std::endl;

}