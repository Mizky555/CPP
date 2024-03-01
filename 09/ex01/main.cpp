#include "RPN.hpp"


int main(int argc, char **argv)
{
    std::stack<int> data;
    RPN rpn;
    
    if (argc != 2)
    {
        std::cout << "argc != 2" << std::endl;
        return (0);
    }
    if (argv[1] == NULL || argv[1][0] == '\0')
        std::cout << "error" << std::endl;
    try
    {
        rpn.calculate(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
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
