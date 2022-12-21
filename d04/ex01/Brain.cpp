/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:44:42 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 20:12:04 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp" 

Brain::Brain() {
}

Brain::Brain(Brain const & raw) {
		*this = raw;
}

Brain & Brain::operator=(Brain const & rhs) {
	if (this != &rhs) {
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.getIdea(i);
		}
	}
	return (*this);
}

void	Brain::setIdea(size_t n, std::string const newIdea)
{
	if (n < 0 || n >= 100)
	{
		std::cout << "Wrong value" << std::endl;
		return ;
	}
	this->ideas[n] = newIdea;
}

const std::string &	Brain::getIdea(size_t n) const
{
	if (n < 0 || n >= 100)
	{
		std::cout << "Wrong value" << std::endl;
		return (this->ideas[0]);
	}
	return (this->ideas[n]);
}

Brain::~Brain() {
}