#include "Zombie.hpp"

int	main()
{
	Zombie* zombie;

	zombie = new Zombie("Bie");
	zombie->announce();
	delete zombie;
	std::cout << "------" << std::endl;
	Zombie* zom = newZombie("BiBi");
	zom->announce();
	delete zom;
	std::cout << "------" << std::endl;
	randomChump("Babie");
}
