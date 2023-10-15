#ifndef BRAIN_HPP
#	define BRAIN_HPP
#include <iostream>

class Brain
{
	protected:
			std::string *_ideas;
	public:
		Brain();
		~Brain();
		Brain( const Brain &cpy);
		Brain & operator = (Brain const & other);
		std::string *getIdeas() const;


};

#endif
