#ifndef FRAGTRAP_HPP
#	define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string name);
		FragTrap(FragTrap const & cpy);
		FragTrap & operator=(FragTrap const & other);
		void attack(const std::string& target);
		void highFivesGuys(void);

};

#endif
