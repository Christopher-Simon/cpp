/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:37:28 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 18:34:56 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const & raw);
		~Dog();
		void makeSound() const;
		Dog & operator=(Dog const & rhs);
		void setIdea(size_t n, std::string const newIdea);
		const std::string & getIdea(size_t n) const;
	private:
		Brain *_Brain;
};

#endif