#include "Parent.hpp"

Parent::Parent(): _firstName("hello"), _lastName("world"), _age(0) {

}

Parent::Parent(std::string fisrtName, std::string lastName) : _firstName(fisrtName), _lastName(lastName), _age(0)
{
	std::cout << "Parent create" << std::endl;
}
Parent::Parent(std::string fisrtName, std::string lastName, int age) : _firstName(fisrtName), _lastName(lastName), _age(age)
{
	std::cout << "Parent create" << std::endl;
}
Parent::Parent(std::string firstName) : _firstName(firstName)
{
	std::cout << "Parent create" << std::endl;
}
Parent::~Parent(){

};
// GETTER
std::string Parent::getFirstName()
{
	return _firstName;
}
std::string Parent::getLastName()
{
	return _lastName;
}
int Parent::getAge()
{
	return _age;
}
std::string Parent::getFullName()
{
	return (_firstName + " " + _lastName);
}
// SETTER
void Parent::setFirstName(std::string firstName)
{
	_firstName = firstName;
}
void Parent::setLastName(std::string lastName)
{
	_lastName = lastName;
}
void Parent::setAge(int age)
{
	_age = age;
}
void Parent::setFullName(std::string firstName, std::string lastName)
{
	_firstName = firstName;
	_lastName = lastName;
}

void Parent::youngOrOld()
{
	if (this->getAge() > 20)
		throw ThisGuyIsOld();
	else
		throw ThisGuyIsYoung();
}

