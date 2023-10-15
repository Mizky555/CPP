#ifndef WRONGCAT_HPP
#	define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &cpy);
		WrongCat & operator = (WrongCat const & other);
		void makeSound() const;
};

#endif
