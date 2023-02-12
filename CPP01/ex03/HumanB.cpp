#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_weapon = NULL;
	return;
}


HumanB::~HumanB(void)
{
	return ;
}


void HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
}


void HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " this human doesnt have a weapon" << std::endl;
	else
		std::cout  << this->_name << " attacks with their " << this->_weapon->getType() << std::endl; 
}