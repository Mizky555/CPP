#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack():std::stack<T>() {};
		~MutantStack(){};
		MutantStack(const MutantStack &cpy)
		{
			*this = cpy;
		}
		MutantStack &operator=(const MutantStack &cpy)
		{
			std::stack<T>::operator=(cpy);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (std::stack<T>::c.begin());
		}
		iterator end()
		{
			return (std::stack<T>::c.end());
		}
};

#endif
