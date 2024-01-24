#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int	main(){

	try {
		// Bureaucrat z = Bureaucrat("Z", -1); // overflow
		Bureaucrat a = Bureaucrat("A", 1);
		Bureaucrat b = Bureaucrat("B", 150);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.decrement();
		b.increment();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.increment(); a.increment();	// expected error too high
		// b.decrease(); b.decrease();	// expected error too low;
	} catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
