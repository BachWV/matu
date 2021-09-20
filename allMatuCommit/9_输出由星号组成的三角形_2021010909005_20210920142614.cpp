
#include <stdio.h>
int main()
{
    int i, space, rows,n, k=0;

    scanf("%d",&n);
    rows=(n+1)/2;
    if(n%2==0||n<=0||n>80)printf("error");
    else
    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf(" ");
        }

        while(k != 2*i-1)
        {
            printf("*");
            ++k;
        }

        printf("\n");
    }
    printf("\n");
    return 0;
}


















