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
    this->_list = cpy._list;
    this->_map = cpy._map;
    this->_sortlist = cpy._sortlist;
    this->_sortmap = cpy._sortmap;
    this->_timelist = cpy._timelist;
    this->_timemap = cpy._timemap;
    return (*this);
}

void PmergeMe::sort(int argc, char **argv)
{
    addNumber(argc, argv);
    printNumberBefore();
    sort_list();
    sort_map();
    printNumberAfter();
    printTime();
}


void PmergeMe::printTime()
{
    std::cout << "Time to process a range of "  << _sortlist.size() << " elements with std::list : " << std::fixed << _timelist << " us" << std::endl;
	std::cout << "Time to process a range of "  << _sortmap.size() << " elements with std::map :  " << std::fixed << _timemap << " us" << std::endl;
}
void PmergeMe::sort_map()
{
    clock_t start = clock();
    merge_map();
    insert_map();
    clock_t end = clock();
    _timemap = (double(end - start) / CLOCKS_PER_SEC);
}

void PmergeMe::sort_list()
{
    clock_t start = clock();
    merge_list();
    insert_list();
    clock_t end = clock();
    _timelist = (double(end - start) / CLOCKS_PER_SEC);
}

int PmergeMe::min_list()
{
	std::list<int>::const_iterator it = _list.begin();
	int min = *it;

	it++;
	for ( ; it != _list.end() ; it++)
    {
		if (*it < min)
			min = *it;
	}
	return (min);
}

int PmergeMe::min_map()
{
    std::map<int, int>::iterator it = _map.begin();
    int  min = -99;

    if (min == -99)
    {
        for ( ; it != _map.end() ; it++)
        {
            if (it->second != -99)
                break;
        }
        min = it->second;
    }
    it = _map.begin();
    for ( ; it != _map.end() ; it++)
    {
        if (it->second < min && it->second > -99)
            min = it->second;
    }
    return (min);
}

void PmergeMe::insert_list()
{
    int min;
    while (!(_list.empty()))
    {
        min = min_list();
        _sortlist.push_back(min);
        delete_list(min);
    }
}

void PmergeMe::insert_map()
{
    int min;
    int delete_map_first;
    int size = _map.size();

    for (int i = 0 ; i < size ; i++)
    {
        min = min_map();
        _sortmap.insert(std::make_pair(i, min));
        delete_map_first = index_map_first(min);
        delete_map(delete_map_first);
    }
}

int PmergeMe::index_map_first(int min)
{
    std::map<int, int>::iterator it = _map.begin();
    int index = -1;

    for ( ; it != _map.end() ; it++)
    {
        if (it->second == min)
            break;
    }
    index = it->first;
    return (index);
}

void PmergeMe::delete_map(int min)
{
    std::map<int, int>::iterator it = _map.find(min);
    it->second = -99;
}

void	PmergeMe::delete_list(int min)
{
	std::list<int>::iterator it = _list.begin();

	while (it != _list.end())
    {
		if (*it == min)
        {
			it = _list.erase(it);
			return;
		}
		it++;
	}
}

int PmergeMe::lenSplit_list()
{
    int len_list = (_list.size()) / 2;
    int len = 0;

    while (len_list >= 2)
    {
        len_list = len_list/2;
        len++;
    }
    return (len);
}

int PmergeMe::lenSplit_map()
{
    int len_map = (_map.size()) / 2;
    int len = 0;

    while (len_map >= 2)
    {
        len_map = len_map/2;
        len++;
    }
    return (len);
}

void PmergeMe::move_list(std::list<int>::iterator &it, int n)
{
    for (int i = 0 ; i < n ; i++)
        it++;
}

void PmergeMe::move_map(std::map<int, int>::iterator &it_1, std::map<int, int>::iterator &it_2)
{
    int tmp = it_1->second;

	it_1->second = it_2->second;
	it_2->second = tmp;
}

void	PmergeMe::merge_map()
{
    std::map<int, int>::iterator num1;
    std::map<int, int>::iterator num2;
    std::map<int, int>::iterator num_1;
    std::map<int, int>::iterator num_2;
	int lensplit = lenSplit_map();
	int n = _map.size() / 2;
    int j = 0;
    int i = 0;

    while (i < lensplit)
    {
        num1 = _map.find(j);
        num_1 = _map.find(j + 1);
        num2 = _map.find(j + n);
        num_2 = _map.find((j + n) + 1);
        if ((num1->second > num_1->second) || (num2->second > num_2->second))
        {
            if (num1->second > num_1->second)
                move_map(num1, num_1);
            else
                move_map(num2, num_2);
            j = j + 2;
        }
        i++;
    }

}

void PmergeMe::merge_list()
{
    std::list<int>::iterator num1 = _list.begin();
    std::list<int>::iterator num2 = _list.begin();
    std::list<int>::iterator num_1 = _list.begin();
    std::list<int>::iterator num_2 = _list.begin();
    int len = lenSplit_list();
    int len_2 = _list.size();

    move_list(num_1, 1);
    move_list(num2, len_2 / 2);
    move_list(num_2, (len_2 / 2) + 1);
    for (int i = 0 ; i < len ; i++)
    {
        if (*num1 > *num_1 || *num2 > *num_2)
        {
            if (*num1 > *num_1)
                iter_swap(num1, num_1);
            else if (*num2 > *num_2)
                iter_swap(num2, num_2);
            move_list(num1, 2);
            move_list(num2, 2);
            move_list(num_1, 2);
            move_list(num_2, 2);
        }
    }
}

void PmergeMe::printNumberBefore()
{
    std::cout << "Before: ";
    for (std::list<int>::iterator it = _list.begin() ; it != _list.end() ; it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::printNumberAfter()
{
    std::cout << "After:  ";
    for (std::list<int>::iterator it = _sortlist.begin() ; it != _sortlist.end() ; it++)
    {
        std::cout << *it << " ";
    }
	std::cout << std::endl;
}
void PmergeMe::addNumber(int argc, char **argv)
{
    int num;

        //  std::cout << "argc = " << argc << std::endl;
        // for (int i = 0 ; i < argc ; i++)
        //     std::cout << "---i" << argv[i] << std::endl;
    // std::cout << "meow" << std::endl;
    for (int i = 0 ; i < (argc - 1) ; i++)
    {
        checkIsdigit(argv[i + 1]);
        num = atoi(argv[i + 1]);
        if (num < 0)
            throw NegativeNumberException();
        _list.push_back(num);
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
