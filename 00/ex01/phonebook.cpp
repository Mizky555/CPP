#include <iostream>
#include <cctype>
#include <iomanip>
#include <string>
#include <sstream>
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
	int m;

	m = 0;
	str = "";
	while (!std::cin.eof() || check_str(str) == 0)
	{
		if (m == 0)
		{
			m = 1;
			std::cout << "Enter First Name : ";
			getline(std::cin, str);
		}
		else if (str.empty() || check_str(str) == 0)
		{
			std::cout << "Enter First Name (Only letters) : ";
			getline(std::cin, str);
		}
		else
			break;
	}
	this->contacts[i % 8].add_firstname(str);

	m = 0;
	str = "";
	while (!std::cin.eof() || check_str(str) == 0)
	{
		if (m == 0)
		{
			m = 1;
			std::cout << "Enter Last Name : ";
			getline(std::cin, str);
		}
		else if (str.empty() || check_str(str) == 0)
		{
			std::cout << "Enter Last Name (Only letters) : ";
			getline(std::cin, str);
		}
		else
			break;
	}
	this->contacts[i % 8].add_lastname(str);

	m = 0;
	str = "";
	while (!std::cin.eof() || check_str(str) == 0)
	{
		if (m == 0)
		{
			m = 1;
			std::cout << "Enter Nick Name : ";
			getline(std::cin, str);
		}
		else if (str.empty() || check_str(str) == 0)
		{
			std::cout << "Enter Nick Name (Only letters) : ";
			getline(std::cin, str);
		}
		else
			break;
	}
	this->contacts[i % 8].add_nickname(str);

	m = 0;
	str = "";
	while (!std::cin.eof() || check_digit(str) == 0)
	{
		if (m == 0)
		{
			m = 1;
			std::cout << "Enter PhoneNumber : ";
			getline(std::cin, str);
		}
		else if (str.empty() || check_digit(str) == 0)
		{
			std::cout << "Enter PhoneNumber (Only letters) : ";
			getline(std::cin, str);
		}
		else
			break;
	}
	this->contacts[i % 8].add_phonenumber(str);

	m = 0;
	str = "";
	while (!std::cin.eof())
	{
		if (m == 0)
		{
			m = 1;
			std::cout << "Enter Darkest Secret : ";
			getline(std::cin, str);
		}
		else if (str.empty())
		{
			std::cout << "Enter Darkest Secret again : ";
			getline(std::cin, str);
		}
		else
			break;
	}
	this->contacts[i % 8].add_secret(str);
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



void	PhoneBook::open_data(int i)
{
	int	index;
	std::string str;
	std::stringstream  sstream;

	std::cout << "Select your index >> ";
	getline(std::cin, str);
	if (str.size() == 1 && check_digit(str) == 1 && !std::cin.eof())
	{
		sstream << str;
		sstream >> index;
		if ((index <= 0 || index >= 9) && (i <= 8 || index > i))
		{
			std::cout << std::endl << "Invalid index" << std::endl;
			return;
		}
		str = this->contacts[index - 1].get_firstname();
		std::cout << "First Name : " << str << std::endl;
		str = this->contacts[index - 1].get_lastname();
		std::cout << "Last Name : " << str << std::endl;
		str = this->contacts[index - 1].get_nickname();
		std::cout << "Nick Name : " << str << std::endl;
		str = this->contacts[index - 1].get_phonenumber();
		std::cout << "Darkest Secret : " << str << std::endl;
		str = this->contacts[index - 1].get_secret();
		std::cout << "Phonenumber : " << str << std::endl << std::endl;
	}
	else
		std::cout << std::endl << "Invalid index" << std::endl;
}

void	PhoneBook::search(int i)
{
	std::string str;

	if (i == 0)
	{
		std::cout << std::endl << "*********" << std::endl;
		std::cout << "**Empty**" << std::endl;
		std::cout << "*********" << std::endl << std::endl;
		return ;
	}
	std::cout << std::endl << "---------------------------------------------" << std::endl;
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
	open_data(i);
}
