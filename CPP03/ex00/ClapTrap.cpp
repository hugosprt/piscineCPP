#include "ClapTrap.hpp"



 ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor called" << std ::endl;
	this->_nrjpoint = 10;
	this->_attackdamage = 0;
	this->_hitpoint = 10;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor with name called" << std ::endl;
	this->_name = name;
	this->_nrjpoint = 10;
	this->_attackdamage = 0;
	this->_hitpoint = 10;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	std::cout << "Copy constructor called" << std ::endl;
	*this = src;
}

ClapTrap &  ClapTrap::operator=(ClapTrap const & src)
{
	std::cout << "Copy assignement operator called" << std ::endl;
	this->_name = src._name;
	this->_nrjpoint = src._nrjpoint;
	this->_attackdamage = src._attackdamage;
	this->_hitpoint = src._hitpoint;
	 if (this == &src)
        return (*this);
	return (*this);
}

 ClapTrap::~ClapTrap(void)
{
	return ;
}

void ClapTrap::attack(const std::string & target)
{
	if (this->_nrjpoint < 0 || this->_hitpoint < 0)
	{
		std::cout << "claptrap dcd rip" << std::endl;
		return ;
	}
	this->_nrjpoint--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_nrjpoint < 0 || this->_hitpoint < 0)
	{
		std::cout << "claptrap dcd rip" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << "repaired " << amount << std::endl;
	this->_hitpoint = this->_hitpoint + amount;
	this->_nrjpoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_nrjpoint < 0 || this->_hitpoint < 0)
	{
		std::cout << "claptrap dcd rip" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << "take " << amount << std::endl;
	this->_hitpoint = this->_hitpoint - amount;
}
