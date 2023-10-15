#include <iostream>
#include "Dog.hpp"


Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Hello หมา"<< std::endl;
}
Dog::~Dog()
{
	std::cout << "Bye Bye หมา" << std::endl;
	delete this->_brain;
}
Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	std::cout << "มะหม๋า" << std::endl;
	*this = cpy;
	this->_brain = new Brain(*cpy._brain);
}
Dog & Dog::operator = (Dog const & other)
{
		std::cout << "Dog=หมา" << std::endl;
		this->_type = other._type;
		return (*this);
}
void Dog::makeSound() const
{
	std::cout << "เอ๋งๆ" << std::endl;
}

