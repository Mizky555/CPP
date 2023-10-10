#include <iostream>
#include "Fixed.hpp"
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;

Fixed c(20);
Fixed d(0.0054f);
bool	res1 = c <= d;
bool	res2 = c >= d;
std::cout << "res1 = " << res1 << std::endl;
std::cout << "res2 = " << res2 << std::endl;
for (int i = 0; i < 50; i++)
{
	d++;
	++d;
}
std::cout << d << std::endl;
res1 = a < d;
std::cout << "a < d ? " << res1 << std::endl;
Fixed	e(20.00f);
res1 = c != e;
res2 = c == e;
std::cout << "res 1 = " << res1 << std::endl;
std::cout << "res 2 = " << res2 << std::endl;
Fixed	f(2);
Fixed	g(3);
std::cout << "f + g = " << f + g << std::endl;
std::cout << "f - g = " << f - g << std::endl;
std::cout << "f * g = " << f * g << std::endl;
std::cout << "f / g = " << f / g << std::endl;
std::cout << Fixed::min( f + g, f - g) << std::endl;
std::cout << Fixed::max( f + g, f - g) << std::endl;
return 0;
}
