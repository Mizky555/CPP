#include "Harl.hpp"
#include <iostream>

int main(int argc, char** argv) {

  if (argc != 2)
    return 1;

  Harl harl;
  std::string lev[] = {"debug", "info", "warning", "error"};

  int n = -1;
  for (int i = 0; i <= 3; i++)
  {
    if (lev[i] == argv[1])
        n = i;
  }
  switch(n) {
    case 0:
      std::cout << "[DEBUG]" << std::endl;
      harl.complain("debug");
      std::cout << std::endl;
      // fall through
    case 1:
      std::cout << "[INFO]" << std::endl;
      harl.complain("info");
      std::cout << std::endl;
      // fall through
    case 2:
      std::cout << "[WARNING]" << std::endl;
      harl.complain("warning");
      std::cout << std::endl;
      // fall through
    case 3:
      std::cout << "[ERROR]" << std::endl;
      harl.complain("error");
      std::cout << std::endl;
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
  }
  return 0;
}


// #include <iostream>
// #include "Harl.hpp"

// int main()
// {
// 	Harl harl;

// 	harl.complain("debug");
// 	harl.complain("info");
// 	harl.complain("warning");
// 	harl.complain("error");
// }
