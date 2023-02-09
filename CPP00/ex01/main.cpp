#include <iostream>
#include "PhoneBook.hpp"


int main(void)
{
    PhoneBook PhoneBook;
    std::string champs;
    std::cout << "Command ADD, SEARCH, and EXIT" << std::endl;
    while (1)
    {
        std::getline(std::cin, champs);
        if (champs == "ADD"){
          PhoneBook.add_contact();
        }
        if (champs == "SEARCH"){
              PhoneBook.GetContact();
              
        }
        if (champs == "EXIT"){
          break ;
        }
    }
    return (0);
}