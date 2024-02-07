#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>

class Span
{
	private:
		unsigned int _size;
		std::vector<int> _data;
	public:
		Span();
		~Span();
		Span(const Span &cpy);
		Span & operator=(const Span & cpy);

		Span(unsigned int N);
		void addNumber(int number);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		std::vector<int> getData();
		class AlreadyThisNumber : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Already this number");
				}
		};
		class NumberTooMuch : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Number Too Much");
				}
		};
		class NumberTooLittle : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Number Too Little");
				}
		};
};

#endif


