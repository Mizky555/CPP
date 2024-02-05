#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    int data[10] = {1, 11, 2, 22, 0, 8, 88, 3, 33, 4};
    int num = 11;

    for (int i = 0; i <= 9; i++)
        std::cout << "data[" << i << "] = " << data[i] << std::endl;

    std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;

    std::vector<int> vec;
    for (int i = 0; i <= 9; i++)
        vec.push_back(data[i]);
    try
    {
        std::cout << "Search: " << num << std::endl;
        easyfind(vec, num);
        std::cout << "Found it" << std::endl;
    }
    catch (std::exception &e)
    {
            std::cout << e.what() << std::endl;
    }
    return 0;
}
