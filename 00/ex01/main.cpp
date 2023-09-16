#include <iostream>

// class	PhoneBook
// {
// 	public:
// 		std::string	rank;
// 		std::string	firstname;
// 		std::string	lastname;
// 		std::string	nickname;
// 		std::string	phonenum;

// }

int	main()
{
	std::string	input;

	while (1)
	{
		std::cout << ">>";
		getline(std::cin, input);
		if (input == "ADD")
			std::cout << "addddd" << std::endl;
		else if (input == "")
		break;
	}


}
