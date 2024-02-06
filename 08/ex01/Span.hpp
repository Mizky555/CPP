#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
	public:
		Span();
		~Span();
		Span(const Span &cpy);
		Span & operator=(const Span & cpy);

		Span(unsigned int N);
		void addNumber(int number);
		unsigned int shortestSpan();
		unsigned int longestSpan();

		private:
			unsigned int _size;
			std::vector<int> _vec;
};

#endif


