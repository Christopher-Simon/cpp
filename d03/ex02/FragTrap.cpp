/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:53:47 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 18:57:55 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap, the best Trap, " << this->getName() << " was smoothly created." << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap, the best Trap, " << this->getName() << " was smoothly created." << std::endl;
}

FragTrap::FragTrap(FragTrap const & raw): ClapTrap(raw._name) {
	*this = raw;
	std::cout << "(copy constructor) FragTrap, the best Trap, " << this->getName() << " was smoothly created." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	if (this != &rhs)
		this->ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "All hail " << this->getName() << ", the deceised Trap" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::string	str;
	std::cout << "ScavTrap " << this->getName() << " concentrates very hard" << std::endl;	
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << this->getName() << " asks for a high five ! (press enter, ctrl+d if you want to make it real quick)" << std::endl;
		if (!std::cin.fail())
			std::getline(std::cin, str);
		this->_EnergyPoints--;
	}
	else
		std::cout << "Scavtrap " << this->_name << " broke air." << std::endl;
}
