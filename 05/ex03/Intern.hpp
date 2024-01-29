#ifndef INTERN_HPP
# define INTERN_HPP

#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
// class Bureaucrat;
// class PresidentialPardonForm;
// class RobotomyRequestForm;
// class ShrubberyCreationForm;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern & cpy);
		Intern &operator=(const Intern & cpy);
		AForm* makeForm(const std::string formName, const std::string target);

		class NoFormException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("->NoFormException");
				}
		};
};

#endif
