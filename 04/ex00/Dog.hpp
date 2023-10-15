#ifndef DOG_HPP
#	define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &cpy);
		Dog & operator = (Dog const & other);
		void makeSound() const;
};

#endif
