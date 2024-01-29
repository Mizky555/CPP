#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// void	testShrub()
// {
// 	try
// 	{
// 		ShrubberyCreationForm	form("CPP");
// 		Bureaucrat	obj("Grammy", 137);

// 		std::cout << form << std::endl;
// 		std::cout << obj << std::endl;
// 		obj.signForm(form);
// 		obj.executeForm(form);
// 		std::cout << form << std::endl;
// 	}
// 	catch (std::exception & e)
// 	{
// 		std::cout << BRED << e.what() << RESET << std::endl;
// 	}
// }

void	testRobot()
{
	try
	{
		RobotomyRequestForm	form("C++");
		Bureaucrat	obj("Mos", 45);

		std::cout << form << std::endl;
		std::cout << obj << std::endl;
		obj.signForm(form);
		obj.executeForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

// void	testPresiden()
// {
// 	try
// 	{
// 		PresidentialPardonForm	form("Code");
// 		Bureaucrat	obj("Mai", 5);

// 		std::cout << form << std::endl;
// 		std::cout << obj << std::endl;
// 		obj.signForm(form);
// 		obj.executeForm(form);
// 		std::cout << form << std::endl;
// 	}
// 	catch (std::exception & e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// }

int	main(void)
{
	// testShrub();
	// std::cout << "===========================================\n";
	testRobot();
	// std::cout << "===========================================\n";
	// testPresiden();
	// std::cout << "===========================================\n";
	// return (0);
}
