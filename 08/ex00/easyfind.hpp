#include <iostream>

class NotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return "Not Found";
	}
};

template <typename T>
size_t easyfind(T &container, int data)
{
	typename T::iterator it = std::find(container.begin(), container.end(), data);
	if (it == container.end())
		throw NotFoundException();
	return (std::distance(container.begin(), it));
}
