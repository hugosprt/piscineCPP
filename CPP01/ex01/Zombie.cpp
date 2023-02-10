#include "Zombie.hpp"



Zombie::Zombie(void){  
    return ;
}

Zombie::~Zombie(void){
   std::cout << "Zombie instance <" << this->_name << "> destroyed." << std::endl;
   return ;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void    Zombie::announce(void){
    std::cout << "<" << this->_name << "> : BraiiiiiiinnnzzzZ..." << std::endl;
}