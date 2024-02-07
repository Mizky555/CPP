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

std::vector<int> Span::getData()
{
	return (this->_data);
}

Span::Span(const Span & cpy)
{
	*this = cpy;
}

void Span::addNumber(int number)
{
	if ((std::find(this->_data.begin(), this->_data.end(), number)) != this->_data.end())
		throw AlreadyThisNumber();
	else if (this->_data.size() < this->_size)
		_data.push_back(number);
	else if (this->_data.size() >= this->_size)
		throw NumberTooMuch();
}

unsigned int Span::longestSpan()
{
	if (this->_data.size() <= 1)
		throw NumberTooLittle();

	int min;
	int max;

	min = this->_data[0];
	for (unsigned int i = 0 ; i < this->_data.size() ; i++)
	{
		if (min >= this->_data[i])
			min = this->_data[i];
	}
	max = this->_data[0];
	for (unsigned int i = 0 ; i < this->_data.size() ; i++)
	{
		if (max <= this->_data[i])
			max = this->_data[i];
	}
	return (max - min);
}



unsigned int Span::shortestSpan()
{
	unsigned int min;
	int max = this->_data[0];
	unsigned int n;

	for (unsigned int i = 0 ; i < this->_data.size() ; i++)
	{
		if (max <= this->_data[i])
			max = this->_data[i];
	}
	min = max;
	for (unsigned int i = 0 ; i < this->_data.size() ; i++)
	{
		for (unsigned int j = 1 ; j < this->_data.size() ; j++)
		{
			if (i != j)
			{
				if (this->_data[i] >= this->_data[j])
					n = this->_data[i] - this->_data[j];
				else
					n = this->_data[j] - this->_data[i];
				if (n < min)
					min = n;
			}
		}
	}
	return (min);
}

Span  & Span::operator=(const Span & cpy)
{
	this->_size = cpy._size;
	this->_data = cpy._data;
	return (*this);
}
