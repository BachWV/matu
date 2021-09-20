
#include <stdio.h>
int main()
{
    int i, space, rows, k=0;

    scanf("%d",&rows);
    if(rows%2==0||rows<=0)printf("error");
    else
    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }

    return 0;
}


















