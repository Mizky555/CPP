#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <cctype>
#include <sstream>
#include <string>
#include <cstdlib>
class RPN
{
    private:
        std::stack<int> _stack;
    public:
        RPN();
        ~RPN();
        RPN & operator=(RPN const & cpy);
        RPN(RPN const & cpy);

        void calculate(std::string argv);
        int is_operator(std::string str);
        int zero_to_nine(std::string str);
        int check_input(std::string str);
        class WrongInputException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: worng input");
                }
        };
};

#endif