#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "error: argc != 2" << std::endl;
	else
	{
		ScalarConverter s;
		s.convert(argv[1]);
	}
	return (0);
}
