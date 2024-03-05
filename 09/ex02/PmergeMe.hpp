#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <stack>
#include <cctype>
#include <sstream>
#include <string>
#include <cstdlib>
#include <list>
#include <map>
class PmergeMe
{
    private:
        std::list<int> _list;
        std::map<int, int> _map;
        std::list<int> _sortlist;
        std::map<int, int> _sortmap;

        double _timelist;
        double _timemap;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe & operator=(PmergeMe const & cpy);
        PmergeMe(PmergeMe const & cpy);

        void sort(int argc, char **argv);
        void addNumber(int argc, char **argv);
        void checkIsdigit(char *str);
        void printNumberBefore();
        void sort_list();
        void merge_list();
        int lenSplit_list();
        void move_list(std::list<int>::iterator &it, int n);
        void insert_list();
        int min_list();
        void delete_list(int min);

        void sort_map();
        void merge_map();
        int lenSplit_map();
        void move_map(std::map<int, int>::iterator &it_1,std::map<int, int>::iterator &it_2);
        void insert_map();
        int min_map();
        int index_map_first(int min);
        void delete_map(int min);

        void printNumberAfter();
        void printTime();
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
