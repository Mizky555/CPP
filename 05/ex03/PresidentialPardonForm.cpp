#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "Hello Presidenttial" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Bye Bye Presidenttial" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & cpy)
{
	this->_target = cpy._target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & cpy) : AForm(cpy)
{
}

void PresidentialPardonForm::execute(const Bureaucrat & execute) const
{
	if (this->getSigned() == 0)
		throw AForm::NoSignException();
	else if (execute.getGrade() > this->getGradeEx())
		throw AForm::GradeTooLowException();
	std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
