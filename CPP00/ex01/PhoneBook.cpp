
#include <iostream>
#include "Contact.hpp"

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->index = 1;

    Contact contact1;

    this->tab[0] = contact1;

    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook:: add_contact(void)
{
    this->tab[0].SetContact();
}
