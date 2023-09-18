#include <iostream>
#include <cctype>
#include <iomanip>
#include <string>
#include "phonebook.hpp"



int	PhoneBook::check_digit(std::string str)
{
	int	i = 0;
	while (str[i])
	{
		if (!(isdigit(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	PhoneBook::check_str(std::string str)
{
	int	i = 0;

	while (str[i])
	{
		if (!(islower(str[i])) && !(isupper(str[i])))
			return (0);
		i++;
	}
	return (1);
}

void	PhoneBook::add(int i)
{
	std::string	str;

	std::cout << "Enter First Name : ";
	getline(std::cin, str);
	while (str.empty() || check_str(str) == 0)
	{
		std::cout << "Enter First Name (Only letters) : ";
		getline(std::cin, str);
	}
	this->contacts[i % 8].add_firstname(str);

	std::cout << "Enter Last Name : ";
	getline(std::cin, str);
	while (str.empty() || check_str(str) == 0)
	{
		std::cout << "Enter Last Name Please (Only letters) : ";
		getline(std::cin, str);
	}
	this->contacts[i % 8].add_lastname(str);

	std::cout << "Enter Nick Name : ";
	getline(std::cin, str);
	while (str.empty() || check_str(str) == 0)
	{
		std::cout << "Enter Nick Please (Only letters) : ";
		getline(std::cin, str);
	}
	this->contacts[i % 8].add_nickname(str);

	std::cout << "Enter Phone Number : ";
	getline(std::cin, str);
	while (str.empty() || check_digit(str) == 0)
	{
		std::cout << "Enter Phone Number Please (Only numbers) : ";
		getline(std::cin, str);
	}
	this->contacts[i % 8].add_phonenumber(str);

}


void	PhoneBook::search(int i)
{
	// int index = 0;
	std::string str = this->contacts[i].get_firstname();

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "Index" << "|"
					 << std::setw(10) << std::right << "Fisrt name" << "|"
					 << std::setw(10) << std::right << "Last name" << "|"
					 << std::setw(10) << std::right << "Nick name" << "|" << std:: endl;
	std::cout << "---------------------------------------------" << std::endl;



	// for (int i = 0; i <= 7; i++)
    // {
    //     std::cout
	// 			  << "|" << std::setw(10) << std::right << i + 1 << "|"
    //               << std::setw(10) << std::right << this->contacts[i].get_firstname() << "|"
    //               << std::setw(10) << std::right << this->contacts[i].get_lastname() << "|"
    //               << std::setw(10) << std::right << this->contacts[i].get_nickname() << "|" << std::endl;
    // }

}
// void	PhoneBook::add(int i)
// {
// 	std::string	str;


// 	std::cout << "Enter First Name : ";
// 	getline(std::cin, str);
// 	while (str.empty() || check_str(str) == 0)
// 	{
// 		std::cout << "Enter First Name (Only letters) : ";
// 		getline(std::cin, str);
// 	}
// 	this->contacts[i].add_firstname(str);

// 	std::cout << "Enter Last Name : ";
// 	getline(std::cin, str);
// 	while (str.empty() || check_str(str) == 0)
// 	{
// 		std::cout << "Enter Last Name Please (Only letters) : ";
// 		getline(std::cin, str);
// 	}
// 	this->contacts[i].add_lastname(str);

// 	std::cout << "Enter Nick Name : ";
// 	getline(std::cin, str);
// 	while (str.empty() || check_str(str) == 0)
// 	{
// 		std::cout << "Enter Nick Please (Only letters) : ";
// 		getline(std::cin, str);
// 	}
// 	this->contacts[i].add_nickname(str);

// 	std::cout << "Enter Phone Number : ";
// 	getline(std::cin, str);
// 	while (str.empty() || check_digit(str) == 0)
// 	{
// 		std::cout << "Enter Phone Number Please (Only numbers) : ";
// 		getline(std::cin, str);
// 	}
// 	this->contacts[i].add_phonenumber(str);

// 	// std::cout << this->contacts[0].get_firstname() << std::endl;
// // 	std::cout << this->contacts[0].get_lastname() << std::endl;
// // 	std::cout << this->contacts[0].get_nickname() << std::endl;
// // 	std::cout << this->contacts[0].get_phonenumber() << std::endl;
// }
