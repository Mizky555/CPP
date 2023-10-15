#ifndef CAT_HPP
#	define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &cpy);
		Cat & operator = (Cat const & other);
		void makeSound() const;
};

#endif
