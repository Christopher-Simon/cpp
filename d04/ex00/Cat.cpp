/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:44 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 19:44:40 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const & raw): Animal(raw._type) {
	*this = raw;
	std::cout << "Cat created" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs){
	if (this != &rhs) {
		this->Animal::operator=(rhs);
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destroyed" << std::endl;
}