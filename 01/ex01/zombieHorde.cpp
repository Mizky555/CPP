#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int n, std::string name)
{
	Zombie* bie = new Zombie[n];
	for(int i = 0; i < n; i++)
		bie[i].setName(name);
	return (bie);
}
