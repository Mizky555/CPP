#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <stack>
#include <cctype>
#include <sstream>
#include <string>
#include <cstdlib>
class PmergeMe
{
    private:
        std::list<int> _list;
        std::map<int, int> _map;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe & operator=(RPN const & cpy);
        PmergeMe(PmergeMe const & cpy);


        class NegativeNumberException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: input is negative number.");
                }
        };
        class NotDigitException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: worng input is not digit.");
                }
        };
};

#endif