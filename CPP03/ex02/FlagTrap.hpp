#ifndef FLAGTRAP_H

# define FLAGTRAP_H

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{	
	public :

	void attack(const std::string & target);
	void highFivesGuys(void);
	FlagTrap(void);
	FlagTrap(std::string name);
	FlagTrap(const FlagTrap & src);
	FlagTrap & operator=(FlagTrap const  & src);
	~FlagTrap(void);
};

#endif