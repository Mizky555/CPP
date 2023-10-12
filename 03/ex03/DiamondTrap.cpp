#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Trap Trap Defult Create"<< std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Trap Trap " << this->getName() << " Destroy "<< std::endl;
}
DiamondTrap::DiamondTrap(const std::string name)
: ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Trap Trap " << this->getName() << " Create"<< std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const & cpy)
{
	*this = cpy;
}
DiamondTrap & DiamondTrap::operator=(DiamondTrap const & other)
{
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEp(other.getEp());
	this->setDmg(other.getDmg());
	return (*this);
}



void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
