#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(PmergeMe const & cpy)
{
    *this = cpy;
}

PmergeMe & PmergeMe::operator=(PmergeMe const & cpy)
{
    this->_stack = cpy._stack; 
    return (*this);
}

void PmergeMe::sort(int argc, char **argv)
{
    if (argc >= 2)
    {
        addNumber(argc, argv)
    }
    else
        std::cout << "argc <= 1" << std::endl;
}

void PmergeMe::addNumber(int argc, char **argv)
{
    int num;

    for (int i = 0 ; i < (argc - 1) ; i++)
    {
        checkIsdigit(argv[i + 1])
        num = atoi(argv[i + 1]);
        if (num < 0)
            throw NegativeNumberException();
        _list.push_black(num);
        _map.insert(std::make_pair(i, num));
    }
}

void PmergeMe::checkIsdigit(char *str)
{
     int i = 0;
     while (str[i])
     {
        if (isdigit(str[i]) != 1)
            throw NotDigitException();
        i++;
     }
}
