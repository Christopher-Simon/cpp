/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:44 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 20:37:04 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("") {
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string const & type): _type(type) {
	std::cout << "Animal " << this->_type << " created" << std::endl;
}

Animal::Animal(Animal const & raw): _type("") {
	*this = raw;
	std::cout << "Animal created" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs){
	std::cout << "Copy" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

std::string Animal::getType() const {
	return (this->_type);
}


void	Animal::makeSound() const {
	std::cout << "KoukAAkouAAA" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destroyed" << std::endl;
}
