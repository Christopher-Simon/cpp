/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:44 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/06 19:20:10 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("") {
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const & type): _type(type) {
	std::cout << "WrongAnimal " << this->_type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & raw): _type("") {
	*this = raw;
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){
	std::cout << "Copy" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (this->_type);
}


void	WrongAnimal::makeSound() const {
	std::cout << "KoukAAkouAAA" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destroyed" << std::endl;
}