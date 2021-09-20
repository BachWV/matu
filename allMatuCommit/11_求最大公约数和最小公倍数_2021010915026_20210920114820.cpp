#include<stdio.h>
int main()
{
	int a,b,n,m,base1,base2;
	scanf("%d %d",&a,&b);
	for(n=1;n<=a&&n<=b;n++)
	{
		if(a%n==0&&b%n==0)
		{
			base1=n;
		}
	} 
	for(m=1000000;m>=a&&m>=b;m--)
	{
		
		if(m%a==0&&m%b==0)
		{
		    base2=m;
		}
	}
	printf("%d,%d",base1,base2); 
}
