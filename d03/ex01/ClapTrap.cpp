/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:16:57 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 10:30:25 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("default"),
_HitPoints(10),
_EnergyPoints(10),
_AttackDamage(0) {
	std::cout << "ClapTrap " << this->getName() << " created." << std::endl;
}

ClapTrap::ClapTrap(const std::string name):_name(name),
_HitPoints(10),
_EnergyPoints(10),
_AttackDamage(0) {
	std::cout << "ClapTrap " << this->getName() << " created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & raw): _name(raw._name)
{
	*this = raw;
	std::cout << "(Copy constructor called) ClapTrap " << this->getName() << " created." << std::endl;
}


ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->getName() << " destroyed." << std::endl;	
}

//*****************ACCESSORS*****************//


//************OVERLOAD OPERATORS*************//

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs) {
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}

std::string ClapTrap::getName() const {
	return (this->_name);
}


int ClapTrap::getHitPoints( void ) const {
	return (this->_HitPoints);
}
int ClapTrap::getEnergyPoints( void ) const {
	return (this->_EnergyPoints);
}

void	lowEnergyPoint(ClapTrap & C){
	std::cout << "ClapTrap " << C.getName() << " doesn't have enough energy points." << std::endl;
}

void	death(ClapTrap	& C){
	std::cout << "ClapTrap " << C.getName() << " doesn't have enough hit points." << std::endl;
}

void	ActionError(ClapTrap & C) {
	if (!C.getHitPoints())
		death(C);
	else
		lowEnergyPoint(C);
}

void ClapTrap::attack(const std::string & target) {
	std::cout << "ClapTrap " << this->_name << " tries to attack " << target << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		lowEnergyPoint(*this);
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " is hit, causing " << amount << " points of damage!" << std::endl;
	this->_HitPoints -= amount;
	if (this->_HitPoints <= 0)
		ActionError(*this);
		
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " tries to repair itself by " << amount << " Hit points!" << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repairs itself gaining " << amount << " Hit points!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		lowEnergyPoint(*this);
}
