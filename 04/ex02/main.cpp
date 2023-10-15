#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	//uncommet to see the abstract
	// Animal animal;
	// animal.makeSound();
	// const Animal* animalanimal = new Animal();
	// std::cout << animalanimal->getType() << std::endl;
	// const Animal cpyconstanimal(animal);
	// delete animalanimal;
	Cat cat;
	Dog dog;

	cat.makeSound();
	dog.makeSound();

	const Animal* animalcat = new Dog();
	const Animal* animaldog = new Cat();

	std::cout << animalcat->getType() << std::endl;
	std::cout << animaldog->getType() << std::endl;

	const Cat cpyconstcat(cat);
	const Dog cpyconstdog(dog);

	delete animalcat;
	delete animaldog;

	//Wrong Wrong Wrong
	std::cout << "======Wrong Animal======" << std::endl;

	const WrongAnimal* wanimal = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();

	wanimal->makeSound();
	wcat->makeSound();

	std::cout << "========================" << std::endl;
}
