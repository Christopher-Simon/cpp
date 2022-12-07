/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:37:28 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 18:35:04 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const & raw);
		~Cat();
		void makeSound() const;
		Cat & operator=(Cat const & rhs);
		void setIdea(size_t n, std::string const newIdea);
		const std::string & getIdea(size_t n) const;
	private:
		Brain	*_Brain;
};

#endif