#include <iostream>
#include "PhoneBook.hpp"


int main(void)
{
    PhoneBook PhoneBook;
    std::string champs;

    while (1)
    {
        std::getline(std::cin, champs);


        if (champs == "ADD"){
          PhoneBook.add_contact();
        }
        if (champs == "SEARCH"){
           PhoneBook.GetContact();
        }
    }
}