#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << "HumanB is born : " << HumanB::_name << std::endl;
}
HumanB::~HumanB()
{
	std::cout << "HumanB is gone : " << HumanB::_name << std::endl;
}
void HumanB::attack()
{
	std::cout << HumanB::_name << " attacks with their " << HumanB::_weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
	HumanB::_weapon = &weapon;
}
