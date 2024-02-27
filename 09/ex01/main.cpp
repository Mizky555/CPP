#include "RPN.hpp"

int check_type(std::string argv)
{
    
}

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
    int n = check_type(argv[1]);
    while (argv[1])
    {

    }
    return (1);
    
}