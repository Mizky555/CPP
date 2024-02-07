#include <iostream>
#include "Span.hpp"
int main()
{
	{
		std::cout << "~~~~~~~OK~~~~~~" << std::endl;
		try {
			Span sp = Span(6);
			sp.addNumber(0);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(10);
			// sp.addNumber(13);
			std::cout << "longestSpan -> " << sp.longestSpan() << std::endl;
			std::cout << "shortestSpan -> " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "~~~~~~~Too much~~~~~~" << std::endl;
		try {
			Span sp = Span(6);
			sp.addNumber(0);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(10);
			sp.addNumber(13);
			sp.addNumber(23);
			std::cout << "longestSpan -> " << sp.longestSpan() << std::endl;
			std::cout << "shortestSpan -> " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "~~~~~~~Too Little~~~~~~" << std::endl;
		try {
			Span sp = Span(6);
			sp.addNumber(0);
			// sp.addNumber(3);
			// sp.addNumber(17);
			// sp.addNumber(9);
			// sp.addNumber(10);
			// sp.addNumber(13);
			std::cout << "longestSpan -> " << sp.longestSpan() << std::endl;
			std::cout << "shortestSpan -> " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "~~~~~~~Already this number~~~~~~" << std::endl;
		try {
			Span sp = Span(6);
			sp.addNumber(3);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(10);
			// sp.addNumber(13);
			std::cout << "longestSpan -> " << sp.longestSpan() << std::endl;
			std::cout << "shortestSpan -> " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}

// ุุ6 3 17 9 11
// 17-6 = 14 long
// max-min

// 11-9 = 2 short

// int main()
// {
// 	int data[5] = {-6 ,-5 ,9 ,11, 17};
// 	int min;
// 	int max;
// 	int n;

// 	min = data[0];
// 	for (int i = 0; i <= 4; i++)
// 	{
// 		if (min >= data[i])
// 			min = data[i];
// 	}
// 	// std::cout << "min = " << min << std::endl;

// 	max = data[0];
// 	for (int i = 0; i <= 4; i++)
// 	{
// 		if (max <= data[i])
// 			max = data[i];
// 	}
// 	// std::cout << "max = " << max << std::endl;


// 	min = max;
// 	for (int i = 0 ; i <= 4 ; i++)
// 	{
// 		for (int j = 1 ; j <= 4 ; j++)
// 		{
// 			if (i != j)
// 			{
// 				if (data[i] >= data[j])
// 					n = data[i] - data[j];
// 				else
// 					n = data[j] - data[i];
// 				if (n < min)
// 					min = n;
// 			}
// 		}
// 	}
// 	std::cout << "min = " << min << std::endl;

// 	return (0);
// }
