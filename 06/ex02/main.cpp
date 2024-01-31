#include "Base.hpp"


Base * generate(void)
{
	srand(time(0));
	switch (rand() % 3)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "->A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "->B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "->C" << std::endl;
	else
		std::cout << "error" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "->A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "->B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "->C" << std::endl;
	else
		std::cout << "error" << std::endl;
}


int main()
{
	Base* p = generate();
	identify(p);
	identify(*p);
	return 0;
}
