#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	Animal animal;
	Cat cat;
	Dog dog;

	animal.makeSound();
	cat.makeSound();
	dog.makeSound();

	const Animal* animalanimal = new Animal();
	const Animal* animalcat = new Dog();
	const Animal* animaldog = new Cat();

	std::cout << animalanimal->getType() << std::endl;
	std::cout << animalcat->getType() << std::endl;
	std::cout << animaldog->getType() << std::endl;

	const Animal cpyconstanimal(animal);
	const Cat cpyconstcat(cat);
	const Dog cpyconstdog(dog);

	delete animalanimal;
	delete animalcat;
	delete animaldog;

	//Wrong Wrong Wrong
	std::cout << "======Wrong Animal======" << std::endl;

	const WrongAnimal* wanimal = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();

	wanimal->makeSound();
	wcat->makeSound();

	std::cout << "========================" << std::endl;


// const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	const Cat cat;
//     const Cat copycat(cat);

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	delete j;//should not create a leak
// 	delete i;
// 	delete meta;
// 		std::cout << "\nWrongAnimal\n" << std::endl;

// 	const WrongAnimal* wrong = new WrongAnimal();
// 	const WrongAnimal* wrongCat = new WrongCat();

// 	std::cout << wrongCat->getType() << " " << std::endl;

// 	wrong->makeSound();
// 	wrongCat->makeSound();

// 	delete wrong;
// 	delete wrongCat;
// 	return (0);
}
