#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string name)
{
	return (new Zombie(name));
}

// Zombie* newZombie(std::string name)
// {
// 	Zombie *zombie;

// 	zombie = new Zombie(name);
// 	return (zombie);
// }

// Zombie* newZombie(std::string name)
// {
// 	Zombie* zombie = new Zombie(name);
// 	return (zombie);
// }
