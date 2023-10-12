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
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string _name, int hp, int ep, int dmg);
		~ClapTrap();
		ClapTrap(const ClapTrap &cpy);
		ClapTrap & operator = (ClapTrap const & other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName() const;
		int getHp() const;
		int getEp() const;
		int getDmg() const;
		void setName(std::string name);
		void setHp(int hp);
		void setEp(int Ep);
		void setDmg(int dmg);
};

#endif
