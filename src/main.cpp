#include "Dbg.h"

int main()
{
    int x = 20;
    int y = 22;
    DBG_INFO("Values: x = {1}, y = {0}", y, x);

    return 0;
}