#ifndef FRAGTRAP_HPP
#	define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string name);
		FragTrap(FragTrap const & cpy);
		FragTrap & operator=(FragTrap const & other);
		virtual void attack(const std::string& target);
		void highFivesGuys(void);

};

#endif
