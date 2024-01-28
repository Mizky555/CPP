#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	std::string _name;
	bool _signed;
	int _gradeex;
	int _gradesign;

public:
	AForm();
	~AForm();
	AForm(std::string name, int gradeex, int gradesign);
	AForm(const AForm &cpy);
	AForm &operator=(const AForm &cpy);

	std::string getName() const;
	bool getSigned() const;
	int getGradeEx() const;
	int getGradeSign() const;

	void beSigned(const Bureaucrat & bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("->GradeTooHighException");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("->GradeTooLowException");
		}
	};
};

std::ostream &operator<<(std::ostream &out, AForm const &rhs);
