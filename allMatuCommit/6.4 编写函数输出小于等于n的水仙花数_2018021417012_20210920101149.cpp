#include "stdio.h"
int find(int n)
{
    if(n < 153 || n > 999)
        return 0;
    else if(n > 152 && n < 370)
        return 1;
    else if(n > 369 && n < 371)
        return 2;
    else if(n > 370 && n < 407)
        return 3;
    else
        return 4;
}