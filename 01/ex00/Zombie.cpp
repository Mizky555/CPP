#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(std::string name): _name(name)
{
	std::cout << Zombie::_name << " was born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << Zombie::_name << " is gone" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
