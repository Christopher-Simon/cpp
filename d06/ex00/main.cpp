/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:44:42 by christopher       #+#    #+#             */
/*   Updated: 2022/12/30 19:13:42 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Caster.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Uncorrect amount of argument" << std::endl;
		return (1);
	}
	(void) argv;
	std::string res = argv[1];
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
			return (0);
		}
		if (res.length() == 3 && res[0] == '\'' && res[2] == '\'' && std::isalpha(res[1]))
		{
			std::cout << "char: " << res[0] << std::endl;
			std::cout << "int: " << static_cast<int>(res[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(res[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(res[0]) << ".0" << std::endl;
			return (0);
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

	Caster cast(res);
	
	// double d = std::atof(res.c_str());
	// std::cout << d << std::endl;
	// // valid char

	// std::cout << res[res.length() - 1 ] << std::endl;

	// std::cout << "char : " << static_cast<char>(d) << std::endl;
	// std::cout << "int : " << static_cast<int>(d) << std::endl;
	// std::cout << "float : " << static_cast<float>(d) << std::endl;
	// std::cout << "double : " << static_cast<double>(d) << "f" << std::endl;
	return (1);
}

// std::count

// Cas
// char : taille 1, !isdigit
// int : !find('.') && [last] == f
// if count (argv)
// float : if find(.) && [last] != f
// double : if find(.) && [last] != f
