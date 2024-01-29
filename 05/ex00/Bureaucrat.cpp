#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Hello Bureaucrat" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bye Bye Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (this->getGrade() < 1)
		throw GradeTooHighException();
	else if (this->getGrade() > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & cpy)
{
	*this = cpy;
}

Bureaucrat  & Bureaucrat::operator=(const Bureaucrat & cpy)
{
	_grade = cpy.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
	_grade = grade;
}

void Bureaucrat::increment()
{
	_grade--;
}

void Bureaucrat::decrement()
{
	_grade++;
}

std::ostream & operator << (std::ostream & out, Bureaucrat const & rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (out);
}
