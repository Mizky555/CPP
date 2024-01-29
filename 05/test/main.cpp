#include <iostream>
#include <exception>
#include "Parent.hpp"
// class InputNumber
// {
// public:
// 	InputNumber(void){
// 		// std::cout << "Hello InputNumber" << std::endl;
// 	};
// 	~InputNumber(){
// 		// std::cout << "Goodbye InputNumber" << std::endl;
// 	};

// 	int is_more_than_one(int numb)
// 	{
// 		if (numb > 1)
// 		{
// 			throw MoreThanOne();
// 			return 0;
// 		}
// 		return numb;
// 	}
// 	class MoreThanOne : public std::exception
// 	{
// 	public:
// 		const char *what() const throw()
// 		{
// 			return "ERROR: more than one";
// 		}
// 	};
// };



// int is_more_than_one(int numb) {
// 	if (numb > 1){
// 		std::cout << "is more than one" << std::endl;
// 		return 0;
// 	}
// 	std::cout << "IS Less than one" <<std::endl;
// 	return 1;
// }
void	sayHello(Parent &human) {
	std::cout << "hello Iam " << human.getFullName() << "and I am " << human.getAge() << " year old" << std::endl;
}

int main()
{
	// {
	// 	InputNumber test;
	// 	std::string buff;
	// 	int inp = 0;

	// 	std::cout << "Input number less equal than one" << std::endl;
	// 	if (std::getline(std::cin, buff))
	// 	{
	// 		inp = std::stoi(buff);
	// 		std::system("clear");
	// 	}
	// 	try
	// 	{
	// 		std::cout << "Before do something" << std::endl;
	// 		int ret = test.is_more_than_one(inp);
	// 		std::cout << "Input is : " << ret << std::endl;
	// 		std::cout << "after do something" << std::endl;
	// 		// something
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	{
		Parent	nobody;
		Parent	Opal("Thanaporn", "Sirirakwongsa", 25);
		Parent	Mobile("Mobile");
		Mobile.setAge(23);
		std::cout << "getFirstName " << Opal.getFirstName() << std::endl;
		std::cout << "getAge " << Opal.getAge() << std::endl;
		sayHello(Opal);
		sayHello(nobody);

		try{
			nobody.youngOrOld();
		}
		catch (const std::exception &e){
			std::cout << "nobody " << e.what() << std::endl;
		}
		try{
			Opal.youngOrOld();
		}
		catch (const std::exception &e){
			std::cout << "Opal " << e.what() << std::endl;
		}
		try{
			Mobile.youngOrOld();
		}
		catch (const std::exception &e){
			std::cout << "Mobile " << e.what() << std::endl;
		}

		// Opal.say("Opal");
		// Opal.say(nobody);
	}
	return 0;
}
