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

Point::Point(const Point &cpy)
{
	*this = cpy;
}

Point & Point::operator = (Point & other)
{
	return (other);
}
