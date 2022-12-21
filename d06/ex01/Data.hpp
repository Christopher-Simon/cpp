/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:44:41 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/15 17:50:58 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <exception>
#include <stdint.h>
#include <string>

struct Data 
{
	int x;
	int y;
	
	Data();
	Data(Data const & raw);
	~Data();
	Data & operator=(Data const & rhs);

	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif