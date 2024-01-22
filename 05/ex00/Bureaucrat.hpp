#ifndef BUREAUCRAT_CPP
#	define BUREAUCRAT_CPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string _name;
	int	_grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat & cpy);
	Bureaucrat & operator = (const Bureaucrat & other);
};

#endif

