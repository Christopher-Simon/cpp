/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:44 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 15:51:34 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(WrongCat const & raw): WrongAnimal("WrongCat") {
	*this = raw;
	std::cout << "WrongCat created" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs){
	if (this != &rhs) {
		this->WrongAnimal::operator=(rhs);
	}
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destroyed" << std::endl;
}