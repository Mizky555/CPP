#ifndef SCAVTRAP_HPP
#	define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(ScavTrap const & cpy);
		ScavTrap & operator=(ScavTrap const & other);
		void attack(const std::string& target);
		void guardGate();

};

#endif
