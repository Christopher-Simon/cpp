/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:51:11 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/30 21:15:12 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp" 

Caster::Caster():
_value("0"),
_gotDot(0),
_gotF(0),
_char(0),
_int(0),
_float(0),
_double(0)
{
	
}

Caster::Caster(std::string value):
_value(value),
_gotDot(0),
_gotF(0),
_char(0),
_int(0),
_float(0),
_double(0)
{
	if (_value.find('.') != std::string::npos)
		_gotDot = 1;
	if (_value.find('f') != std::string::npos)
		_gotF = 1;
	this->_cases();
}

Caster::Caster(Caster const & raw)
{
	*this = raw;
}


Caster::~Caster()
{
}
//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

Caster & Caster::operator=(Caster const & rhs)
{
	if (this != &rhs) {
		this->_value = rhs._value;
		this->_gotDot = rhs._gotDot;
		this->_gotF = rhs._gotF;
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

void	Caster::_castInt()
{
	try {
		char *end_ptr; 
		this->_int = std::atoi(this->_value.c_str());
	}	
	catch (std::exception & e) {
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
	if (std::isprint(this->_char))
		std::cout << "char : " << this->_char << std::endl;
	else
		std::cout << "char : not printable" << std::endl;
	std::cout << "int : " << this->_int << std::endl;
	std::cout << "float : " << this->_float << ".0f" << std::endl;
	std::cout << "double : " << this->_double << ".0" << std::endl;
}

void	Caster::_cases()
{
	switch (this->_gotDot + this->_gotF)
	{
		case 0:
			std::cout << "cest un int" << std::endl;
			this->_castInt();
			break;
		case 1:
			std::cout << "cest un double" << std::endl;
			break;
		case 2:
			std::cout << "cest un float" << std::endl;
			break;
		default:
			std::cout << "Ce cas n'arrive pas" << std::endl;
			break;
	}
	return ;
}
