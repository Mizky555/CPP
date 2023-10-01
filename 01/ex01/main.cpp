#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	int	n = 10;

	Zombie* zombie = zombieHorde(n,"Bie");

	for (int i = 0; i < n; i++)
	{
		zombie[i].announce();
	}
	delete [] zombie;
}
