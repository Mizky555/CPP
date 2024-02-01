#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	_array = new T[0];
}
template<typename T>
Array<T>::~Array()
{
	delete [] _array;
}

template<typename T>
Array<T>::Array(const Array &cpy)
{
	*this = cpy;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &cpy)
{
	unsigned int i;

	_len = cpy.size();
	_array = new T[_len];
	for (i = 0 ; i < _len ; i++)
		_array[i] = cpy._array[i];
	return (*this);
}

//

template<typename T>
Array<T>::Array(unsigned int n) : _len(n)
{
	//this->_len = n;
	_array = new T[n];
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= _len)
		throw OutOfRangeException();
	return _array[i];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (_len);
}

template<typename T>
const char	*Array<T>::OutOfRangeException::what() const throw()
{
	return "OutOfRangeException";
}

#endif
