#include "Say.hpp"

Say::Say() {

}
Say::~Say() {
	
}

void Say::say() const
{
	std::cout << "Sawaddee" << std::endl;
}

void Say::say(std::string firstName) const
{
	std::cout << "hello I'am " << firstName << " " << std::endl;
}

void Say::say(std::string firstName, std::string lastName) const
{
	std::cout << "hello I'am " << firstName << " " << lastName << std::endl;
}

void Say::say(std::string message, std::string firstName, std::string lastName)
{
	std::cout << message << " from " << firstName << " " << lastName << std::endl;
}
