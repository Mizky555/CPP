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

// int main()
// {
//     std::vector<std::string> s;
//     s.push_back("Hello");
//     s.push_back("my");
//     s.push_back("name");
//     s.push_back("is");
//     s.push_back("Opal");
//     // std::cout << "size " << s.size() << std::endl;
//     // for (unsigned long i = 0 ; i < s.size() ; i++)
//     //     std::cout << s[i] << " ";
//     // std::cout << "." << std::endl;

//     s.erase(s.begin() + 0);
//     for (unsigned long i = 0 ; i < s.size() ; i++)
//         std::cout << s[i] << " ";
//     std::cout << "." << std::endl;

//     s.pop_back();
//     for (unsigned long i = 0 ; i < s.size() ; i++)
//         std::cout << s[i] << " ";
//     std::cout << "." << std::endl;
//     return (0);
// }
