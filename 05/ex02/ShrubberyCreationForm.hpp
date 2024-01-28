#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & cpy);
		ShrubberyCreationForm(const ShrubberyCreationForm & cpy);
		void execute(const Bureaucrat & execute) const;
	private:
		std::string _target;
	class CanNotOpen: public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("->CanNotOpen");
			}
	};
};

#define ASCII_TREES "\
      .             \n\
   __/ \\__          \n\
   \\     /          \n\
   /.'o'.\\          \n\
    .o.'.           \n\
   .'.'o'.          \n\
  o'.o.'.o.         \n\
 .'.o.'.'.o.        \n\
.o.'.o.'.o.'.       \n\
   [_____]          \n\
    \\___/           "
