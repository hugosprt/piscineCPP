#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bonhome1;
	ClapTrap bonhome2;


	bonhome1 = ClapTrap("hugo");

	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome1.attack("pol");
	bonhome2 = ClapTrap("jj");
	bonhome2.takeDamage(9);
	bonhome2.attack("pol");
	bonhome2.beRepaired(9);
	bonhome2.takeDamage(19);
	bonhome2.beRepaired(9);

}