#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

int	main()
{
	std::string	input;
	PhoneBook	book;
	int	i = 0;

	while (1)
	{
		std::cout << ">>";
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
			std::cout << "exittttt" << std::endl;
			break;
		}
	}
}
