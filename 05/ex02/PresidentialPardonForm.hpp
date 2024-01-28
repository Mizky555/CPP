#pragma once

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
		PresidentialPardonForm();
	public:
		~PresidentialPardonForm();
		PresidentialPardonForm(std::string traget);
		PresidentialPardonForm &operator=(const PresidentialPardonForm & rhs);
		PresidentialPardonForm(const PresidentialPardonForm & cpy);

		void execute(const Bureaucrat & execute) const;
};
