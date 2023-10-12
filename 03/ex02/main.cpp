#include <iostream>
#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	FragTrap1("FragTrap1");
	FragTrap	FragTrap2("FragTrap2");

	FragTrap1.attack("Earth");
	FragTrap2.takeDamage(9);
	FragTrap2.beRepaired(4);
	FragTrap2.beRepaired(4);
	FragTrap2.beRepaired(4);
	FragTrap2.highFivesGuys();

	FragTrap2.takeDamage(30);
	FragTrap2.beRepaired(1);
	return (0);
}
