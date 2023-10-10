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

Fixed::Fixed(const Fixed &cpy) //copy comstructor สร้างให้ค่าขึ้นมาเลย ,con
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
//that returns the raw value of the fixed-point value.

void Fixed::setRawBits(int const raw)
{
	this->_fpoint = raw;
}
//that sets the raw value of the fixed-point number.
