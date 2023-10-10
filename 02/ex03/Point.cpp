#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <fstream>

Point::Point() : _x(0), _y(0)
{

}
Point::~Point()
{

}
Point::Point(const float x, const float y) : _x(x), _y(y)
{

}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}

Point::Point(Point const & cpy) : _x(cpy.getX()), _y(cpy.getY())
{

}

Point & Point::operator = (Point & other)
{
	return (other);
}


//a = b
//this คือ pointer ที่ชี้ไปที่ a
