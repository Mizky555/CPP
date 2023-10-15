#include <iostream>
#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	this->_type = "All";
	std::cout << "Hello WrongAnimal"<< std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Bye Bye Animal" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "AAAAnimal" << std::endl;
	*this = cpy;
}
WrongAnimal & WrongAnimal::operator = (WrongAnimal const & other)
{
		std::cout << "WrongAnimal=สัตว์ประหลาด" << std::endl;
		this->_type = other._type;
		return (*this);
}
std::string WrongAnimal::getType() const
{
	return (this->_type);
}
void WrongAnimal::makeSound() const
{
	std::cout << "akkkkk" << std::endl;
}

