/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:44:42 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 16:47:37 by chsimon          ###   ########.fr       */
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
	}
	return (*this);
}

Brain::~Brain() {
}