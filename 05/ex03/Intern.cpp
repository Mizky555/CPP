#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Hello Intern" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Bye Bye Intern" << std::endl;
}

Intern::Intern(const Intern & cpy)
{
	*this = cpy;
}

Intern & Intern::operator=(const Intern & cpy)
{
	(void)cpy;
	return (*this);
}

AForm* Intern::makeForm(const std::string formName, const std::string target)
{
	try
	{
		if (formName.compare("presidential pardon") == 0)
			return new PresidentialPardonForm(target);
		else if (formName.compare("robotomy request") == 0)
			return new RobotomyRequestForm(target);
		else if (formName.compare("shrubbery creation") == 0)
			return new ShrubberyCreationForm(target);
		else
			throw Intern::NoFormException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (NULL);
}
