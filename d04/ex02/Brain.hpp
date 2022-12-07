/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:17:04 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 18:28:01 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain 
{
	public:
		Brain();
		Brain(Brain const & raw);
		~Brain();
		Brain & operator=(Brain const & rhs);
		void setIdea(size_t n, std::string const newIdea);
		const std::string & getIdea(size_t n) const;
	private:
		std::string	ideas[100];
};

#endif