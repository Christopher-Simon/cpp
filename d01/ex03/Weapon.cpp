/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:57:08 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 12:42:24 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string input): type(input) {
	std::cout << "created a Weapon" << this->type << std::endl;
	return ;
}

Weapon::~Weapon(void) {
	std::cout << "destroying Weapon " << this->type << std::endl;
	return ;
}

const std::string	Weapon::getType(void) const {
	return (this->type);
}

void	Weapon::setType(std::string input) {
	this->type = input;
	std::cout << "set weapon as : " << this->type << std::endl; 
}
