#include <iostream>
#include "../lib/lib.h"

int main()
{
    if (linkCheck())
        std::cout << "linked :D" << std::endl;
    else
        std::cout << "not linked D:" << std::endl;
}