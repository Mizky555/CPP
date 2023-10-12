#include <iostream>
#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap	DiamondTrap1("DiamondTrap1");
	DiamondTrap	DiamondTrap2;

	DiamondTrap1.attack("Earth");
	DiamondTrap1.whoAmI();
	DiamondTrap2.takeDamage(9);
	DiamondTrap2.beRepaired(4);
	DiamondTrap2.beRepaired(4);
	DiamondTrap2.beRepaired(4);
	DiamondTrap2.highFivesGuys();

	DiamondTrap2.takeDamage(30);
	DiamondTrap2.beRepaired(1);
	return (0);
}
