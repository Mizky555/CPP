#include <iostream>
#include <fstream>
#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error 3 parameter (filename, s1, s2)" << std::endl;
		return (1);
	}
	std::string pathName = std::string(argv[1]);
	std::string s1 = std::string(argv[2]);
	std::string s2 = std::string(argv[3]);
	Sed sed(pathName, s1, s2);// sed คือ method
	if (!sed.isOpen())
	{
		std::cerr << "Error opening the file." << std::endl;
		return (1);
	}
	sed.readFile();
	if (sed.rePlace() == 1)
		return (1);
	if (sed.outPut() == 1)
		return (1);
}
