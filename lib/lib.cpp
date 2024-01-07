#include <lib/lib.h>

bool linkCheck()
{
    return true;
}
int mathOp(int x, int y, int b)
{
    if (b == 1)
        return(x + y);
    if(b == 2)
        return(x - y);
    if(b == 3)
        return(x * y);
    else
        return 0;
}