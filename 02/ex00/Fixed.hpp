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
		Fixed & operator = (Fixed const & other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
