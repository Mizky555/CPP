#ifndef POINT_HPP
#	define POINT_HPP
#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <fstream>

class Point
{
	private:
		Fixed const _x; //attribute
		Fixed const _y;
	public:
		Point();
		~Point();
		Point(const float x, const float y);
		Point(const Point &cpy);
		Point & operator = (Point & other);


};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
