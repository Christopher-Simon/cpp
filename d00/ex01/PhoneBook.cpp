/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:09:52 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/21 17:39:31 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): _size(0) {
	std::cout << "Je suis un annuaire qui se construit" << std::endl;
}


PhoneBook::~PhoneBook(void) {
	std::cout << "Allez ciao les nazes, PhoneBook out" << std::endl;
	return ;
}

std::string	AddContactUtils(void)
{
	std::string	str;

	if (std::cin.fail())
		return (str);
	do {
		if (std::getline(std::cin, str) == NULL)
		{
			std::cout << "EOF reached" << std::endl;
			break;
		}
		if (!str.size())
			std::cout << "Le champs ne peut être vide" << std::endl;
	} while(!str.size());
	return (str);		
}

void	PhoneBook::AddContact(void) {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter the contact's first name" << std::endl;
	first_name = AddContactUtils();
	if (!first_name.size())
		return ;
	std::cout << "Enter the contact's last name" << std::endl;
	last_name = AddContactUtils();
	if (!last_name.size())
		return ;
	std::cout << "Enter the contact's nickname" << std::endl;
	nickname = AddContactUtils();
	if (!nickname.size())
		return ;
	std::cout << "Enter the contact's phone number" << std::endl;
	phone_number = AddContactUtils();
	if (!phone_number.size())
		return ;
	std::cout << "Enter the contact's darkest secret" << std::endl;
	darkest_secret = AddContactUtils();
	if (!darkest_secret.size())
		return ;
	if (std::cin.fail())
		return ;
	Contact	NewContact(
		first_name,
		last_name,
		nickname,
		phone_number,
		darkest_secret
	);
	if (this->_size == 8)
		this->_size = 0;
	this->_list[this->_size++] = NewContact;
	std::cout << "Added Contact :" << std::endl;
	this->_list[this->_size - 1].printContact();
	return;
}

void	PhoneBook::Search(void) const {
	std::string	str;

	for (int i = 0; this->_list[i].does_exist(); i++)
	{
		std::cout << i + 1;
		std::cout << "         |";
		this->_list[i].ShortPrintContact();
	}
	std::cout << "Please choose an index :" << std::endl;
	while (1)
	{
		if (std::getline(std::cin, str) == NULL)
		{
			std::cout << "EOF reached" << std::endl;
			break;
		}
		if (!std::atoi(str.c_str()))
			std::cout << "Please enter a digit" << std::endl;
		else if (std::atoi(str.c_str()) > 8 || std::atoi(str.c_str()) < 1)
			std::cout << "Please enter a number between 1 and 8" << std::endl;
		else if (!this->_list[std::atoi(str.c_str()) - 1].does_exist())
			std::cout << "Please enter an existing contact" << std::endl;
			
		else
		{
			this->_list[std::atoi(str.c_str()) - 1].printContact();
			break;
		}
	}
}

void	PhoneBook::Command(void) {
	std::string	str;

	while (1)
	{
		if (std::cin.fail())
			return ;
		std::cout << "ADD, SEARCH ou EXIT" << std::endl;
		if (std::getline(std::cin, str) == NULL)
		{
			std::cout << "EOF Reached" << std::endl;
			break;
		}
		if (!str.compare("EXIT"))
			break;
		else if (!str.compare("ADD"))
			PhoneBook::AddContact();
		else if (!str.compare("SEARCH"))
			PhoneBook::Search();
		else
			std::cout << "incorrect" << std::endl;
	}
}

int	PhoneBook::get_size(void) const {
	return (this->_size);
}