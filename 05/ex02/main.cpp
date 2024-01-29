#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		std::cout << "==========Shruby==========" << std::endl;
		Bureaucrat	Shruby("Shruby", 16);//name, grade
		ShrubberyCreationForm	formS("test_Shruby");//target(name,145,137)
		Shruby.signForm(formS);
		formS.execute(Shruby);

		std::cout << "==========Roboty==========" << std::endl;
		Bureaucrat	Roboty("Roboty", 2);
		RobotomyRequestForm formR("test_Roboty");//target(name,72,45)
		Roboty.signForm(formR);
		formR.execute(Roboty);

		std::cout << "==========President==========" << std::endl;
		Bureaucrat	President("President", 3);
		PresidentialPardonForm formP("test_President");//target(name,25,5)
		President.signForm(formP);
		formP.execute(President);

		std::cout << "=============================" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
