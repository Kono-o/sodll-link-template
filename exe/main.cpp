#include <iostream>
#include "../lib/lib.h"

int main()
{
    if (linkCheck())
        std::cout << "linked :D\n";
    else
        std::cout << "not linked D:\n";

    int a = 0; int b = a;
    std::cout <<"enter 2 integers\n";

    std::cin >> a;
    std::cin >> b;

    std::cout << "add:" << mathOp(a,b,1) << "\n";
    std::cout << "mult:" << mathOp(a,b,2) << "\n";
    std::cout << "subs:" << mathOp(a,b,3) << "\n";
}