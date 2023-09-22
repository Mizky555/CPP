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
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::cout << "----------------" << std::endl;
		std::cout << "Select menu >> ";
		getline(std::cin, input);
		if (input == "ADD")
		{
			book.add(i);
			i++;
		}
		else if (input == "SEARCH")
		{
			book.search(i);
		}
		else if (input == "EXIT")
		{
			std::cout << std::endl << "Good Buy" << std::endl << std::endl;
			break;
		}
	}
}
