
#include "contact.hpp"

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
	return (this->lastname);
}

std::string	Contact::get_nickname(void)
{
	return (Contact::nickname);
}

std::string	Contact::get_phonenumber(void)
{
	return (Contact::phonenumber);
}
