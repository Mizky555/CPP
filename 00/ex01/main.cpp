#include <iostream>

class	Contact
{
	private:
		// int	index;
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
	public:
		// Contact(void);
		// ~Contact(void);
		void add_firstname(std::string str);
		void add_lastname(std::string str);
		void add_nickname(std::string str);
		void add_phonenumber(std::string str);
		std::string get_firstname(void);
		// std::string get_lastname(void);
		// std::string get_nickneam(void);
		// std::string get_phonenumber(void);


};

void	Contact::add_firstname(std::string str)
{
	Contact::firstname = str;
}

void	Contact::add_lastname(std::string str)
{
	Contact::lastname = str;
}

void	Contact::add_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::add_phonenumber(std::string str)
{
	this->phonenumber = str;
}

std::string	Contact::get_firstname(void)
{
	return (this->firstname);
}

std::string	Contact::get_lastname(void)
{
	std::cout << "Test lastname : " << lastname << std::endl;
}

class	PhoneBook
{
	private:
		Contact contacts[8];
		// int	index;
	public:
		void	add(void);

};


void	PhoneBook::add(void)
{
	std::string	str;

	std::cout << "Enter First Name : ";
	getline(std::cin, str);
	this->contacts[0].add_firstname(str);
	std::cout << "Enter Last Name : ";
	getline(std::cin, str);
	this->contacts[0].add_lastname(str);
	std::cout << "Enter Nick Name : ";
	getline(std::cin, str);
	this->contacts[0].add_nickname(str);
	std::cout << "Enter Phonenumber : ";
	getline(std::cin, str);
	this->contacts[0].add_phonenumber(str);
	std::cout << this->contacts[0].get_firstname() << std::endl;
}
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
