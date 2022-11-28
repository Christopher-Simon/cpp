/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:19:21 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/28 17:04:11 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	homeMadeSed(std::string	line, std::string find, std::string replace) {
	std::size_t	found;
	std::string	beg;
	std::string	end;

	while (1) {
		found = line.find(find);
		if (found == std::string::npos)
			return (line);
		else {
			beg = line.substr(0, found);
			end = line.substr(found + find.length());
			line = beg;
			line += replace;
			line += end;
		}
	}
}

int	main(int argc, char **argv) {
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		line;
	std::string		ofile;
	std::string		find;
	std::string		replace;

	if (argc != 4)
		return (std::cerr << "bad argument number" << std::endl,
		1);
	ifs.open(argv[1]);
	ifs.peek();
	if (ifs.fail())
		return (std::cerr << "Error file opening" << std::endl, 
		1);
	find = argv[2];
	replace = argv[3];
	if (!find.length())
		return (std::cerr << "Find needs to be at least size 1" << std::endl,
		ifs.close(),
		1);
	ofile = argv[1];
	ofile +=  ".replace";
	ofs.open(ofile.c_str());
	while (1) 
	{
		std::getline(ifs, line);
		if (!ifs.eof() && ifs.fail())
			return (std::cerr << "Error getline" << std::endl,
			ofs.close(),
			ifs.close(),
			1);
		line = homeMadeSed(line, find, replace);
		ofs << line ;
		if (ifs.eof())
			break;
		ofs << std::endl;
	}
	ofs.close();
	ifs.close();
	return (0);
}
