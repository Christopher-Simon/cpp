/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:53:47 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 10:46:45 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "FragTrap, the best Trap, " << this->getName() << " was smoothly created." << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
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
	int x;
	std::cout << this->getName() << " asks for a high five ! (press a key and enter, ctrl+d if you want to make it real quick)" << std::endl;
	std::cin >> x;
}