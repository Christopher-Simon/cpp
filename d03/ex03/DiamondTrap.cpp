/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:29:52 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 19:18:12 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

DiamondTrap::DiamondTrap(): ClapTrap(((std::string)"Default")+((std::string)"_clap_name")),
ScavTrap(),
FragTrap(),
_name("Default")
{
	this->_EnergyPoints = 50;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name+((std::string)"_clap_name")),
ScavTrap(),
FragTrap(),
_name(name)
{
	this->_EnergyPoints = 50;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & raw): ClapTrap(raw._name+((std::string)"_clap_name")),
ScavTrap(),
FragTrap(),
_name(raw._name){
	*this = raw; 
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destroyed." << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs){
	if (this != &rhs)
		this->ClapTrap::operator=(rhs);
	return (*this);
}


std::string DiamondTrap::getName() const
{
	return (this->_name);
}

int DiamondTrap::getHitPoints( void ) const
{
	return (this->_HitPoints);
}

int DiamondTrap::getEnergyPoints( void ) const
{
	return (this->_EnergyPoints);
}

int DiamondTrap::getAttackDamage( void ) const
{
	return (this->_AttackDamage);
}

void DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "my Diamond name is " << this->_name << std::endl;
	std::cout << "my Clap name is " << this->ClapTrap::_name << std::endl;
}

// std::ostream & operator<<(std :: ostream & o, DiamondTrap const & rhs )
// {
// 	o << rhs.getName() << std::endl
// 	<< rhs.getHitPoints() << std::endl
// 	<< rhs.getEnergyPoints() << std::endl
// 	<< rhs.getAttackDamage();
// 	return (o);
// }
