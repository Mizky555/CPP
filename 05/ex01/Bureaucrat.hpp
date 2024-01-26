#pragma once

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat();//
	~Bureaucrat();//
	Bureaucrat(std::string name, int grade);//
	Bureaucrat(const Bureaucrat & cpy);//
	Bureaucrat &operator=(const Bureaucrat & cpy);//

	std::string getName() const;//
	int getGrade()const;//
	void setGrade(int grade);//
	void increment();//
	void decrement();//

	void signForm(Form & form);

	class GradeTooHighException: public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("string error");
			}
	};

	class GradeTooLowException: public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("string error");
			}
	};
};

std::ostream & operator << (std::ostream & out, Bureaucrat const & rhs);//


