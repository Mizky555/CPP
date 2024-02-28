#include <iostream>
#include <stack>
#include <sstream>

int main()
{
    std::string str = "1     2 + 1 -";
    std::stringstream ss(str);
    std::stack<int> data;
    std::string cstr;
    int i = 0;

    while (ss >> cstr)
    {
        if (cstr == "-"|| cstr == "+")
        {
            std::cout << "+-" << std::endl;
        }
        else
        {data.push(std::stoi(cstr));
        std::cout << "cstr = " << data.top() << std::endl;
        }
    }
    return 0;
}
