#include "ScavTrap.hpp"
#include "ScavTrap.hpp"

 ScavTrap::ScavTrap(void)
{
	std::cout << "Constructor called Scav" << std ::endl;
	this->_nrjpoint = 50;
	this->_attackdamage = 20;
	this->_hitpoint = 100;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Constructor with name called Scav" << std ::endl;
	this->_name = name;
	this->_nrjpoint = 50;
	this->_attackdamage = 20;
	this->_hitpoint = 100;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap & src)
{
	std::cout << "Copy constructor called Scav" << std ::endl;
	*this = src;
}

ScavTrap &  ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "Copy assignement operator called Scav" << std ::endl;
	this->_name = src._name;
	this->_nrjpoint = src._nrjpoint;
	this->_attackdamage = src._attackdamage;
	this->_hitpoint = src._hitpoint;
	 if (this == &src)
        return (*this);
	return (*this);
}

 ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called Scav" << std ::endl;
	return ;
}


void ScavTrap::guardGate()
{
	std::cout << "Trap enter Gate keeper mode" << std::endl;
}
