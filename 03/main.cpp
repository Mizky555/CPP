#include <iostream>
#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	ClapTrap1("ClapTrap1");
	ClapTrap	ClapTrap2("ClapTrap2");

	ClapTrap1.attack("Earth");
	ClapTrap2.takeDamage(9);
	ClapTrap2.beRepaired(4);
	ClapTrap2.beRepaired(4);
	ClapTrap2.beRepaired(4);

	ClapTrap2.takeDamage(30);
	ClapTrap2.beRepaired(1);
	return (0);
}
