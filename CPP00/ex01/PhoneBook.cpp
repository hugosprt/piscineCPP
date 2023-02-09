
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->index = 0;
    this->index2 = 0;

    this->tab[0] = Contact();
    this->tab[1] = Contact();
    this->tab[2] = Contact();
    this->tab[3] = Contact();
    this->tab[4] = Contact();
    this->tab[5] = Contact();
    this->tab[6] = Contact();
    this->tab[7] = Contact();

    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook:: add_contact(void)
{
    this->tab[index].SetContact();
    this->index++;
}

void	PhoneBook:: GetContact(void){


    int i = 0;
	int index = 0;
    std::cout << "     index|first name| last name| nick name" << std::endl;
    while (i < 8 && this->tab[i].exist())
    {
        this->tab[i].GetContactSmall(i);
		i++;
    }
	std::cin >> index;
	if (this->tab[index].exist())
	{
		this->tab[index].FullList();
	}
	else
	{
		std::cout << "No contact for this index";
	}
    std::cin.clear();
}


