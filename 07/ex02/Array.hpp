#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>


template <class T>
class Array
{
	private:
		 T *_array;
		 unsigned int _len;
	public:
		Array();
		~Array();
		Array &operator=(const Array &cpy);
		Array(unsigned int n);

		Array(const Array &cpy);
		T &operator[](unsigned int i);

		unsigned int size() const;

		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"

#endif
