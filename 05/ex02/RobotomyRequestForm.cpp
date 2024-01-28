#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "Hello RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Bye Bye RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & cpy) : AForm(cpy)
{

}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & cpy)
{
	this->_target = cpy._target;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat & execute) const
{
	if (this->getSigned() == 0)
		throw AForm::NoSignException();
	else if (execute.getGrade() > this->getGradeEx())
		throw AForm::GradeTooLowException();
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << "Robotomy successfully" << std::endl;
	else
		std::cout << "Robotony Failed" << std::endl;
}
