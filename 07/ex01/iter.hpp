#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arry, int len, void (*f)(T &))
{
	for (int i = 0 ; i < len ; i++)
		f(arry[i]);
}

template <typename T, typename A>
void iter(T *arry, int len, void (*f)(A &))
{
	for (int i = 0 ; i < len ; i++)
		f(arry[i]);
}

template <typename T>
void print(T &c)
{
	std::cout << c << std::endl;
}

#endif
