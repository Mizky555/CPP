#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << this->_name << " is born" << std::endl;
}

Zombie::Zombie()
{
	this->_name = "";
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is gone" << std::endl;
}

void Zombie::announce()
{
	std::cout << Zombie::_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
