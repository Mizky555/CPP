#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
    if (argc != 2)
    try
    {
        PmergeMe pm;
        pm.sort(argc, argv[1]);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
    
}

// "1 2 * 2 / 2 * 2 4 - +"
// s 1 2
// "* 2 / 2 * 2 4 - +"
// 1 * 2 = 2
// s 2
// "2 / 2 * 2 4 - +"
// s 2 2
// "/ 2 * 2 4 - +"
// 2 / 2 = 1
// s 1
// "2 * 2 4 - +"
// s 1 2
// "* 2 4 - +"
// 1 * 2 = 2
// s 2
// "2 4 - +"
// s 2 2
// "4 - +"
// s 2 2 4
// "- +"
// 2 - 4 = -2
// s 2 - 2
// "+"
// 2 + -2 = 0
