#include "Array.hpp"
#include "Array.tpp"
#include <iostream>
#include <cstdlib>

int main()
{
	Array<char> s1(10);//declare
	std::string str1 = "HelloKitty";
	std::cout << "~~~~~~~~~~~~~~Test String~~~~~~~~~~~~~" << std::endl;
	for (int i = 0 ; i < 10 ; i++)//check str1
	{
		std::cout << str1[i];
	}
	std::cout << " <- str1" << std::endl;
	for (int i = 0 ; i < 10 ; i++)//copy str1 -> s1
	{
		s1[i] = str1[i];
	}
	for (int i = 0 ; i < 10 ; i++)//check copy s1
	{
		std::cout << s1[i];
	}
	std::cout << " <- s1 (copy str1 -> s1)" << std::endl;

	Array<char> s2(s1);//declare and copy s1 -> s2
	for (int i = 0 ; i < 10 ; i++)//check copy s2
	{
		std::cout << s2[i];
	}
	std::cout << " <- s2 (copy s1 -> s2)" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::string str2 = "KittyHello";//new s2
	for (int i = 0 ; i < 10 ; i++)//s2
	{
		std::cout << str2[i];
	}
	std::cout << " <- str2" << std::endl;
	for (int i = 0 ; i < 10 ; i++)//copy s2 -> str
	{
		str1[i] = str2[i];
	}
	for (int i = 0 ; i < 10 ; i++)//check copy str
	{
		std::cout << str1[i];
	}
	std::cout << " <- str1 (copy str2 -> str1)" << std::endl;


    return 0;
}
