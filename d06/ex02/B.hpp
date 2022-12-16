/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:02:31 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/16 17:07:38 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Base.hpp"

class B : public Base
{
	public:
		B();
		B(B const & raw);
		~B();
		B & operator=(B const & rhs);

	private:
		
};

#endif