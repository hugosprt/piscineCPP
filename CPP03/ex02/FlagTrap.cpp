#include "FlagTrap.hpp"
#include "FlagTrap.hpp"

 FlagTrap::FlagTrap(void) : ClapTrap()
{
	std::cout << "Constructor called Flag" << std ::endl;
	this->_nrjpoint = 100;
	this->_attackdamage = 30;
	this->_hitpoint = 100;
	return ;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor with name called Flag" << std ::endl;
	this->_nrjpoint = 50;
	this->_attackdamage = 20;
	this->_hitpoint = 100;
	return ;
}

FlagTrap::FlagTrap(const FlagTrap & src) : ClapTrap(src)
{
	std::cout << "Copy constructor called Flag" << std ::endl;
	*this = src;
}

FlagTrap &  FlagTrap::operator=(FlagTrap const & src)
{
	std::cout << "Copy assignement operator called Flag" << std ::endl;
	this->_name = src._name;
	this->_nrjpoint = src._nrjpoint;
	this->_attackdamage = src._attackdamage;
	this->_hitpoint = src._hitpoint;
	 if (this == &src)
        return (*this);
	return (*this);
}

 FlagTrap::~FlagTrap(void)
{
	std::cout << "Destructor called Flag" << std ::endl;
	return ;
}


void FlagTrap::highFivesGuys(void)
{
	std::cout << "Pleaaaaaaaase hit my hand........" << std::endl;
}