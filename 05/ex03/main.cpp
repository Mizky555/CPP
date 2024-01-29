#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;

	std::cout << "---------------------NoForm---------------------\n";
	AForm*	rrf;
	rrf = someRandomIntern.makeForm("kingdom ocean", "Bender");

	std::cout << "---------------------shrubbery---------------------\n";

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	std::cout << *rrf << std::endl;
	delete rrf;

	std::cout << "---------------------robotomy---------------------\n";
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	delete rrf;

	std::cout << "----------------------Presidentail--------------------\n";
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	std::cout << *rrf << std::endl;
	Bureaucrat	obj("Meow", 2);
	obj.signForm(*rrf);
	obj.executeForm(*rrf);
	std::cout << *rrf << std::endl;
	delete rrf;
	return (0);
}
