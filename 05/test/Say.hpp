#pragma once

#include <iostream>


class Say
{
public:
	Say();
	~Say();
	void say() const;

	void say(std::string firstName) const;

	void say(std::string firstName, std::string lastName) const;

	void say(std::string message, std::string firstName, std::string lastName);
	
};

