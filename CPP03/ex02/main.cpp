#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

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

	ScavTrap bonhome3;
	ScavTrap bonhome4;


	bonhome3 = ScavTrap("Scavhugo");

	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome3.attack("pol");
	bonhome4 = ScavTrap("jj");
	bonhome4.takeDamage(9);
	bonhome4.attack("pol");
	bonhome4.beRepaired(9);
	bonhome4.takeDamage(19);
	bonhome4.beRepaired(9);
	bonhome4.guardGate();

	FlagTrap bonhome5;
	FlagTrap bonhome6;


	bonhome5 = FlagTrap("Flaghugo");

	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome5.attack("pol");
	bonhome6 = FlagTrap("jj");
	bonhome6.takeDamage(9);
	bonhome6.attack("pol");
	bonhome6.beRepaired(9);
	bonhome6.takeDamage(19);
	bonhome6.beRepaired(9);
	bonhome6.highFivesGuys();

}