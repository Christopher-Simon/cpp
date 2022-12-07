/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:44 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 19:37:28 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog(): Animal("Dog") {
	this->_Brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const & raw): Animal("Dog") {
	*this = raw;
	std::cout << "Dog created" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs){
	if (this != &rhs) {
		this->Animal::operator=(rhs);
		for (size_t i = 0; i < 100; i++)
			this->_Brain->setIdea(i, rhs._Brain->getIdea(i));
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Wouaf Wouaf" << std::endl;
}

void	Dog::setIdea(size_t n, std::string const newIdea)
{
	if (n >= 100)
	{
		std::cout << "Wrong value" << std::endl;
		return ;
	}
	this->_Brain->setIdea(n, newIdea);
}

const std::string &	Dog::getIdea(size_t n) const
{
	if (n >= 100)
	{
		std::cout << "Wrong value" << std::endl;
		return (this->_Brain->getIdea(0));
	}
	return (this->_Brain->getIdea(n));
}

Dog::~Dog() {
	delete this->_Brain;
	std::cout << "Dog destroyed" << std::endl;
}