#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "Hello Shrubberry" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Bye Bye Shrubberry" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & cpy)
{
	AForm::operator=(cpy);
	this->_target = cpy._target;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat & execute) const
{
	std::ofstream createFile;
	std::string file;
	if (this->getSigned() == 0)
		throw AForm::NoSignException();
	else if (execute.getGrade() > this->getGradeEx())
		throw AForm::GradeTooLowException();
	file = this->_target + "_shrubberry";
	createFile.open(file.c_str());
	if (createFile.is_open() != 1)
		throw ShrubberyCreationForm::CanNotOpen();
	createFile << ASCII_TREES;
	createFile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : AForm(cpy)
{

}

