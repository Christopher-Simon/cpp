/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:51:11 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/11 17:26:44 by chsimon          ###   ########.fr       */
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
	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int : 0" << std::endl;
	std::cout << "float : 0.0f" << std::endl;
	std::cout << "double : 0.0" << std::endl;
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
	double d = std::strtod(_value.c_str(), NULL);
	if (d != INFINITY && d != -INFINITY && !std::isnan(d))
	{
		int ret = _checker(value);
		if (ret == 1)
			return ;
		
	}
	fill_result();	
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
			_result[0] = rhs._result[0];
			_result[1] = rhs._result[1];
			_result[2] = rhs._result[2];
			_value = rhs._value;
			_gotDot = rhs._gotDot;
			_gotF = rhs._gotF;
			_char = rhs._char;
			_int = rhs._int;
			_float = rhs._float;
			_double = rhs._double;
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

bool	Caster::_checker(std::string res)
{	
	if (!res.length())
	{
		std::cout << "incorrect" << std::endl;
		return (1);
	}
	{
		if (res.length() == 1 && std::isalpha(res[0]))
		{
			std::cout << "char: " << res[0] << std::endl;
			std::cout << "int: " << static_cast<int>(res[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(res[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(res[0]) << ".0" << std::endl;
			return (1);
		}
		if (res.length() == 3 && res[0] == '\'' && res[2] == '\'' && std::isalpha(res[1]))
		{
			std::cout << "char: " << res[0] << std::endl;
			std::cout << "int: " << static_cast<int>(res[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(res[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(res[0]) << ".0" << std::endl;
			return (1);
		}	
	}
	//test for char
	{
		size_t	count(0);
		for (size_t	i(0); res[i] ; i++)
		{
			if (std::isalpha(res[i]))
				count++;
			if (count > 1)
				return (std::cout << "incorrect " << std::endl, 1);
		}
	}
	if (std::isalpha(res[res.size() - 1]) && res[res.size() - 1] != 'f')
		return (std::cout << "incorrect " << std::endl, 1);
	//check multiple dot
	{
		size_t	count(0);

		for (size_t	i(0); res[i] ; i++)
		{
			if (res[i] == '.')
				count++;
			if (count > 1)
				return (std::cout << "incorrect " << std::endl, 1);
		}
	}
	return (0);
}

void	Caster::fill_result()
{
	double d = std::strtod(_value.c_str(), NULL);
	char c = static_cast<char>(d);
//char
	if (std::isnan(d))
		_result[0] = "char: impossible";
	else if (!std::isprint(c))
		_result[0] = "char: Non displayable";

//int
	if (d > static_cast<double>(std::numeric_limits<int>::max()) ||
		d < static_cast<double>(std::numeric_limits<int>::min()) || 
		std::isnan(d))
	{
		_result[1] = "int: impossible";
		this->_gotF = 1;
	}

//float
	if (d == INFINITY || d > static_cast<double>(std::numeric_limits<float>::max()))
	{
		this->_gotDot = 1;
		this->_gotF = 0;
		_result[2] = "float: inff";
	}
	else if (d == -INFINITY || static_cast<float>(d) == -INFINITY)
	{
		this->_gotDot = 1;
		this->_gotF = 0;
		_result[2] = "float: -inff";
	}
}



void	Caster::_castInt()
{
	this->_int = std::atoi(_value.c_str());
	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
	_print();
}

void	Caster::_castFloat()
{
	this->_float = static_cast<float>(std::atof(_value.c_str()));
	this->_int = static_cast<int>(this->_float);
	this->_char = static_cast<char>(this->_float);
	this->_double = static_cast<double>(this->_float);
	_print();
 }

void	Caster::_castDouble()
{
	this->_double = std::atof(_value.c_str());
	this->_int = static_cast<int>(this->_double);
	this->_char = static_cast<char>(this->_double);
	this->_float = static_cast<float>(this->_double);
	_print();
}

void	Caster::_print()
{
	if (_result[0].empty())
		std::cout << "char : '" << this->_char << "'" << std::endl;
	else
		std::cout << _result[0] << std::endl;

	if (_result[1].empty())
		std::cout << "int : " << this->_int << std::endl;
	else
		std::cout << _result[1] << std::endl;

	if (_result[2].empty())
	{
		if (fmod(this->_float, 1.0) == 0)
			std::cout << "float : " << this->_float << ".0f" << std::endl;
		else
			std::cout << "float : " << this->_float << "f" << std::endl;
	}
	else
		std::cout << _result[2] << std::endl;
	if (this->_double == INFINITY || this->_double == -INFINITY || std::isnan(this->_double))
		std::cout << "double : " << this->_double << std::endl;
	else
		std::cout << "double : " << this->_double << ".0" << std::endl;
}

void	Caster::_cases()
{
	switch (this->_gotDot + this->_gotF)
	{
		case 0:
			this->_castInt();
			break;
		case 1:
			this->_castDouble();
			break;
		case 2:
			this->_castFloat();
			break;
		default:
			break;
	}
	return ;
}
