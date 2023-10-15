#include <iostream>
#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	std::cout << "Hello wrong meow"<< std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "Bye Bye wrong meow" << std::endl;
}
WrongCat::WrongCat(const WrongCat &cpy)
{
	std::cout << "meow" << std::endl;
	*this = cpy;
}
WrongCat & WrongCat::operator = (WrongCat const & other)
{
		std::cout << "WrongCat=meow" << std::endl;
		this->_type = other._type;
		return (*this);
}
void WrongCat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

