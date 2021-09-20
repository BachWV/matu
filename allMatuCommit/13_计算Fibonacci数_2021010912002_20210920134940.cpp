#include<stdio.h>

int main()
{
    int n,m,x;
    int sum=1;
    int i=0;
    scanf("%d",&n);
    if(n%2==0)
    {
        m=n/2;
        do
        {
            sum=sum+2*i;
            i=i+1;
        }    
        while(i<m);
    } 
    else if(n%2!=0&&n!=1)
    {
        m=(n+1)/2;
        i=1;
        do
        {
            sum=sum+2*i-1;
            i=i+1;
        }
        while(i<m);
    }
    printf("%d",sum);
    return 0;
}