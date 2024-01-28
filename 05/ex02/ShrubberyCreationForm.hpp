#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
		ShrubberyCreationForm(const ShrubberyCreationForm & cpy);
		void execute(const Bureaucrat & execute) const;
	private:
		std::fstream _fd;
		std::string _file_name;
};
