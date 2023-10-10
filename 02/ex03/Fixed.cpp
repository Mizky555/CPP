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

//ex02

bool Fixed::operator > (const Fixed & other) const//comparison
{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator < (const Fixed & other) const
{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator >= (const Fixed & other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator <= (const Fixed & other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator == (const Fixed & other) const
{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator != (const Fixed & other) const
{
	return (this->toFloat() != other.toFloat());
}



Fixed Fixed::operator + (const Fixed & other) const// + - * / arithmetic
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator - (const Fixed & other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator * (const Fixed & other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator / (const Fixed & other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}



Fixed Fixed::operator ++ () // increment/decrement
{
	this->_fpoint++;
	return (*this);
}

Fixed Fixed::operator -- () //pre
{
	this->_fpoint--;
	return (*this);
}

Fixed Fixed::operator ++ (int) //post
{
	Fixed tmp(*this);
	this->_fpoint++;
	return (tmp);
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);
	this->_fpoint--;
	return (tmp);
}




Fixed const & Fixed::min (const Fixed & s1, const Fixed & s2)
{
	if (s1.toFloat() < s2.toFloat())
		return (s1);
	return (s2);
}

Fixed const & Fixed::max (const Fixed & s1, const Fixed & s2)
{
	if (s1.toFloat() > s2.toFloat())
		return (s1);
	return (s2);
}

// Fixed & Fixed::min (Fixed & s1, Fixed & s2)
// {

// }

// Fixed & Fixed::max (Fixed & s1, Fixed & s2)
// {

// }
