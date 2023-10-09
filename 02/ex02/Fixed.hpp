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
		//ex02
		bool operator > (const Fixed & other) const;
		bool operator < (const Fixed & other) const;
		bool operator >= (const Fixed & other) const;
		bool operator <= (const Fixed & other) const;
		bool operator == (const Fixed & other) const;
		bool operator != (const Fixed & other) const;
		Fixed operator + (const Fixed & other) const;
		Fixed operator - (const Fixed & other) const;
		Fixed operator * (const Fixed & other) const;
		Fixed operator / (const Fixed & other) const;
		Fixed Fixed::operator ++ ();
		Fixed Fixed::operator -- ();
		Fixed & Fixed::operator ++ (int);
		Fixed & Fixed::operator -- (int);
		Fixed & Fixed::operator min (Fixed & s1, Fixed & s2);
		Fixed & Fixed::operator max (Fixed & s1, Fixed & s2);

};

std::ostream &operator<<(std::ostream & output, const Fixed & rhs);
#endif