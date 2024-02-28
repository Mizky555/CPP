#include "RPN.hpp"


int main(int argc, char **argv)
{
    std::stack<int> data;

    if (argc != 2)
    {
        std::cout << "argc != 2" << std::endl;
        return (0);
    }
    // std::stringstream ss(argv[1]);
    // std::string str;
    // ss >> str;
    if (argv[1] == NULL || argv[1][0] == '\0')
        std::cout << "error" << std::endl;
    return (1);
    
}