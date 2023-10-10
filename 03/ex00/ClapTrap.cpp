#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: _name(name), _hp(10), _ep(10), _dmg(0)
{

}
ClapTrap::~ClapTrap()
{

}
ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
}
ClapTrap & ClapTrap::operator = (ClapTrap const & other)
{
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_dmg = other._dmg;
	return (*this);
}
void ClapTrap::attack(const std::string& target)
{
	if (this->_ep >= 1 && this->_hp >= 1)
	{
		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap Hungry" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp >= 1)
	{
		std::cout << "ClapTrap " << this->_name << " take damage " << amount << std::endl;
		this->_hp = this->_hp - amount;
	}
	else
		std::cout << "ClapTrap die" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep >= 1 && this->_hp >= 1 && this->_hp <= 10)
	{
		this->_ep--;
		this->_hp = this->_hp + amount;
		std::cout << "ClapTrap " << this->_name << " be repaired " << amount << std::endl;
	}
	else if (this->_hp >= 10)
		std::cout << "Full Hit points." << std::endl;
	else if (this->_ep <= 0)
		std::cout << "ClapTrap Hungry" << std::endl;
	else
		std::cout << "ClapTrap die" << std::endl;

}
