
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
    this->index = 1;
    this->index2 = 0;


    this->tab[0] = Contact();
    this->tab[1] = Contact();
    this->tab[2] = Contact();
    this->tab[3] = Contact();
    this->tab[4] = Contact();
    this->tab[5] = Contact();
    this->tab[6] = Contact();
    this->tab[7] = Contact();
    this->tab[8] = Contact();

    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook:: add_contact(void)
{
    if (this->index == 9)
        this->index = 1;
    this->tab[index].SetContact();
    this->index++;
}

int	PhoneBook:: GetContact(void){


    int i = 1;
	int index = 43;
    if (!this->tab[i].exist())
    {
       std::cout << "Could not enter search mode" << std::endl;
        return 1;
    }
    std::cout << "Enter search mode" << std::endl;
    std::cout << "     index|first name| last name| nick name" << std::endl;
    while (i < 9 && this->tab[i].exist())
    {
        this->tab[i].GetContactSmall(i);
		i++;
    }
	while (std::getline(std::cin, this->index3)){
    index  = atoi(index3.c_str());
	if (this->tab[index].exist())
	{
		this->tab[index].FullList();
       break ;
	}
    else
		std::cout << "No contact for this index" << std::endl;
        break;
    }
    std::cin.clear();
    return (1);
}


