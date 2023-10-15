#ifndef WRONGANIMAL_HPP
#	define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
			std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal & operator = (WrongAnimal const & other);
		std::string getType() const;
		void makeSound() const;
};

#endif
