#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap("ScavScav", 100, 50, 20)
{
	std::cout << "ScavTrap Trap Trap Defult Create"<< std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Trap Trap " << this->getName() << " Destroy "<< std::endl;
}
ScavTrap::ScavTrap(const std::string name)
: ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Trap Trap " << this->getName() << " Create"<< std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & cpy)
: ClapTrap(cpy)
{
	*this = cpy;
}
ScavTrap & ScavTrap::operator=(ScavTrap const & other)
{
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEp(other.getEp());
	this->setDmg(other.getDmg());
	return (*this);
}

void ScavTrap::guardGate()
{
	if (this->getEp() >= 1 && this->getHp() >= 1)
	{
		this->setEp(this->getEp() - 1);
		std::cout << "GuardGate " << this->getName() << " Trap Trap" << std::endl;
	}
	else
		std::cout << "ScavTrap Trap Trap Hungry" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEp() >= 1 && this->getHp() >= 1)
	{
		this->setEp(this->getEp() - 1);
		std::cout << "ScavTrap " << this->getName() << " Trap Trap attacks " << target << " causing " << this->getDmg() << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap Trap Trap Hungry" << std::endl;
}
