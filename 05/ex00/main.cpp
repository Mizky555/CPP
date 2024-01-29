#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "----------Grade ok----------" << std::endl;
	{
		try {
			Bureaucrat a = Bureaucrat("A", 10);
			Bureaucrat b = Bureaucrat("B", 20);
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			a.decrement();
			b.increment();
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			a.increment(); a.increment();
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "----------Grade too Hight----------" << std::endl;
	{
		try {
			Bureaucrat a = Bureaucrat("A", 0);
			Bureaucrat b = Bureaucrat("B", 0);
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			a.decrement();
			b.increment();
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			a.increment(); a.increment();
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "----------Grade too low----------" << std::endl;
	{
		try {
			Bureaucrat a = Bureaucrat("A", 1000);
			Bureaucrat b = Bureaucrat("B", 2000);
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			a.decrement();
			b.increment();
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			a.increment(); a.increment();
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
