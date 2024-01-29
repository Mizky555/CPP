#pragma once

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & cpy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm & cpy);
		~RobotomyRequestForm();

		void execute(const Bureaucrat & execute) const;
};
