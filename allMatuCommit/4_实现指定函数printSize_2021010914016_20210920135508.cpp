#include "stdio.h"
void printSize(int *first, int *last)
{
    if(first == 0 || last == 0 || last - first < 0)
    {
        printf("error");
        return;
    }
    int a, b;
    a = last - first + 1;
    b = a * 4;
    printf("%d,%d\n", a, b);
}