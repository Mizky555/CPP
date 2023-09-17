#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

int	main()
{
	std::string	input;
	PhoneBook	book;

	while (1)
	{
		std::cout << ">>";
		getline(std::cin, input);
		if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			std::cout << "searchhhh" << std::endl;
		else if (input == "EXIT")
			std::cout << "exittttt" << std::endl;
		break;
	}
}
