#pragma once

#include <iostream>
#include "Say.hpp"
#include <exception>

class Parent : public Say
{
private:
	std::string _firstName;
	std::string _lastName;
	int _age;

public:
	Parent();
	Parent(std::string fisrtName, std::string lastName);
	Parent(std::string fisrtName, std::string lastName, int age);
	Parent(std::string firstName);
	~Parent();
	// GETTER
	std::string getFirstName();
	std::string getLastName();
	int getAge();
	std::string getFullName();
	// SETTER
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setAge(int age);
	void setFullName(std::string firstName, std::string lastName);
	void youngOrOld();
	class ThisGuyIsOld : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Hello old guys");
			}
	};
	class ThisGuyIsYoung : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Hello young guys");
			}
	};

};
