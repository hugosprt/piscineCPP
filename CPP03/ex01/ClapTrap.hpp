#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	
	protected:

	std::string _name;
	int			_hitpoint;
	int			_nrjpoint;
	int 		_attackdamage;

	public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap & src);
	ClapTrap & operator=(ClapTrap const  & src);
	~ClapTrap(void);

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


};

#endif