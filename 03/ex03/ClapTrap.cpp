#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: _name(name), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "ClapTrap " << this->_name << " Create"<< std::endl;
}
ClapTrap::ClapTrap()
: _name("ClapClap"), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "ClapTrap Default Create"<< std::endl;
}
ClapTrap::ClapTrap(std::string name, int hp, int ep, int dmg)
: _name(name), _hp(hp), _ep(ep), _dmg(dmg)
{
	std::cout << "ClapTrap " << this->_name << " Create"<< std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " Destroy "<< std::endl;
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

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHp() const
{
	return (this->_hp);
}

int ClapTrap::getEp() const
{
	return (this->_ep);
}

int ClapTrap::getDmg() const
{
	return (this->_dmg);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHp(int hp)
{
	this->_name = hp;
}

void ClapTrap::setEp(int ep)
{
	this->_name = ep;
}

void ClapTrap::setDmg(int dmg)
{
	this->_name = dmg;
}
