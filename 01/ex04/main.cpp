#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error 3 parameter (filename, s1, s2)";
		return (1);
	}
	std::string pathName = std::string(argv[1]);
	std::string str1 = std::string(argv[2]);
	std::string str2 = std::string(argv[3]);
	

}
