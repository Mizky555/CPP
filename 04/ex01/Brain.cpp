#include <iostream>
#include "Brain.hpp"


Brain::Brain()
{
	this->_ideas = new std::string;
	std::cout << "Hello Brain"<< std::endl;
}
Brain::~Brain()
{
	delete[] this->_ideas;
	std::cout << "Bye Bye Brain" << std::endl;
}
Brain::Brain(const Brain &cpy)
{
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy._ideas[i];
	std::cout << "Brain x 100" << std::endl;
}
Brain & Brain::operator = (Brain const & other)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "Brain=tofu" << std::endl;
	return (*this);
	//this->_ideas = other._ideas;
	//return (*this);
}
std::string *Brain::getIdeas() const
{
	return (this->_ideas);
}
