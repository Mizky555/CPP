#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
  // {
  //   Weapon club = Weapon("crude spiked club");
  //   HumanA bob("Bob", club);
  //   bob.attack();
  //   club.setType("5555555");
  //   bob.attack();
  //   bob.attack();
  // }
  std::cout << "----------" << std::endl;
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    // jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  return 0;
}
