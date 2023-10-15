#include <iostream>
#include "Animal.hpp"


Animal::Animal()
{
	std::cout << "Hello Animal"<< std::endl;
}
Animal::~Animal()
{
	std::cout << "Bye Bye Animal" << std::endl;
}
Animal::Animal(const Animal &cpy)
{
	std::cout << "AAAAnimal" << std::endl;
	*this = cpy;
}
Animal & Animal::operator = (Animal const & other)
{
		std::cout << "Animal=สัตว์" << std::endl;
		this->_type = other._type;
		return (*this);
}
std::string Animal::getType() const
{
	return (this->_type);
}
void Animal::makeSound() const
{
	std::cout << "akkkkk" << std::endl;
}

