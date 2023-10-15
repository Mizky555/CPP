#include <iostream>
#include "Cat.hpp"


Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Hello Cat"<< std::endl;
}
Cat::~Cat()
{
	std::cout << "Bye Bye Cat" << std::endl;
}
Cat::Cat(const Cat &cpy)
{
	std::cout << "CCCCat" << std::endl;
	*this = cpy;
}
Cat & Cat::operator = (Cat const & other)
{
		std::cout << "Cat=แงว" << std::endl;
		this->_type = other._type;
		return (*this);
}
void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

