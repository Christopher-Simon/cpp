/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:44 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 19:44:29 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const & raw): Animal(raw._type) {
	*this = raw;
	std::cout << "Dog created" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs){
	if (this != &rhs) {
		this->Animal::operator=(rhs);
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Wouaf Wouaf" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destroyed" << std::endl;
}