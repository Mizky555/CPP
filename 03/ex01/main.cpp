#include <iostream>
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	ScavTrap1("ScavTrap1");
	ScavTrap	ScavTrap2("ScavTrap2");

	ScavTrap1.attack("Earth");
	ScavTrap2.takeDamage(9);
	ScavTrap2.beRepaired(4);
	ScavTrap2.beRepaired(4);
	ScavTrap2.beRepaired(4);
	ScavTrap2.guardGate();
	ScavTrap2.takeDamage(30);
	ScavTrap2.beRepaired(1);
	return (0);
}
