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
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & cpy);
		DiamondTrap & operator=(DiamondTrap const & other);

		void whoAmI(void);
		void attack(const std::string& target);
	private:
		std::string _name;

};

#endif
