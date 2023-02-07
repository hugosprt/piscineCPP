
#include <iostream>
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

	public:

	void add_contact(void);
	PhoneBook(void);
	~PhoneBook(void);


	private:

	int index;

	Contact tab[8];


};

#endif