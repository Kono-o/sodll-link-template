#include <lib/lib.h>

bool linkCheck()
{
    return true;
}
int mathOp(int x, int y, bool b)
{
    if (b)
        return(x + y);
    else
        return(x * y);
}