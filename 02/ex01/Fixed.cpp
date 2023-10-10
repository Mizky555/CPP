#include <iostream>
#include <sstream>
#include <fstream>
#include "Fixed.hpp"

const int Fixed::_fbit = 8;

Fixed::Fixed() : _fpoint(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &cpy)
{
	*this = cpy;
}

Fixed & Fixed::operator = (Fixed const & other)
{
	this->_fpoint = other._fpoint;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_fpoint);
}

void Fixed::setRawBits(int const raw)
{
	this->_fpoint = raw;
}

//ex01

Fixed::Fixed(const float f)
{
	this->_fpoint = (int)roundf(f * (1 << this->_fbit)); //f เป็น float เลยต้องแปลงเป็น int
}

Fixed::Fixed(const int n)
{
	this->_fpoint = (float)n * (1 << this->_fbit);
}

float Fixed::toFloat(void) const
{
	return (this->_fpoint / (float)(1 << this->_fbit));
}

int Fixed::toInt(void) const
{
	return (this->_fpoint / (int)(1 << this->_fbit));
}

std::ostream &operator<<(std::ostream & output, const Fixed & rhs)
{
	output << rhs.toFloat();
	return (output);
}
