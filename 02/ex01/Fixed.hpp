#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <sstream>
#include <fstream>

class Fixed
{
	private:
		int _fpoint;
		static const int _fbit;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &cpy);
		void operator = (const Fixed & other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		//ex01
		Fixed(const int n);
		Fixed(const float f);

		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream & output, const Fixed & rhs);
#endif
