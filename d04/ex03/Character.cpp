/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:53:32 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/09 18:34:05 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp" 

Character::Character(): _name("default")
{
	for (size_t i(0); i < 4; i++)
		_matSlot[i] = NULL;
	std::cout << "Created Character : " << this->_name << std::endl;
}

Character::Character(std::string name): _name(name)
{
	for (size_t i(0); i < 4; i++)
		_matSlot[i] = NULL;
	std::cout << "Created Character : " << this->_name << std::endl;
}

Character::Character(Character const & raw)
{
	for (size_t i(0); i < 4; i++)
		_matSlot[i] = NULL;
	*this = raw;
}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs) {
		for (size_t i(0); i < 4; i++) {
			if (this->_matSlot[i])
				delete	this->_matSlot[i];
			if (rhs._matSlot[i])
				this->_matSlot[i] = rhs._matSlot[i]->clone();
			else
				this->_matSlot[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_name);
}

AMateria	*Character::getMateria(int idx) const{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Your bag is not that big" << std::endl;
		return (NULL);
	}
	if (this->_matSlot[idx])
		return (this->_matSlot[idx]);
	std::cout << "You don't have a materia in this slot" << std::endl;
	return (NULL);
}



void Character::equip(AMateria* m) {
	for (size_t i(0); i < 4; i++)
	{
		if (!_matSlot[i]) {
			this->_matSlot[i] = m;
			if (m)
				std::cout << this->_name << " Equips " << m->getType() << " Materia"<< std::endl;
			return ;
		}
	}
	std::cout << "Equipment full." << std::endl;
}

void Character::unequip(int idx) {
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Your bag is not that big" << std::endl;
		return ;
	}
	std::cout << this->_name << " Unequips " << this->_matSlot[idx]->getType() << " Materia"<< std::endl;
	this->_matSlot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Your bag is not that big" << std::endl;
		return ;
	}
	if (!this->_matSlot[idx])
	{
		std::cout << "No Materia equiped at this slot" << std::endl;
		return ;
	}
	if (!this->_matSlot[idx]->getType().compare("ice"))
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (!this->_matSlot[idx]->getType().compare("cure"))
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Character::~Character()
{
	for (size_t i(0); i < 4; i++)
		if (_matSlot[i])
			delete this->_matSlot[i];
	std::cout << "Destoyed Character : " << this->_name << std::endl;
}