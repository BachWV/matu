#include<stdio.h>

int main()
{
    int sum=0,n,a=1,b=1;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=b;
        b=sum;
        sum=a+b;
    }
    printf("%d",sum);
    return 0;
}