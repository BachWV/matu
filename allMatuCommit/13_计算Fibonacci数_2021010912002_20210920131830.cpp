#include<stdio.h>

int main()
{
    int n,i,j;
    int sum=1;
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            sum=sum+2i;
        }
    } 
    else if(n%2!=0&&n!=1)
    {
        for(j=1;j<(n+1)/2;j++)
        {
            sum=(sum+2i)-1;
        }
    }
    printf("%d",sum);
    return 0;
}