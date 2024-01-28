
#include "AForm.hpp"

AForm::AForm()
{
	std::cout << "Hello AForm" << std::endl;
}
AForm::~AForm()
{
	std::cout << "Bye Bye AForm" << std::endl;
}
AForm::AForm(std::string name, int gradeex, int gradesign): _name(name), _signed(0), _gradeex(gradeex), _gradesign(gradesign)
{
	if (gradeex > 150 || gradesign > 150)
		throw GradeTooLowException();
	else if (gradeex < 1 || gradesign < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm & cpy)
: _name(cpy._name), _signed(cpy._signed), _gradeex(cpy._gradeex), _gradesign(cpy._gradesign)
{
}
AForm & AForm::operator=(const AForm & cpy)
{
	_signed = cpy.getSigned();
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

int AForm::getGradeEx() const
{
	return (this->_gradeex);
}

int AForm::getGradeSign() const
{
	return (this->_gradesign);
}


void AForm::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradesign)
		throw AForm::GradeTooLowException();
	this->_signed = 1;
}
std::ostream & operator << (std::ostream & stream, AForm const & rhs)
{
	stream << rhs.getName() << " ";
	if (rhs.getSigned() == 1)
		stream << "signed" << " " << rhs.getGradeEx() << " " << rhs.getGradeSign();
	else
		stream << "unsigned" << " " << rhs.getGradeEx() << " " << rhs.getGradeSign();
	return (stream);
}
