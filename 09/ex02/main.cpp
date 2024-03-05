#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cout << "argc <= 1" << std::endl;
        return 0;
    }
    try
    {
        PmergeMe pm;
        // std::cout << "argc = " << argc << std::endl;
        // for (int i = 0 ; i < argc ; i++)
        //     std::cout << "---i" << argv[i] << std::endl;

        pm.sort(argc, argv);
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
