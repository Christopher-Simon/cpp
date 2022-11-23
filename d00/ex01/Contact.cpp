/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:11:27 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/21 17:33:50 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void): exists(false) {
	std::cout << "Encore du travail ? Contact in" << std::endl;	
	return ;
}

Contact::Contact(std::string f_name,
		std::string l_name,
		std::string n_name,
		std::string p_nb,
		std::string d_secret
	): exists(true), 
	first_name(f_name),
	last_name(l_name),
	nickname(n_name),
	phone_number(p_nb),
	darkest_secret(d_secret)
	  {
	return ;
}

Contact::~Contact(void) {
	std::cout << "Travail terminé, contact out" << std::endl;	
	return ;
}

void	Contact::printContact( void ) const {
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
}

bool	Contact::does_exist( void ) const {
	return (this->exists);
}

void	ShortPrintUtils(std::string str) {
	if (str.size() > 10)
	{
		str.resize(9);
		std::cout << str << ".";
	}
	else
	{
		int	j = 10 - str.size();
		for ( int i = 0; i < j; i++)
			str += " ";
		str.resize(10);
		std::cout << str;
	}
}

void	Contact::ShortPrintContact( void ) const {
	ShortPrintUtils(this->first_name);
	std::cout << "|";
	ShortPrintUtils(this->last_name);
	std::cout << "|";
	ShortPrintUtils(this->nickname);
	std::cout << std::endl;
}
