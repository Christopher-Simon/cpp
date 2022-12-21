/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:44 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 20:15:28 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("Cat") {
	this->_Brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const & raw): Animal(raw._type) {
	this->_Brain = new Brain();
	*this = raw;
	std::cout << "Cat created" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs){
	if (this != &rhs) {
		this->Animal::operator=(rhs);
		for (size_t i = 0; i < 100; i++)
			this->_Brain->setIdea(i, rhs._Brain->getIdea(i));
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}

void	Cat::setIdea(size_t n, std::string const newIdea)
{
	if (n >= 100)
	{
		std::cout << "Wrong value" << std::endl;
		return ;
	}
	this->_Brain->setIdea(n, newIdea);
}

const std::string &	Cat::getIdea(size_t n) const
{
	if (n >= 100)
	{
		std::cout << "Wrong value" << std::endl;
		return (this->_Brain->getIdea(0));
	}
	return (this->_Brain->getIdea(n));
}

Cat::~Cat() {
	delete this->_Brain;
	std::cout << "Cat destroyed" << std::endl;
}
