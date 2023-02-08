#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void){
    here = false;
    return ;
}

Contact::~Contact(void){
    return ;
}

void Contact::SetContact(void)
{
    std::cout << "enter first name :";
    while(std::getline(std::cin, this->FirstName) && this->FirstName == "\0")
    {
         std::cout << "enter first name :";
    }
    std::cout << "enter LastName :";
    while(std::getline(std::cin, this->LastName) && this->LastName == "\0")
    {
         std::cout << "enter LastName :";
    }
    std::cout << "enter NickName :";
    while(std::getline(std::cin, this->NickName) && this->NickName == "\0")
    {
         std::cout << "enter NickName :";
    }
    std::cout << "enter PhoneNumber :";
    while(std::getline(std::cin, this->PhoneNumber) && this->PhoneNumber == "\0")
    {
         std::cout << "enter PhoneNumber :";
    }
    std::cout << "enter DarkestSecret :";
    while(std::getline(std::cin, this->DarkestSecret) && this->DarkestSecret == "\0")
    {
         std::cout << "enter DarkestSecret :";
    }
    here = true;
    
}

bool  Contact::exist(void)
{
    if (here)
        return (true);
    return (false);
}

void Contact::GetInfo(void){
    
    std::cout << this->FirstName;
}

void Contact::MakeItSmall(std::string str){

    if (str.size > 9)
        std::cout << str.substr(0,9) << ".";
    else
        
}

void Contact::GetContactSmall(int index){
    
    std::cout << index + 1;
    std::cout << this->FirstName;
    std::cout << this->LastName;
    std::cout << this->NickName;
}