/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:37:28 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 20:34:38 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
	public:
		Animal();
		Animal(std::string const & type);
		Animal(Animal const & raw);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const = 0;
		Animal & operator=(Animal const & rhs);
	protected:
		std::string _type;
};

#endif