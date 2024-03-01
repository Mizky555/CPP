#include "RPN.hpp"


RPN::RPN()
{

}

RPN::~RPN()
{

}

RPN::RPN(RPN const & cpy)
{
    *this = cpy;
}

RPN & RPN::operator=(RPN const & cpy)
{
    this->_stack = cpy._stack; 
    return (*this);
}

int RPN::is_operator(std::string str)
{
    int n = 0;
    for (size_t i = 0 ; i < str.length() ; i++)
    {
        if (str[i] == '+')
            n++;
        else if (str[i] == '-')
            n++;
        else if (str[i] == '*')
            n++;
        else if (str[i] == '/')
            n++;
        else
            return (0);
    }
    if (n == 1)
        return (1);
    return (0);
}

int RPN::zero_to_nine(std::string str)
{
    for (size_t i = 0 ; i < str.length() ; i++)
    {
        if (isdigit(str[i]) != 1)
            return (0);
    }
    int num = atoi(str.c_str());
    if (num >= 0 && num <= 9)
        return (1);
    return (0);
}

int RPN::check_input(std::string str)
{
    if ((zero_to_nine(str) == 0))
    {
        if (is_operator(str) == 0)
            return (0);
    }
    else if (is_operator(str) == 0)
    {
        if (zero_to_nine(str) == 0)
            return (0);
    }
    return (1);
}

void RPN::calculate(std::string str)
{
    std::stringstream ss(str);
    std::string cstr;
    int num = 0;
    int op = 0;
    int a;
    int b;
    int i  = 0;

    while (ss >> cstr)
    {
        if (check_input(cstr) == 0)
            throw WrongInputException();
        if ((i <= 1) && zero_to_nine(cstr) == 0)
            throw WrongInputException();
        if (zero_to_nine(cstr) == 1)
        {
            _stack.push(atoi(cstr.c_str()));
            num++;
        }
        else if (is_operator(cstr) == 1)
        {
            if (_stack.size() <= 1)
                throw WrongInputException();
            if (cstr == "-")
            {
                b = _stack.top();
                _stack.pop();
                a = _stack.top();
                _stack.pop();
                _stack.push(a - b);
            }
            else if (cstr == "+")
            {
                b = _stack.top();
                _stack.pop();
                a = _stack.top();
                _stack.pop();
                _stack.push(a + b);
            }
            else if (cstr == "*")
            {
                b = _stack.top();
                _stack.pop();
                a = _stack.top();
                _stack.pop();
                _stack.push(a * b);
            }
            else if (cstr == "/")
            {
                b = _stack.top();
                _stack.pop();
                a = _stack.top();
                _stack.pop();
                if (b == 0)
                    throw WrongInputException();
                _stack.push(a / b);
            }
            op++;
        }
        i++;
    }
    if ((num - op) != 1)
        throw WrongInputException();
    std::cout << _stack.top() << std::endl;
}