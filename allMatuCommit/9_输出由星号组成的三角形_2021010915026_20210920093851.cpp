#include<stdio.h>
int main()
{
int i=1;
int j=1;
int n=0;
int m=1;
scanf("%d",&n);
back:if((n+2)%2==0)
{
	printf("error");
	return 0;
}
else 
{
 while(j<=(n-1)/2-(i-1)/2)
{
	printf(" ");
	j++;
}
    while(m<=i)
    {
 	   printf("*");
	   m++;
    }
	printf("\n");
	j=1;
	m=1;
    i=i+2;
}
if(i<=n)
{
	goto back;
}
else
{
	return 0;
}
}










