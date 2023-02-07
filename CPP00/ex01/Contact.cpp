#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void){
    return ;
}

Contact::~Contact(void){
    return ;
}

void Contact::SetContact(void)
{
    std::getline(std::cin, this->Name);
    
}