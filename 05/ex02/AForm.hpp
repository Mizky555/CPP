#ifndef AFORM_HPP
#define AFORM_HPP

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
	class NoSignException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("->NoSignException");
			}
	};
	virtual void execute(const Bureaucrat & execute) const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm const &rhs);
#endif
