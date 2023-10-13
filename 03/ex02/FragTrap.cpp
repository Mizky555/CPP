#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap("ScavFrag", 100, 100, 30)
{
	std::cout << "FragTrap Trap Trap Defult Create"<< std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Trap Trap " << this->getName() << " Destroy "<< std::endl;
}
FragTrap::FragTrap(const std::string name)
: ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Trap Trap " << this->getName() << " Create"<< std::endl;
}
FragTrap::FragTrap(FragTrap const & cpy)
: ClapTrap(cpy)
{
	*this = cpy;
}
FragTrap & FragTrap::operator=(FragTrap const & other)
{
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEp(other.getEp());
	this->setDmg(other.getDmg());
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (this->getEp() >= 1 && this->getHp() >= 1)
	{
		this->setEp(this->getEp() - 1);
		std::cout << "HighFivesGuys " << this->getName() << " Crap! Crap!" << std::endl;
	}
	else
		std::cout << "FragTrap Trap Trap Hungry" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->getEp() >= 1 && this->getHp() >= 1)
	{
		this->setEp(this->getEp() - 1);
		std::cout << "FragTrap " << this->getName() << " Trap Trap attacks " << target << " causing " << this->getDmg() << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap Trap Trap Hungry" << std::endl;
}
