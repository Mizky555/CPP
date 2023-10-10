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

void Fixed::operator = (const Fixed & other)//assignement operator เซตค่าเท่ากับเท่ากับ (ต้องมี object ก่อน)
{
	// this->setRawBits(other.getRawBits());
	this->_fpoint = other._fpoint;
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
