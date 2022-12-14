/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:11:57 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 11:48:33 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <cstdlib>

class PhoneBook {
public:


	PhoneBook(void);
	~PhoneBook(void);

	void	AddContact(void);
	int		get_size(void) const;
	void	Search(void) const;
	void	Command(void);

private:
	int		_size;
	Contact	_list[8];
};

#endif