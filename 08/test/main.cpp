#include <iostream>

class Aaa
{
	private:
		int a;
	public:
		Aaa();
		~Aaa();
		int getA() const;

};

Aaa::Aaa() : a(8)
{
	std::cout << "Hello" << std::endl;
}

Aaa::~Aaa()
{
	std::cout << "Bye" << std::endl;
}

int Aaa::getA() const
{
	return (this->a);
}

int main()
{
	Aaa a;
	std::cout << "getA = " << a.getA() << std::endl;
	return (0);
}
