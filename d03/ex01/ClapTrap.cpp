/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:16:57 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 17:31:30 by chsimon          ###   ########.fr       */
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

ClapTrap::ClapTrap(ClapTrap const & raw) : _name(raw._name)
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

//****************EXCEPTIONS*****************//

std::string ClapTrap::getName() const {
	return (this->_name);
}

int ClapTrap::getHitPoints( void ) const {
	return (this->_HitPoints);
}
int ClapTrap::getEnergyPoints( void ) const {
	return (this->_EnergyPoints);
}

int ClapTrap::getAttackDamage( void ) const {
	return (this->_AttackDamage);
}

void	lowEnergyPoint(ClapTrap & C){
	std::cout << "ClapTrap " << C.getName() << " doesn't have enough energy points." << std::endl;
}

void	death(ClapTrap	& C){
	std::cout << "ClapTrap " << C.getName() << " doesn't have enough hit points." << std::endl;
}

void	ActionError(ClapTrap & C) {
	if (C.getHitPoints() <= 0 )
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
		this->_HitPoints += amount;
		this->_EnergyPoints--;
	}
	else
		ActionError(*this);
}

std::ostream & operator<<(std :: ostream & o, ClapTrap const & rhs ) {
	o << "Name : " << rhs.getName() << std::endl
	<< "HitPoints : " << rhs.getHitPoints() << std::endl
	<< "Energy Points : " << rhs.getEnergyPoints() << std::endl
	<< "Attack Damage : " << rhs.getAttackDamage();
	return (o);
}
