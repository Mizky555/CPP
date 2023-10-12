#ifndef DIAMONDTRAP_HPP
#	define DIAMONDTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(DiamondTrap const & cpy);
		DiamondTrap & operator=(DiamondTrap const & other);

		void whoAmI(void);

};

#endif
