#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "HumanA is born : " << HumanA::_name << std::endl;
}
HumanA::~HumanA()
{
	std::cout << "HumanA is gone : " << HumanA::_name << std::endl;
}
void HumanA::attack()
{
	std::cout << HumanA::_name << " attacks with their " << HumanA::_weapon.getType() << std::endl;
}
