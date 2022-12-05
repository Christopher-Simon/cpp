/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:53:47 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/05 14:48:46 by chsimon          ###   ########.fr       */
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

FragTrap::~FragTrap(){
	std::cout << "All hail " << this->getName() << ", the deceised Trap" << std::endl;
}

FragTrap::FragTrap(FragTrap const & raw): ClapTrap() {
	*this = raw;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	if (this != &rhs)
		this->ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->_name << " asks for a high five ! (press a key)" << std::endl;
}