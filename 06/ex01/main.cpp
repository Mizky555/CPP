#include "Serializer.hpp"

int main()
{
	Data	d;

	uintptr_t raw;
	Data* ptr;

	d.num = 42;
	d.str = "meow";

	raw = Serializer::serialize(&d);
	ptr = Serializer::deserialize(raw);

	std::cout << "test " << ptr->num << std::endl;
	std::cout << "test " << ptr->str << std::endl;

	return (0);
}
