#include "Fixed.hpp"
#include "Point.hpp"

Fixed area(Point const a, Point const b, Point const c)
{
	return ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() + (a.getY() - b.getY())));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed p1 = area(point, a, b);
	Fixed p2 = area(point, b, c);
	Fixed p3 = area(point, c, a);
	Fixed p = area(a, b, c);

	if ((p1 + p2 + p3) == p)
		return (1);
	return (0);
}
