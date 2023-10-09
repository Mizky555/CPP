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

void Fixed::operator = (const Fixed & other)
{
	this->_fpoint = other._fpoint;
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


Fixed & Fixed::&operator ++ () //befor
{

}

Fixed & Fixed::&operator -- ()
{

}

Fixed & Fixed::operator ++ (int) // increment/decrement
{

}

Fixed & Fixed::operator -- (int) //after
{

}

i = 1

printf( ++i ); i = 1
printf( i ); i = 2

i = 1

printf( i++ ); i = 2
printf( i ); i = 2
