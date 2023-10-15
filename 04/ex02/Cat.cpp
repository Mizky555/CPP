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
	delete this->_brain;
}
Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	std::cout << "CCCCat" << std::endl;
	this->_brain = new Brain(*cpy._brain);
	*this = cpy;
}
Cat & Cat::operator = (Cat const & other)
{
		std::cout << "Cat=แงว" << std::endl;
		this->_type = other._type;
		this->_brain = other._brain;
		return (*this);
}
void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

