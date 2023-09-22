#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

int	main()
{
	std::string	input;
	PhoneBook	book;
	int	i = 0;

	while (!std::cin.eof())
	{
		std::cout << std::endl << "-------MENU-----" << std::endl;
		std::cout << "1.ADD" << std::endl;
		std::cout << "2.SEARCH" << std::endl;
		std::cout << "3.EXIT" << std::endl;
		std::cout << "----------------" << std::endl;
		std::cout << "Select menu number >> ";
		getline(std::cin, input);
		if (input == "1")
		{
			book.add(i);
			i++;
		}
		else if (input == "2")
		{
			book.search(i);
		}
		else if (input == "3")
		{
			std::cout << std::endl << "Good Buy" << std::endl << std::endl;
			break;
		}
	}
}
