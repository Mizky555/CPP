#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <cstdlib>
#include <iomanip>
#include <sstream>
#include <iostream>

struct Data
{
	int num;
	std::string str;
};

class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer & cpy);
		Serializer & operator=(const Serializer & cpy);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
