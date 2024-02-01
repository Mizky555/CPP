#include "iter.hpp"

int main()
{
	int phone[] = {0,6,4,4,1,6,6,2,6,6};
	char line[] = {'m','i','z','k','y','5','5','5'};

	std::cout << "Phonenumber : " << std::endl;
	iter(phone, 10, print<int>);
	std::cout << std::endl;
	std::cout << "Lineid: " << std::endl;
	iter(line, 8, print<char>);
	std::cout << std::endl;

}
