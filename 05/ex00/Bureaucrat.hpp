#ifndef BUREAUCRAT_CPP
#	define BUREAUCRAT_CPP

#include <iostream>

class Bureaucrat
{
private:
	/* data */
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat & cpy);
	Bureaucrat & operator = (const Bureaucrat & other);
};

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::~Bureaucrat()
{
}


#endif

