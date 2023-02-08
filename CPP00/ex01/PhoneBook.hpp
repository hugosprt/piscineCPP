
#include <iostream>
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

	public:

	PhoneBook(void);
	~PhoneBook(void);

	void add_contact();
	void	GetContact();
	private:

	int index;
	int index2;

	Contact tab[8];


};

#endif