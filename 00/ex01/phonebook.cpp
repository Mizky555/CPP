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

void	cut_str(std::string str)
{
	int	len = str.length();
	int	i;

	if (len <= 10)
	{
		for (i = 1 ; i <= (10 - len) ; i++)
			std::cout << " ";
		for (i = 0 ; i <= len ; i++)
			std::cout << str[i];
	}
	else
	{
		for (i = 0 ; i <=9 ; i++)
			{
				if (i == 9)
					std::cout << ".";
				else
					std::cout << str[i];
			}
	}
}

void	PhoneBook::open_data(void)
{
	std::string	index;
	std::string str;

	getline(std::cin, index);
	str = this->contacts[index].get_lastname();
	for (int i = 0 ; i <= 3 ; i++)
	{
	}
}

void	PhoneBook::search(int i)
{
	std::string str;

	if (i == 0)
	{
		std::cout << "*********" << std::endl;
		std::cout << "**Empty**" << std::endl;
		std::cout << "*********" << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "Index" << "|"
					 << std::setw(10) << std::right << "Fisrt name" << "|"
					 << std::setw(10) << std::right << "Last name" << "|"
					 << std::setw(10) << std::right << "Nick name" << "|" << std:: endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int index = 0 ; index < i && i <= 8; index++)
	{
		std::cout << "|" << std::setw(10) << std::right << index + 1 << "|";
		str = this->contacts[index].get_firstname();
		cut_str(str);
		std::cout << "|";
		str = this->contacts[index].get_lastname();
		cut_str(str);
		std::cout << "|";
		str = this->contacts[index].get_nickname();
		cut_str(str);
		std::cout << "|" << std::endl;
	}
	for (int index = 0 ; index <= 7 && i >= 9 ; index++)
	{
		std::cout << "|" << std::setw(10) << std::right << index + 1 << "|";
		str = this->contacts[index].get_firstname();
		cut_str(str);
		std::cout << "|";
		str = this->contacts[index].get_lastname();
		cut_str(str);
		std::cout << "|";
		str = this->contacts[index].get_nickname();
		cut_str(str);
		std::cout << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Select your index >> ";
	open_data();
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
