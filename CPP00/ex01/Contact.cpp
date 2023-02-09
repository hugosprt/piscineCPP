#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

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

void Contact::MakeItSmall(std::string str) {

    if (str.size() > 9)
        std::cout << str.substr(0,9) << ".";
    else
        std::cout << std::setw(10) << str;
        
}

void Contact::GetContactSmall(int index){
    
    std::cout <<  std::setw(10) << index << "|";
    MakeItSmall(this->FirstName);
    std::cout << "|";
    MakeItSmall(this->LastName);
    std::cout << "|";
    MakeItSmall(this->NickName);
    std::cout << std::endl;
}


void Contact::FullList(void){
    std::cout << "First name : "<< this->FirstName << std::endl;
    std::cout << "Last name : " << this->LastName << std::endl;
    std::cout << "NickName : " << this->NickName << std::endl;
    std::cout << "Phone number :" << this->PhoneNumber << std::endl;
    std::cout << "Darkest secret :" <<  this->DarkestSecret << std::endl;
}