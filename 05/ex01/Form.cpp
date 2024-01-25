
#include "Form.hpp"

Form::Form()
{
	std::cout << "Hello Form" << std::endl;
}
Form::~Form()
{
	std::cout << "Bye Bye Form" << std::endl;
}
Form::Form(std::string name, int gradeex, int gradesign): _name(name), _gradeex(gradeex), _gradesign(gradesign)
{
	if (gradeex > 150 || gradesign > 150)
		throw GradeTooLowException();
	else if (gradeex < 1 || gradesign < 1)
		throw GradeTooHighException();
}

Form::Form(const Form & cpy)
: _name(cpy._name), _signed(cpy._signed), _gradeex(cpy._gradeex), _gradesign(cpy._gradesign)
{
}
Form & Form::operator=(const Form & cpy)
{
	_signed = cpy.getSigned();
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getGradeEx() const
{
	return (this->_gradeex);
}

int Form::getGradeSign() const
{
	return (this->_gradesign);
}

void Form::signForm(const Bureaucrat & cpy)
{

}

void Form::beSigned(const Bureaucrat & cpy)
{

}
