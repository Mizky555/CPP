#include <iostrem>
#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : _size(N)
{
}

Span::~Span()
{
}

Span::Span(const Span & cpy)
{
	*this = cpy;
}

void Span::addNumber(int number)
{
	_vec.push_back(number);
}

Span  & Span::operator=(const Span & cpy)
{
	return *this;
}
