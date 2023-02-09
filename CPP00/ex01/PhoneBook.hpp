
#include <iostream>
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

	public:

	PhoneBook(void);
	~PhoneBook(void);

	void add_contact();
	int	GetContact();
	private:

	int index;
	int index2;
	std::string index3;

	Contact tab[9];


};

#endif