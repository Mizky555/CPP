#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ScavTrap("Dia Dia Diamond_clap_name"), FragTrap("Dia Dia Diamond_clap_name"), _name("DiaDiaDiamond")
{
	this->setName("Dia Dia Diamond_clap_name");
	this->setHp(100);
	this->setEp(50);
	this->setDmg(30);

	std::cout << "DiamondTrap Trap Trap Defult Create"<< std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Trap Trap " << this->getName() << " Destroy "<< std::endl;
}
DiamondTrap::DiamondTrap(std::string name)
: ScavTrap(name +  "_clap_name"), FragTrap(name +  "_clap_name"), _name(name)
{
	this->setHp(100);
	this->setEp(50);
	this->setDmg(30);
	this->setName(name +  "_clap_name");
	std::cout << "DiamondTrap Trap Trap " << this->getName() << " Create"<< std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const & cpy)
: ClapTrap(cpy), ScavTrap(), FragTrap()
{
	*this = cpy;
}
DiamondTrap & DiamondTrap::operator=(DiamondTrap const & other)
{
	this->_name = other._name;
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEp(other.getEp());
	this->setDmg(other.getDmg());
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << std::endl;
	std::cout << this->getName() << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}
