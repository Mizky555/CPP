#ifndef CLAPTRAP_HPP
#	define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hp;
		int _ep;
		int _dmg;
	public:
		ClapTrap(std::string _name);
		~ClapTrap();
		ClapTrap(const ClapTrap &cpy);
		ClapTrap & operator = (ClapTrap const & other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
