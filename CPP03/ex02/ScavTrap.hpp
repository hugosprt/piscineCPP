#ifndef SCAVTRAP_H

# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{	
	public :

	void attack(const std::string & target);
	void guardGate();
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & src);
	ScavTrap & operator=(ScavTrap const  & src);
	~ScavTrap(void);
};

#endif