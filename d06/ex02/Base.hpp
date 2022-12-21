/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:02:50 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/16 17:37:38 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <exception>
#include <string>
#include <cstdlib>

class Base 
{
	public:
		virtual	~Base();
		Base *	generate(void);
		void	identify(Base* p);
		void	identify(Base& p);

	private:
		
};

#endif