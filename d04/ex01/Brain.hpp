/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:17:04 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 16:54:02 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain 
{
	public:
		Brain();
		Brain(Brain const & raw);
		~Brain();
		Brain & operator=(Brain const & rhs);
		std::string	ideas[100];

	private:
};

#endif