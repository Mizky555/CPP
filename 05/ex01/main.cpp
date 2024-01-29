#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "----------Couldn't sign----------" << std::endl;
	try
	{
		Bureaucrat b("First", 88);
		Form form("AForm", 60, 61);//name, gradeex, gradesign
		std::cout << "Bureaucrat Name: " << b.getName() << std::endl;
		std::cout << "Bureaucrat Grade: " << b.getGrade() << std::endl;
		std::cout << form << std::endl;
		b.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------Signed----------" << std::endl;
	try
	{
		Bureaucrat b("First", 60);
		Form form("AForm", 61, 61);
		std::cout << "Bureaucrat Name: " << b.getName() << std::endl;
		std::cout << "Bureaucrat Grade: " << b.getGrade() << std::endl;
		std::cout << form << std::endl;
		b.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
	// if (bureaucrat.getGrade() > this->_gradesign)
	// 	throw Form::GradeTooLowException();
	// this->_signed = 1;
